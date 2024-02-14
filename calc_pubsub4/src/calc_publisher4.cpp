#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"  
#include "calc_pubsub/calc_publisher.hpp"
#include<math.h>

CalcPublisher::CalcPublisher() : Node("calc_publisher4")
{
  publisher_ = this->create_publisher<std_msgs::msg::Float64>("calc_topic4", 1);

  using namespace std::chrono_literals;
  timer_ = this->create_wall_timer(1s, std::bind(&CalcPublisher::timer_callback, this));
}

void CalcPublisher::timer_callback()
{
  static int count = 0;
  static int x = 0;
  static int y = 0;
  auto msg = std_msgs::msg::Float64();
  x = count++;
  y = 8*(1-cos(x));
  msg.data = y;
  publisher_->publish(msg);
}