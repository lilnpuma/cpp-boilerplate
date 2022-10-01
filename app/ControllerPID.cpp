/**
 * @file ControllerPID.cpp
 * @author Manu Madhu Pillai (manump@umd.edu) (Driver) and Arshad Shaik (Navigator)
 * @brief PID controller for robot control
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "ControllerPID.hpp"
#include <tuple>

using namespace PID;

ControllerPID::ControllerPID(double p, double i, double d)
    :kp{p}, ki{i}, kd{d} {

}

ControllerPID::ControllerPID(){
}

ControllerPID::~ControllerPID(){
}

double ControllerPID::compute(double velocity_target, double velocity_current){
    return 0.0;
}

std::tuple<double, double, double> ControllerPID::getGains(){
    return std::tuple<double, double, double>(kp, ki, kd);
}

double ControllerPID::getError{
    return error;
}