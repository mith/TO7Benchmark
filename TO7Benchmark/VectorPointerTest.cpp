#include "VectorPointerTest.h"


VectorPointerTest::VectorPointerTest() : Test("VectorPointerTest")
{
}


VectorPointerTest::~VectorPointerTest()
{
}

void VectorPointerTest::setup()
{
	data = std::vector<unsigned char>(1000000000, 0);
}

void VectorPointerTest::run()
{
	unsigned char * ptr = data.data();

	for (size_t i = data.size(); i > 0; --i) {
		*ptr = 255;
		ptr++;
	}
}