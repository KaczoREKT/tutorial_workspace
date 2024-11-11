
#include "rclcpp/rclcpp.hpp" // Api które pomaga komunikować się z rosem

int main(int argc, char **argv)
{
	rclcpp::init(argc, argv);
	
	auto node = rclcpp::Node::make_shared("minimal_node");
	rclcpp::spin(node);
	rclcpp::shutdown();
}