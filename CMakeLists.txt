#Declare the project and it's langugages
cmake_minimum_required(VERSION 3.21)
project(learnsomething LANGUAGES CXX)

#Make C++ 17 required.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Fetch GTest
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

add_executable(TradeRiskTracker)

target_sources(TradeRiskTracker PRIVATE
    ${CMAKE_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(TradeRiskTracker PRIVATE gtest_main)
