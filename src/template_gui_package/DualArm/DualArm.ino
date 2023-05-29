#include "definitionsAllPinsTowRobots.h"

#include "ros.h"
#include <std_msgs/Float32MultiArray.h>

float state = 10;

void ROS_properities();

void IK_FK();
void Jacobian();

void grabItOrNot();

ros::NodeHandle  nh;

/* these comming matrix hold the both arm's data.
   it can be angles to do IK or FK, or it can hold
   speeds in case of we want to do path planning.
*/
void ActionCb(const std_msgs::Float32MultiArray& s) {
  state = s.data[0]; /* the first value is what should th arms do, it can be:
                      (0)or(1): it means do the IK or FK.
                      (2): run at cirtain speeds (Jacobian).
                      (3): that means go to Zero.
*/
  for (byte i = 1; i < 12; i++)
    action[i - 1] = s.data[i];
}
ros::Subscriber<std_msgs::Float32MultiArray> ACTION("dual_arm", ActionCb );

void setup() {
  initial();
  //servocon = 0.05; // servo factor, the higher the faster
  zero();
   R1base.setCurrentPosition(R1ZeroSteps[0]);
  R2base.setCurrentPosition(R2ZeroSteps[0]);
  R1shoulder.setCurrentPosition(R1ZeroSteps[1]);
  R2shoulder.setCurrentPosition(R2ZeroSteps[1]);
  R1elbow.setCurrentPosition(R1ZeroSteps[2]);
  R2elbow.setCurrentPosition(R2ZeroSteps[2]);
    R1wrist.setCurrentPosition(R1ZeroSteps[3]);
  ROS_properities();
Serial.begin(9600);


}
void loop() {
  Serial.println(digitalRead(8));
  if (state == 2)
    Jacobian();
  else if (state == 0 || state == 1 || state ==4)
    IK_FK();
  else if (state == 3)
    zero();

  grabItOrNot();

  nh.spinOnce();
}
void ROS_properities() {
  nh.getHardware()->setBaud(115200);
  nh.initNode();
  nh.subscribe(ACTION);
}
void IK_FK() {
  /** Go to comming angles **/
  //R1
  /*R1base.moveTo(action[0]);
  R1base.run();
  R1shoulder.moveTo(action[1]);
  R1shoulder.run();
  R1elbow.moveTo(action[2]);
  R1elbow.run();
  R1wrist.moveTo(action[3]);
  R1wrist.run();
  R1EndEffector.moveTo(action[4]);
  R1EndEffector.run();*/
  //R2
  //long x[] = {action[0],action[1],action[2],action[3],action[5],action[6],action[7]};
  long x[] = {action[5],action[6],action[7]};
  tow_arms_steppers.moveTo(x);
  tow_arms_steppers.run();

  /*R2base.moveTo(action[5]);
  R2base.run();
  R2shoulder.moveTo(action[6]);
  R2shoulder.run();
  R2elbow.moveTo(action[7]);
  R2elbow.run();
  R2wrist.write(action[8]);*/

}
void Jacobian() {
  /*R1base.setSpeed(action[0]);
  R1base.runSpeed();
  R1shoulder.setSpeed(action[1]);
  R1shoulder.runSpeed();
  R1elbow.setSpeed(action[2]);
  R1elbow.runSpeed();
  R1wrist.setSpeed(action[3]);
  R1wrist.runSpeed();
  R1EndEffector.setSpeed(action[4]);
  R1EndEffector.runSpeed();
*/

  R2base.setMaxSpeed(action[5]);
  R2base.run();
  R2shoulder.setMaxSpeed(action[6]);
  R2shoulder.run();
  R2elbow.setMaxSpeed(action[7]);
 // smoothmove(action[8]);
}
void grabItOrNot() {
  R1EndEff.write(action[9]);
  R2EndEff.write(action[10]);
}
/*void smoothmove(float cposition) {
float anglediff = abs(cposition-oldposition);
sfactor = servocon/anglediff;
for (timeAngle=0.000; timeAngle<=1;) {
timeAngle = timeAngle+sfactor;
timeAngleadjust = (1.0/2.0) - (1.0/2.0*cos(timeAngle*PI)); //coming from here http://this.is/torfi/robotblog/index.php?getInfo=1&projectID=34
moveAngle = (anglediff*timeAngleadjust);
float calangle;
if (oldposition > cposition) {
calangle = oldposition - (float)moveAngle;
}
if (oldposition < cposition) {
calangle = oldposition + (float)moveAngle ;
}

  R2wrist.write(calangle);
}
oldposition = cposition;
}*/
