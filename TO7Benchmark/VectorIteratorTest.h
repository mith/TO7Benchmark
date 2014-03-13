#pragma once
#include <vector>
#include "Test.h"

class VectorIteratorTest :
	public Test
{
private:
	std::vector<unsigned char> src;
	std::vector<unsigned char> trg;
public:
	void setup();
	void run();
	VectorIteratorTest();
	~VectorIteratorTest();
};

