#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"  
#include "calc_pubsub/calc_subscriber.hpp"
#include<math.h>

CalcSubscriber::CalcSubscriber() : Node("calc_subscriber5")
{
  using std::placeholders::_1;
  subscription_ = this->create_subscription<std_msgs::msg::Float64>("calc_topic5", 1,
    std::bind(&CalcSubscriber::topic_callback, this, _1));
}

void CalcSubscriber::topic_callback(const std_msgs::msg::Float64::SharedPtr msg) const
{
  RCLCPP_INFO(this->get_logger(), "%f", msg->data);
}