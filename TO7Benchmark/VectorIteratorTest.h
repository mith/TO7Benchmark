#pragma once
#include <vector>
#include "Test.h"

class VectorIteratorTest :
	public Test
{
private:
	std::vector<unsigned char> data;
public:
	void setup();
	void run();
	VectorIteratorTest();
	~VectorIteratorTest();
};

