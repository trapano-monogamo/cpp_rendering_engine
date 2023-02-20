add_executable(demo src/demo.cpp)

target_link_libraries(demo engine ecs)

target_include_directories(demo PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/incldue
	${CMAKE_CURRENT_SOURCE_DIR}/../engine/incldue
	${CMAKE_CURRENT_SOURCE_DIR}/../ecs/incldue
)

# set_target_properties(demo PROPERTIES
# 	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
