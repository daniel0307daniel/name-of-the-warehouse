#include <ros/ros.h>
#include <stdio.h>
#include <stdlib.h>
#include <example/answer.h>

int ans;
void catch_the_answer(const example::answer &msg)
{
	ans=msg.answer;
}

int main(int argc,char **argv)
{
	ros::init(argc,argv,"listener");
	ros::NodeHandle nh;

	ros::Subscriber listener = nh.subscribe("answerdata",1,catch_the_answer);
	ros::Rate loop_rate(30);
	
	while(nh.ok())
	{
	ROS_INFO("talker send answer=%d",ans);
	ros::spinOnce();
	loop_rate.sleep();
	}
	return 0;
}
