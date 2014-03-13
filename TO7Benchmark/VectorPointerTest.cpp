#include "VectorPointerTest.h"


VectorPointerTest::VectorPointerTest() : Test("VectorPointerTest")
{
}


VectorPointerTest::~VectorPointerTest()
{
}

void VectorPointerTest::setup()
{
	src = std::vector<unsigned char>(10000000, 0);
	trg = std::vector<unsigned char>(10000000, 0);
}

void VectorPointerTest::run()
{
	const unsigned char * src_ptr = trg.data();
	unsigned char * trg_ptr = trg.data();

	for (size_t i = src.size(); i > 0; --i) {
		*trg_ptr = *src_ptr + 124;

		src_ptr++;
		trg_ptr++;
	}
}