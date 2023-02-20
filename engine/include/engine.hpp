#pragma once

struct Message {
	char *msg;
	int n;

	Message(char* msg, int n) : msg(msg), n(n) {}
	~Message() = default;
	void print();
};
