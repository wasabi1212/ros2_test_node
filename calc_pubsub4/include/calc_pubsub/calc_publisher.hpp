#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"

class CalcPublisher : public rclcpp::Node
{
public:
  CalcPublisher();

private:
  void timer_callback();
  rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};
