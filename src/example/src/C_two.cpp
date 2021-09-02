#include <stdio.h>
#include <stdlib.h>
#include <ros/ros.h>
#include <iostream>
int main(int argc,char **argv)
{
   ros::init(argc,argv,"C_two");
   ros::NodeHandle nh;

int a=0,b=0,c=0,d=0;
for(int i=0;i<10;i++)
{
a=b++;
c=++d;
printf("%d %d %d \n",i,a,c);
}
   return 0;
}
