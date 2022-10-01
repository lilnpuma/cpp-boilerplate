/**
 * @file test.cpp
 * @author Manu Madhu Pillai (manump@umd.edu) (Driver) and Arshad Shaik (arshad22@umd.edu) (Navigator)
 * @brief Contains test to validate the functionality of the ControllerPID Class.
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
 
 // Headers
#include <gtest/gtest.h>
#include <math.h>
#include <tuple>

// Class source of CPP file
#include "ControllerPID.hpp"

TEST(ControllerPIDTest, test_compute){
  PID::ControllerPID controllertest(2.0, 0.0, 0.0);
  EXPECT_NEAR(controllertest.compute(5.0, 7.0), -4.0, 0.0001);
}
TEST(ControllerPIDTest, test_getGains){
  PID::ControllerPID controllertest;
  EXPECT_EQ(controllertest.getGains(),
            (std::tuple<double, double, double>(0.0, 0.0, 0.0)));
}
TEST(ControllerPIDTest, test_getError){
  PID::ControllerPID controllertest(2.0, 0.0, 0.1);
  EXPECT_EQ(controllertest.getError(), 0.0);
}