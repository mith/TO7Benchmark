#pragma once
#include <vector>
#include <array>
#include "Test.h"
class SoATest :
	public Test
{
private:
	std::array<std::vector<unsigned char>, 3> data;
public:
	void setup();
	void run();
	SoATest();
	~SoATest();
};

