cmake_minimum_required(VERSION 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

project(engine)

# Define the source files for the engine library
set(SOURCES
  src/engine.cpp
  src/ecs/ecs.cpp
)

# Define the header files for the engine library
set(HEADERS
  include/engine.hpp
  include/ecs/ecs.hpp
)

# Create the engine library
add_library(engine SHARED ${SOURCES} ${HEADERS})

# Set the include directories for the engine library
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Set the output directory for the library
set_target_properties(engine PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)

# Set the installation directory for the library
install(TARGETS engine DESTINATION lib)
