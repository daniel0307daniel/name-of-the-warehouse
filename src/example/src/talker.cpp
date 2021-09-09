#include <ros/ros.h>
#include <stdio.h>
#include <stdlib.h>
#include <example/answer.h>

int main(int argc,char **argv)
{
	ros::init(argc,argv,"talker");
	ros::NodeHandle nh;

	ros::Publisher talker = nh.advertise<example::answer>("answerdata",1000);
	ros::Rate loop_rate(30);
	int a=0,b=0,L;
	example::answer msg;
	while(nh.ok())
	{
		ROS_INFO("Enter aa number:");
		scanf("%d",&L);
		for(int i=0;i<L;i++)
		{
			a=b++;
		}
	ROS_INFO("answer=%d",a);
	msg.answer=a;
	talker.publish(msg);
	loop_rate.sleep();
	}
}
