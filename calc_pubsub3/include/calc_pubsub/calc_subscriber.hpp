#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

class CalcSubscriber : public rclcpp::Node
{
public:
  CalcSubscriber();

private:
  void topic_callback(const std_msgs::msg::Float64::SharedPtr msg) const;
  rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr subscription_;
};
