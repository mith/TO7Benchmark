#pragma once
#include <string>

class Test
{
protected:
	Test(std::string name) : name(name) {}
public:
	const std::string name;

	virtual inline ~Test() {}

	virtual void setup() = 0;
	virtual void run() = 0;
};

