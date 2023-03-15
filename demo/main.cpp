#include "ecs/ecs.hpp"
#include <iostream>
#include <string>

struct Position : Component {
	float x,y;
	Position(float x, float y) : x(x), y(y) {}

	void translate(float dx, float dy) {
		this->x += dx;
		this->y += dy;
	}
	void log() {
		std::cout << "(" << this->x << ", " << this->y << ")" << std::endl;
	}
};

struct Name : Component {
	std::string name;
	Name(const char* n) : name(n) {}

	void greet() {
		std::cout << "Hi, " << this->name << "!" << std::endl;
	}
};

void update_positions_system(ECS& ecs) {
	for (Position*& p : ecs.query_components<Position>()) {
		p->translate(99.f, 99.f);
		p->log();
	}
}

void greet_people_system(ECS& ecs) {
	for (Name*& n : ecs.query_components<Name>()) {
		n->greet();
	}
}

int main() {
	ECS ecs = ECS();

	ecs.add_system(&greet_people_system);
	ecs.add_system(&update_positions_system);

	ecs.add_entity(1);
	ecs.add_component<Position>(1, new Position(3.0f, 2.0f));
	ecs.add_component<Name>(1, new Name("Chiara"));

	ecs.add_entity(2);
	ecs.add_component<Name>(2, new Name("Linda"));

	ecs.update();
	
	/*
	Position* p1 = ecs.get_component<Position>(1);
	std::cout << p1->x << ", " << p1->y << std::endl;
	Name* n1 = ecs.get_component<Name>(1);
	n1->greet();

	Position* p2 = ecs.get_component<Position>(2);
	std::cout << (p2 == nullptr) << std::endl;
	Name* n2 = ecs.get_component<Name>(2);
	n2->greet();
	*/

	return 0;
}
