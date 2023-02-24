#pragma once

class ECS {};

typedef unsigned int Entity;

class Component {};

class System {
	private:
		void (*func)(ECS*);
	public:
		System();
		~System() = default;
		void update(ECS* ecs);
};
