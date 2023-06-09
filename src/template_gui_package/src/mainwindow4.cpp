#include "mainwindow4.h"
#include "ui_mainwindow4.h"
#include "hello_gui.h"
#include<string.h>
#include <geometry_msgs/Twist.h>
#include "rrtstar.h"
#include<QMessageBox>
#include <QProcess>
//using namespace ali;

#ifndef INF
#define INF 10000000
#endif

bool is_Kinect_running1 = false;
const char * Kinect1 = "rosrun template_gui_package Kinect &";
const char * killKinect1 = "rosnode kill /Kinect1 &";
using std::string;

bool f = false;
bool first_move = false;
static cv::Mat image;
static cv::Mat image2;

int num_of_cols = 640;
int num_of_raws = 480;

int ddd = -30;

//static int x_of_center = 160;
//static int y_of_center = 320;

int max_x1 = 640;
int max_y1 = 215;
int max_z1 = 260;

int min_x1 = 310;
int min_y1 = 62;
int min_z1 = 0;


int max_x2 = 440;
int max_y2 = 215;
int max_z2 = 260;


int min_x2 = 75;
int min_y2 = 62;
int min_z2 = 0;


static int x_of_center = 320;
static int y_of_center = 160;

int x_for_z ;
int y_for_z ;

static QLabel* lab;
//static QLabel* lab2;

QProcess process;

QString output;

int _x1=0;
int _y1=0;
int _z1=0;


int send_x2= x_of_center;
int send_y2= y_of_center;
int send_z2= 0;


int send_x1=x_of_center;
int send_y1=y_of_center;
int send_z1=50;



int e_send_x2=x_of_center;
int e_send_y2=y_of_center;
int e_send_z2= 0 ;


int e_send_x1=x_of_center-40;
int e_send_y1=y_of_center-40;
int e_send_z1=30;

int  x_center = 0;
int  y_center = 0;
uint16_t * depth_data;

QLabel *x_label;
QLabel *y_label;

int time_for_all = 50;

bool IsNodeRunning(const std::string& node_name);




MainWindow4::MainWindow4(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow4)
{
  ui->setupUi(this);

//  nhPtr.reset(new ros::NodeHandle("~"));
//  nhPtr1.reset(new ros::NodeHandle("~"));
  setWindowTitle("control");
  pub1ptr.reset(new ros::NodeHandle("~"));

  RGBptr.reset(new ros::NodeHandle("~"));
  DEPptr.reset(new ros::NodeHandle("~"));
  JRptr.reset(new ros::NodeHandle("~"));
  lab = ui->label_2;
  x_label = ui->label_6;
  y_label = ui->label_7;
  ros_timer = new QTimer(this);
  connect(ros_timer,SIGNAL(timeout()),this,SLOT(spinOnce()));
  ros_timer->start(100);

//  sub = nhPtr->subscribe<sensor_msgs::Image>("/talker/frame",1,&MainWindow4::imageCallback,this);
//  sub1 = nhPtr1->subscribe<sensor_msgs::Image>("/frame2/frame2",1,&MainWindow4::imageCallback1,this);


  pub1 = pub1ptr->advertise<geometry_msgs::Twist>("/point",10);
  RGB = RGBptr->subscribe<sensor_msgs::Image>("/rgb_image",1,&MainWindow4::RGBcallback,this);
  DEP = DEPptr->subscribe<sensor_msgs::Image>("/depth_image",1,&MainWindow4::DEPcallback,this);
  JR = JRptr->advertise<geometry_msgs::Twist>("/JR",50);
  QObject::connect(ui->lineEdit,&QLineEdit::editingFinished,[&]()
  {
    QString command = ui->lineEdit->text();
    QString cl = "";
    for(int i=0 ;i< command.length();i++)
    {
      if(command[i]!=" ")
        cl += command[i];
    }
    if(cl == "clear")
    {
      ui->textEdit->clear();
      return;
    }

    process.setProgram("/bin/sh");
    process.setArguments({"-c",command});
    process.start();
    output = process.readAllStandardOutput();
  }
  );
  QObject::connect(&process,&QProcess::readyReadStandardOutput,[&]()
  {
    output = process.readAllStandardOutput();
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->insertPlainText(output);
    ui->textEdit->moveCursor(QTextCursor::End);
    ui->textEdit->show();
  });

  QObject::connect(&process,&QProcess::errorOccurred,[&](QProcess::ProcessError error)
  {
    QString errormsg = "Error occured: " + QString::number(error);
    QMessageBox::critical(this,"Error",errormsg);
  });

}

MainWindow4::~MainWindow4()
{
  delete ui;
}


void MainWindow4::spinOnce()
{
  if (ros::ok())
  {
    ros::spinOnce();
  } else {
    QApplication::quit();
}
}


void MainWindow4::spin()
{
  if (ros::ok())
  {
    ros::spin();
  } else {
    QApplication::quit();
  }
}


QPixmap Mat_to_pixmap(cv::Mat src)
{
  QImage::Format format=QImage::Format_Grayscale8;
  int bpp = src.channels();
  if (bpp==3) format=QImage::Format_RGB888;
  QImage img(src.cols,src.rows,format);
  uchar *sptr,*dptr;
  size_t linesize = static_cast<size_t>(src.cols*bpp);
  for (int y=0;y<src.rows;y++) {
    sptr=src.ptr(y);
    dptr=img.scanLine(y);
    memcpy(dptr,sptr,linesize);
  }
  if (bpp==3)return  QPixmap::fromImage(img.rgbSwapped());
  return QPixmap::fromImage(img);
}



void MainWindow4::RGBcallback(const sensor_msgs::Image::ConstPtr &msg)
{
 // if (!camera_is_on_1) {ui->frame_2_label->clear(); return;}
  cv_bridge::CvImagePtr k = cv_bridge::toCvCopy(msg,"bgr8");
  image = k->image;
  if (x_center && y_center)
  circle(image, cv::Point(x_center, y_center), 5, cv::Scalar(0, 0, 255), -1);
  QPixmap m = Mat_to_pixmap(image);
  int w = ui->label->width();
  int h = ui->label->height();
  ui->label ->setPixmap( m.scaled(w,h) );
  //QVBoxLayout layout(this);
  //layout.addWidget(ui->label);
  // Set the size policy of the widget to QSizePolicy::Fixed or QSizePolicy::Minimum
}

void MainWindow4::DEPcallback(const sensor_msgs::Image::ConstPtr &msg)
{
  depth_data = (uint16_t*)&msg->data[0];

  //uint16_t pixel = msg->data.at<uint16_t>(y_for_z, x_for_z);
  _z1 = 740 - depth_data[(y_for_z - 30) * image.cols + (x_for_z)];
/*  for (int i = -30;i<=30;i++) {
    for(int j = -30;j<=30;j++){
    int temp = _z1 = 740-depth_data[(y_for_z  + i) * (image.cols) + (x_for_z) + j];
   if (temp > 5 && temp < 280 && temp<_z1 ) _z1 = temp;
    }
  }
*/
  if (_z1 < 0) _z1 = 0;
  if (_z1 > 280) _z1 = 280;
  send_z2 = _z1/10;
  ui->label_8->setNum(send_z2);
}


void MainWindow4::closeEvent(QCloseEvent *event)
{
  not_hide();
}


cv::Mat detect_center_of_object(cv::Mat img, int x ,int y)
{
      vector<vector<cv::Point>> contours;
      vector<cv::Vec4i> hierarchy;
      findContours(img, contours, hierarchy, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
      // Find the contour that contains the point
      cv::Point point(x, y);
      int contourIdx = -1;
      for (size_t i = 0; i < contours.size(); i++)
      {
          double dist = pointPolygonTest(contours[i], point, true);
          if (dist >= 0)
          {
              contourIdx = static_cast<int>(i);
              break;
          }
      }

      // Find the center of the contwidthour
      if (contourIdx >= 0) {
      cv::Moments moment = moments(contours[static_cast<unsigned int>(contourIdx)]);
      // Calculate the center of the contour
      int cx = static_cast<int>(moment.m10 / moment.m00) ;
      int cy = static_cast<int>(moment.m01 / moment.m00) ;
      // Draw a circle at the center of the object
      circle(img, cv::Point(cx, cy), 5, cv::Scalar(0, 0, 255), -1);
      x_center = cx;
      y_center = cy;
      return img;
      }
      x_center = 0;
      y_center = 0;
      return img;
}



void getHSVRange(cv::Vec3b gbr, int& minH, int& maxH, int& minS, int& maxS, int& minV, int& maxV) {
    cv::Mat3b color(1,1,cv::Vec3b(gbr[0], gbr[1], gbr[2])); // convert RGB to BGR for OpenCV
    cv::Mat3b hsv;
    cvtColor(color, hsv, cv::COLOR_BGR2HSV);
    cv::Vec3b hsvColor = hsv(0,0);
    int hue = hsvColor[0];
    int saturation = hsvColor[1];
    int value = hsvColor[2];

    // Set range for hue, saturation, and value to create a mask for the color
    int hueRange = 10;
    int saturationRange = 50;
    int valueRange = 50;

    minH = (hue - hueRange < 0) ? 0 : hue - hueRange;
    maxH = (hue + hueRange > 179) ? 179 : hue + hueRange;
    minS = (saturation - saturationRange < 0) ? 0 : saturation - saturationRange;
    maxS = (saturation + saturationRange > 255) ? 255 : saturation + saturationRange;
    minV = (value - valueRange < 0) ? 0 : value - valueRange;
    maxV = (value + valueRange > 255) ? 255 : value + valueRange;
}



cv::Mat createMask(cv::Mat3b img, int minH, int maxH, int minS, int maxS, int minV, int maxV) {
    cv::Mat3b hsv;
    cvtColor(img, hsv, cv::COLOR_BGR2HSV);

    cv::Mat1b mask;
    inRange(hsv, cv::Scalar(minH, minS, minV), cv::Scalar(maxH, maxS, maxV), mask);

    return std::move(mask);
}


cv::Mat qPixmapToMat(const QPixmap& pixmap)
{
    // Convert the QPixmap to a QImage
    QImage qImage = pixmap.toImage();

    // Convert the QImage to a cv::Mat
    cv::Mat mat(qImage.height(), qImage.width(), CV_8UC4, (void*)qImage.bits(), qImage.bytesPerLine());

    // Convert the BGRA image to BGR
    cv::cvtColor(mat, mat, cv::COLOR_BGRA2BGR);

    return mat;
}



MainWindow4::CustomLabel::CustomLabel(QWidget *parent) : QLabel(parent)
{
  this->setAlignment(Qt::AlignCenter);
}

void MainWindow4::CustomLabel::mousePressEvent(QMouseEvent *event)
{
  if (!this->pixmap()) return;
  if(image.empty()) return;
  QPoint position = event->pos();

  int x = position.x()*image.cols /this->width();
  int y = position.y()*image.rows /this->height();

  int minh,maxh,mins,maxs,minv,maxv;
  cv::Vec3b pixel = image.at<cv::Vec3b>(y, x);
  unsigned char blueValue = pixel[0];
  unsigned char greenValue = pixel[1];
  unsigned char redValue = pixel[2];
  cv::Vec3b color(blueValue, greenValue, redValue);
  getHSVRange(color,minh,maxh,mins,maxs,minv,maxv);
  cv::Mat mask = createMask(image,minh,maxh,mins,maxs,minv,maxv);
  cv::Mat kernel = getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));

  for (int var = 0; var < 1; var++) {
    cv::Mat eroded_mask;
    erode(mask, eroded_mask, kernel);
    mask = eroded_mask;
  }

  for (int var = 0; var < 1; var++)
  {
  cv::Mat dilated_mask;
  dilate(mask, dilated_mask, kernel);
  mask = dilated_mask;
  }

  mask = detect_center_of_object(mask,x,y);

  QPixmap m = Mat_to_pixmap(mask);

  int w = lab->width();
  int h = lab->height();
  lab->setPixmap( m.scaled(w,h) );


   x_for_z = x_center;
   y_for_z = y_center;

  _x1 =-(x_center - x_of_center);
  _y1 = y_center - y_of_center;
  send_x2 = _x1/7;
  send_y2 = _y1/7;
  x_label->setNum(send_x2);
  y_label->setNum(send_y2);
}



void MainWindow4::on_pushButton_2_clicked()
{
  /*geometry_msgs::Twist twist_msg;
  twist_msg.linear.x = _x1;
  twist_msg.linear.y = _y1;
  twist_msg.linear.z = _z1;
  pub1.publish(twist_msg);*/
  /*string s = "rosrun template_gui_package control 0 " + std::to_string( (_x1+0.0)/1000)+" "+std::to_string((_y1+0.0)/1000)+ " "+std::to_string((_z1+0.0)/1000)+" &";
  const char * s1 = s.c_str();
  qDebug()<<s1;
  system(s1);*/

  if(!first_move)
  {
    string s = "rosrun template_gui_package control 5"
        +' ' + std::to_string(send_x1) + " " +std::to_string(send_y1) + " " +std::to_string(send_z1)
        +' ' + std::to_string(send_x2) + " " +std::to_string(send_y2) + " " +std::to_string(send_z2)
        +" ";
    system(s.c_str());
    cv::waitKey(1000);
    system("rosnode kill /DUAL &");
    first_move = !first_move;
    e_send_x1 = send_x1;
    e_send_y1 = send_y1;
    e_send_z1 = send_z1;

    e_send_x2 = send_x2;
    e_send_y2 = send_y2;
    e_send_z2 = send_z2;

    return;
  }
  time_for_all = ui->time_for_all->text().toInt();
  RRTstar3D *ARM1 = new RRTstar3D(max_x1, max_y1, max_z1, min_x1, min_y1, min_z1,20, 10);
  ARM1->get_safety_dist(2);
  //ARM1->get_obstract_point(20, 20,20);
  Point3D sour(e_send_x1, e_send_y1, e_send_z1);
  Point3D fi(send_x1, send_y1, send_z1);
  if (fi == sour) return;
  ARM1->set_start_and_goal(sour, fi,time_for_all);
  ARM1->go();
  //ARM1->print_path_for_amin();
  //ARM1->rebootAll(reboot_obsract);
  vector<Point3DForAmin*>path1 = ARM1->pathForAmin;

  RRTstar3D *ARM2 = new RRTstar3D(max_x2, max_y2, max_z2, min_x2, min_y2, min_z2,20, 10);
  ARM2->get_safety_dist(2);
  //ARM1->get_obstract_point(20, 20,20);

  Point3D sour2(e_send_x2, e_send_y2, e_send_z2);
  Point3D fi2(send_x2, send_y2, send_z2);
  if (fi2 == sour2) return;
//  int time_for_all = 50;
  ARM2->set_start_and_goal(sour2, fi2,time_for_all);
  ARM2->go();
  vector<Point3DForAmin*>path2 = ARM2->pathForAmin;

  int i=0;
  int j=0;

  geometry_msgs::Twist twist_msg;
//  qDebug() << path1.size() <<path2.size();
  ros::Rate rate(30);

  while (i<path1.size() || j<path2.size())
  {
    //qDebug() << i << j << path1.size()<<path2.size();
    double vx1,vy1,vz1,vx2,vy2,vz2;

    if(i < path1.size())
    {
      vx1 = 0*path1[i]->vx;
      vy1 =0* path1[i]->vy;
      vz1 = 0*path1[i]->vz;
      i++;
    }
    else {
      vx1 = 0;
      vy1 = 0;
      vz1 = 0;
    }

    if(j < path2.size())
    {
      vx2 = path2[j]->vx;
      vy2 = path2[j]->vy;
      vz2 = path2[j]->vz;
      j++;
    }
    else {
      vx2 = 0;
      vy2 = 0;
      vz2 = 0;
    }
    twist_msg.linear.x = vx1;
    twist_msg.linear.y = vy1;
    twist_msg.linear.z = vz1;

    twist_msg.angular.x = vx2;
    twist_msg.angular.y = vy2;
    twist_msg.angular.z = vz2;

    //qDebug() << vx1 << vy1 << vz1 << vx2<< vy2<<vz2 ;
    JR.publish(twist_msg);
    rate.sleep();
  }

  //qDebug()<<"ali";
  e_send_x1 = send_x1;
  e_send_y1 = send_y1;
  e_send_z1 = send_z1;

  e_send_x2 = send_x1;
  e_send_y2 = send_y2;
  e_send_z2 = send_z2;


  delete ARM1;
  delete ARM2;

}


void MainWindow4::on_take_first_clicked()
{
   send_x1 = ui->label_6->text().toInt();
   send_y1 = ui->label_7->text().toInt();
   send_z1 = ui->label_8->text().toInt();
   f = true;
}

void MainWindow4::on_take_second_clicked()
{
  send_x2 = ui->label_6->text().toInt();
  send_y2 = ui->label_7->text().toInt();
  send_z2 = ui->label_8->text().toInt();
}

void MainWindow4::on_pushButton_clicked()
{
    string s = "rosrun template_gui_package control 3 & ";
    if(!IsNodeRunning("DUAL"))
    {
       system(s.c_str());
       ui->pushButton->setText("switch zero off");
    }
    else
    {
      system("rosnode kill /DUAL &");
      ui->pushButton->setText("switch zero on");
    }
}

void MainWindow4::on_pushButton_3_clicked()
{
  bool is_error = false;
  if (IsNodeRunning("Kinect1"))
  {
   int result = QMessageBox::question(this,"Running Kinect","Kinect is already runnig, Do you want to Kill it?", QMessageBox::Yes | QMessageBox::No);
   if(result == QMessageBox::Yes)
   {
     system(killKinect1);
     ui->pushButton_3->setText("switch kinect on");
   }
  }
  else {
    is_error = system(Kinect1);
    ui->pushButton_3->setText("switch kinect off");
  }

  if(is_error)
  {
    system(killKinect1);
    ui->pushButton_3->setText("switch kinect on");
    QMessageBox::warning(this,"Runnin Error","I can't run Kinect, try to connect camera.");
  }
}


void MainWindow4::on_time_for_all_editingFinished()
{
    time_for_all = ui->time_for_all->text().toInt();
}
