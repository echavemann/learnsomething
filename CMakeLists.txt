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
        HackathonBot
        ${CMAKE_SOURCE_DIR}/src/main.cpp
        ${CMAKE_SOURCE_DIR}/src/hackathonbot.cpp
        ${CMAKE_SOURCE_DIR}/src/action.cpp
)
target_include_directories(
        HackathonBot PRIVATE
        ${CMAKE_SOURCE_DIR}/src
)

target_link_libraries(
        HackathonBot
        GTest::gtest_main
        quill
)

add_executable(
        HackathonBotTests
        ${CMAKE_SOURCE_DIR}/tst/test_bot.cpp
        ${CMAKE_SOURCE_DIR}/src/action.cpp
        ${CMAKE_SOURCE_DIR}/src/hackathonbot.cpp
)
target_include_directories(
        HackathonBotTests PRIVATE
        ${CMAKE_SOURCE_DIR}/src
)
target_link_libraries(
        HackathonBotTests
        GTest::gtest_main
)
