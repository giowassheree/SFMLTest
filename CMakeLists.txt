cmake_minimum_required(VERSION 3.10)
project(SFMLTest)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SFML package
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

# Add executable
add_executable(sfml_test main.cpp)

# Link SFML libraries
target_link_libraries(sfml_test sfml-graphics sfml-window sfml-system)

# Print configuration
message(STATUS "SFML found: ${SFML_FOUND}")
message(STATUS "SFML version: ${SFML_VERSION}")
