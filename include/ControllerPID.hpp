/**
 * @file ControllerPID.hpp
 * @author Manu Madhu Pillai (manump@umd.edu) (Driver) and Arshad Shaik
 * (arshad22@umd.edu) (Navigator)
 * @brief PID controller class declaration
 * @version 0.1
 * @date 2022-09-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef INCLUDE_CONTROLLERPID_HPP_
#define INCLUDE_CONTROLLERPID_HPP_
// CPP Headers

#include <tuple>
namespace PID {
/**
 * @brief Class that supports PID Controllers
 *
 */
class ControllerPID {
 private:
  // kp is the proportionality constant
  const double kp = 0.0;
  // kp is the proportionality constant
  const double ki = 0.0;
  // kp is the proportionality constant
  const double kd = 0.0;
  // dt is the sampling time
  const double dt = 0.0;
  // error is the difference between output and target velocity
  double error = 0.0;
  // error_previous is the error from the previous time sampe
  double error_previous = 0.0;

 public:
  // velocity_new is the output velocity of the controller
  double velocity_new = 0.0;
  // Default Constructor
  ControllerPID();
  // Constructor
  ControllerPID(double p, double i, double d);
  // Destructor
  ~ControllerPID();
  // Calculates and returns output velocity based on PID values and error
  double compute(double velocity_target, double velocity_current);
  // Returns error
  double getError();
  // Returns PID values
  std::tuple<double, double, double> getGains();
};
}  // namespace PID
#endif  // INCLUDE_CONTROLLERPID_HPP_
