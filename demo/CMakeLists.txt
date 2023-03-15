cmake_minimum_required(VERSION 3.10)
set(CMAKE_BUILD_TYPE Debug)

project(demo)

add_executable(demo main.cpp)
target_include_directories(demo PUBLIC ../include)

# link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib)
# add_subdirectory(.. engine)
find_library(ENGINE_PATH engine HINTS ../lib)
target_link_libraries(demo ${ENGINE_PATH})
