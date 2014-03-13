#include "BoolVectorTest.h"


BoolVectorTest::BoolVectorTest() : Test("Bool vector")
{
}


BoolVectorTest::~BoolVectorTest()
{
}

void BoolVectorTest::setup()
{
	src = std::vector<bool>(10000000, 0);
	trg = std::vector<bool>(10000000, 0);
}

void BoolVectorTest::run()
{
	std::vector<bool>::const_pointer src_i = src.cbegin();
	std::vector<bool>::pointer trg_i = trg.begin();

	while (src_i != src.cend())
	{
		*trg_i = *src_i || true;

		src_i++;
		trg_i++;
	}
}