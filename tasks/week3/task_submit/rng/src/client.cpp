#include <cstdlib>
#include <ctime>
#include "ros/ros.h"
#include "rng/rng.h"

int main(int argc, char** argv)
{
	std::srand(std::time(0));
	ros::init(argc, argv, "RNGClient");
	ros::NodeHandle nh;
	ros::ServiceClient client = nh.serviceClient<rng::rng>("examine_rn");
	rng::rng srv;
	srv.request.rn = float(std::rand()) / RAND_MAX;
	if (client.call(srv))
	{
		ROS_INFO("The random number is %f", srv.request.rn);
		ROS_INFO("The judgement of the service: %s", srv.response.det ? "Yes" : "No");
	}
	else
	{
		ROS_ERROR("Failed to call examine_rn");
		return 1;
	}
	return 0;
}
