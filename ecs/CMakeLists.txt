file(GLOB SOURCES "src/*.cpp")

add_library(ecs ${SOURCES})

target_include_directories(ecs PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include)
