file(GLOB SOURCES "src/*.cpp")

add_library(engine ${SOURCES})

target_link_libraries(engine ecs)

target_include_directories(engine PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
	${CMAKE_CURRENT_SOURCE_DIR}/../ecs/include
)
