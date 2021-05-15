cmake_minimum_required(VERSION 3.10.2)  # CMake version check

project(bankaccount_managementsystem)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 14)                          # Enable c++14 standard

# Add headers to project
include_directories(include/Bankaccount_Managementsystem)


# Add main.cpp file of project root directory as source file
set(SOURCE_FILES src/Basic_account.cpp src/Checking_account.cpp src/PIN_generator.cpp ${INCLUDE_DIRS})

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(bankaccount_managementsystem ${SOURCE_FILES})