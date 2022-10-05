/**
 * @file ControllerPID.cpp
 * @author Manu Madhu Pillai (manump@umd.edu) (Driver) and Arshad Shaik (Navigator)
 * @brief PID controller class method implementation
 * @version 0.1
 * @date 2022-09-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <tuple>
#include "../include/ControllerPID.hpp"

namespace PID {

ControllerPID::ControllerPID(double p, double i, double d)
    : kp{p}, ki{i}, kd{d}, dt{0.1} {}

ControllerPID::ControllerPID() {}

ControllerPID::~ControllerPID() {}

double ControllerPID::compute(double velocity_target, double velocity_current) {
  // Defining error
  error = velocity_target - velocity_current;
  // Initializing the proportional constant
  double propTerm = kp * error;

  // Initializing the integral constant
  double integTerm = ki * (error * dt);

  // Initializing the derivative constant
  double deriv = (error - error_previous) / dt;
  double derivTerm = kd * deriv;

  double result = propTerm + integTerm + derivTerm;

  return result;
}

std::tuple<double, double, double> ControllerPID::getGains() {
  return std::tuple<double, double, double>(kp, ki, kd);
}

double ControllerPID::getError() { return error; }
}  // namespace PID
