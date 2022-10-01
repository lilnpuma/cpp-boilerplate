/**
 * @file main.cpp
 * @author Manu Madhu Pillai (manump@umd.edu) (Driver) and Arshad Shaik (arshad22@umd.edu) (Navigator)
 * @brief PID controller for robot control
 * @version 0.1
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <ControllerPID.hpp>
#include <string>

int main(){
    std::string target;
    std::cout << " Input Target Velocity: ";
    std::getline(std::cin, target);
    PID::ControllerPID controller(3.0, 1.1, 0.0);
    double velocity_current = 15.0;
    auto velocity_target = std::stod(target);
    std::cout <<" PID Values: "
              <<std::get<0>(controller.getGains()) <<", "
              <<std::get<1>(controller.getGains()) <<", "
              <<std::get<2>(controller.getGains()) 
              <<"\nCurrent Velocity: " << velocity_current
              <<"\nTarget Velocity: " << velocity_target
              <<"\nOutput Velocity: " << controller.compute(velocity_target, velocity_current)
              <<"\nError: " << controller.getError();
    
    return 0;
}
