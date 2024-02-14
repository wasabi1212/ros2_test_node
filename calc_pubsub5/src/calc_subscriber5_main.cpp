#include "rclcpp/rclcpp.hpp"
#include "calc_pubsub/calc_subscriber.hpp"

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CalcSubscriber>());
  rclcpp::shutdown();
  return 0;
}
