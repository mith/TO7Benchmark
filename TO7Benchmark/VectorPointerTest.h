#pragma once
#include <vector>
#include "Test.h"
class VectorPointerTest :
	public Test
{
private:
	std::vector<unsigned char> data;
public:
	void setup();
	void run();
	VectorPointerTest();
	~VectorPointerTest();
};

