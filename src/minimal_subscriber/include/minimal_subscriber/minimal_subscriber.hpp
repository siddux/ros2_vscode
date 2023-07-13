/*
 *  Copyright 2023 Eduard Rius
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of this
 *  software and associated documentation files (the "Software"), to deal in the Software without
 *  restriction, including without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all copies or
 *  substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
 *  BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 *  DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef MINIMAL_SUBSCRIBER__MINIMAL_SUBSCRIBER_HPP_
#define MINIMAL_SUBSCRIBER__MINIMAL_SUBSCRIBER_HPP_

#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "minimal_messages/msg/custom_msg.hpp"

class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber();
  ~MinimalSubscriber();

private:
  void topicCallback(const minimal_messages::msg::CustomMsg & msg) const;
  rclcpp::Subscription<minimal_messages::msg::CustomMsg>::SharedPtr sub_;
};

#endif  // MINIMAL_SUBSCRIBER__MINIMAL_SUBSCRIBER_HPP_
