#include <stdio.h>
#include <stdlib.h>
#include <ros/ros.h>

int main(int argc,char **argv)
{
   ros::init(argc,argv,"C_one");
   ros::NodeHandle nh;

   int a=10*4/3;
   float b=10*4/3;
float c=(float)10*4/3;
printf("a=%d\nb=%f\nc=%f\n",a,b,c);
ROS_INFO("a=%5d b=%f c=%f",a,b,c);
   return 0;
}
