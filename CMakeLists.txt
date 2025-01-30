cmake_minimum_required(VERSION 3.5)
project(OregonTrailPlus)
    
find_package(SDL2 REQUIRED CONFIG REQUIRED COMPONENTS SDL2)
find_package(SDL2 REQUIRED CONFIG COMPONENTS SDL2main)

add_executable(OregonTrailPlus WIN32 src/main.cpp)

target_link_libraries(OregonTrailPlus PRIVATE SDL2::SDL2main)

target_link_libraries(OregonTrailPlus PRIVATE SDL2::SDL2-static)