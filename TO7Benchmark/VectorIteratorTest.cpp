#include "VectorIteratorTest.h"


VectorIteratorTest::VectorIteratorTest() : Test("IteratorTest")
{
}


VectorIteratorTest::~VectorIteratorTest()
{
}

void VectorIteratorTest::setup()
{
	data = std::vector<unsigned char>(1000000000, 0);
}

void VectorIteratorTest::run()
{
	for (auto & v : data) {
		v = 255;
	}
}
