/**
 * @file main.cpp
 * @author Manu Madhu Pillai (manump@umd.edu) (Driver) and Arshad Shaik (arshad22@umd.edu) (Navigator)
 * @brief Runs tests described in the test file
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
