#pragma once
#include <vector>
#include "Test.h"

struct rgb {
	unsigned char red;
	unsigned char green;
	unsigned char blue;

	inline rgb() : red(0), green(0), blue(0) {}
};

class AoSTest :
	public Test
{
private:
	std::vector<rgb> data;
public:
	void setup();
	void run();
	AoSTest();
	~AoSTest();
};



