cmake_minimum_required(VERSION 4.1)
project(SpaceSimuation)

set(CMAKE_CXX_STANDARD 20)

add_executable(SpaceSimuation src/main.cpp
        src/Utilities.cpp
        src/Utilities.hpp
        src/Planet.cpp
        src/Planet.hpp
        src/Star.cpp
        src/Star.hpp
)
