#include "rclcpp/rclcpp.hpp"
#include "calc_pubsub/calc_publisher.hpp"

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CalcPublisher>());
  rclcpp::shutdown();
  return 0;
}
