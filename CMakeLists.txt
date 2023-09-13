cmake_minimum_required(VERSION 3.21)
project(PricingUtil LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif ()

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3") #time to fly
endif ()

# Add Pybind11
include(FetchContent)
set(PYBIND11_VERSION 2.8.1)
FetchContent_Declare(
        pybind11
        GIT_REPOSITORY https://github.com/pybind/pybind11.git
        GIT_TAG v${PYBIND11_VERSION}
)
FetchContent_MakeAvailable(pybind11)

pybind11_add_module(Pricing MODULE src/pricingutil.cpp)
