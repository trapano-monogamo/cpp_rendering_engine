#include "engine.hpp"
#include "ecs.hpp"

void Message::print() {
	ecs_say(this->msg, this->n);
}
