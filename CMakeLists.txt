# Declare the project and its languages
cmake_minimum_required(VERSION 3.21)
project(learnsomething LANGUAGES CXX)

# Make C++ 17 required.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Fetch GTest
include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

# Add the main executable and its sources
add_executable(TradeRiskTracker
        ${CMAKE_SOURCE_DIR}/src/main.cpp
        ${CMAKE_SOURCE_DIR}/src/trade.cpp
        ${CMAKE_SOURCE_DIR}/src/risktracker.cpp
        )

# Add the test executable and its sources
add_executable(TradeRiskTrackerTests
        ${CMAKE_SOURCE_DIR}/tst/temp.cpp
        )

# Link the main executable with Google Test
target_link_libraries(TradeRiskTracker PRIVATE gtest_main)

# Link the test executable with Google Test
target_link_libraries(TradeRiskTrackerTests PRIVATE gtest_main)

# Include Google Test
include(GoogleTest)
gtest_discover_tests(TradeRiskTrackerTests)

# Add the src directory to include path for the tests
target_include_directories(TradeRiskTrackerTests PRIVATE
        ${CMAKE_SOURCE_DIR}/src
        )
