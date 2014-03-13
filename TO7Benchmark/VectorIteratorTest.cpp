#include "VectorIteratorTest.h"


VectorIteratorTest::VectorIteratorTest() : Test("IteratorTest")
{
}


VectorIteratorTest::~VectorIteratorTest()
{
}

void VectorIteratorTest::setup()
{
	src = std::vector<unsigned char>(10000000, 0);
	trg = std::vector<unsigned char>(10000000, 0);
}

void VectorIteratorTest::run()
{
	std::vector<unsigned char>::const_iterator src_i = src.cbegin();
	std::vector<unsigned char>::iterator trg_i = trg.begin();

	while (src_i != src.cend()) {
		*trg_i = *src_i + 124;

		src_i++;
		trg_i++;
	}
}
