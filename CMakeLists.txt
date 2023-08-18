cmake_minimum_required(VERSION 3.21)
project(learnsomething LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE) #windows tings
FetchContent_MakeAvailable(googletest)
enable_testing()

FetchContent_Declare(
        quill
        GIT_REPOSITORY https://github.com/odygrd/quill.git
        GIT_TAG master
)

FetchContent_MakeAvailable(quill)

add_executable(
        TradeRiskTracker
        ${CMAKE_SOURCE_DIR}/src/main.cpp
        ${CMAKE_SOURCE_DIR}/src/trade.cpp
        ${CMAKE_SOURCE_DIR}/src/risktracker.cpp
)
target_include_directories(
        TradeRiskTracker PRIVATE
        ${CMAKE_SOURCE_DIR}/src
)

target_link_libraries(
        TradeRiskTracker
        GTest::gtest_main
        quill
)

add_executable(
        TradeRiskTrackerTests
        ${CMAKE_SOURCE_DIR}/tst/test_trade.cpp
        ${CMAKE_SOURCE_DIR}/tst/test_traderisktracker.cpp
        ${CMAKE_SOURCE_DIR}/src/trade.cpp
        ${CMAKE_SOURCE_DIR}/src/risktracker.cpp
)
target_include_directories(
        TradeRiskTrackerTests PRIVATE
        ${CMAKE_SOURCE_DIR}/src
)
target_link_libraries(
        TradeRiskTrackerTests
        GTest::gtest_main
)
