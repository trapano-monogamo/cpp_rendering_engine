#include "ecs.hpp"
#include <iostream>

void ecs_say(const char* msg, int n) {
	for (int i=0; i<n; i++)
		std::cout << msg << std::endl;
}
