#include "ros/ros.h"
#include "apb/abs.h"

bool add(apb::abs::Request& req, apb::abs::Response& res)
{
	res.sum = req.a + req.b;
	ROS_INFO("request: a=%ld, b=%ld", (long int)req.a, (long int)req.b);
	ROS_INFO("sending back response: [%ld]", (long int)res.sum);
	return true;
}
int main(int argc, char** argv)
{
	ros::init(argc, argv, "APBServer");
	ros::NodeHandle nh;
	ros::ServiceServer service = nh.advertiseService("add_two_ints", add);
	ROS_INFO("Ready to add two ints.");
	ros::spin();
	return 0;
}
