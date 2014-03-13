#pragma once
#include <vector>
#include <array>
#include "Test.h"
class SoATest :
	public Test
{
private:
	std::vector<unsigned char> src;
	std::vector<unsigned char> trg;
public:
	void setup();
	void run();
	SoATest();
	~SoATest();
};

