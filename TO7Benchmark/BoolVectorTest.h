#pragma once
#include <vector>
#include "Test.h"
class BoolVectorTest :
	public Test
{
private:
	std::vector<bool> src;
	std::vector<bool> trg;

public:
	void setup();
	void run();
	BoolVectorTest();
	~BoolVectorTest();
};

