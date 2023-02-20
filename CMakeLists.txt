cmake_minimum_required(VERSION 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(rendering_engine)

add_subdirectory(engine)
add_subdirectory(ecs)
add_subdirectory(demo)
