#include "AoSTest.h"
#include <array>


AoSTest::AoSTest() : Test("Array of structs test")
{
}


AoSTest::~AoSTest()
{
}

void AoSTest::setup()
{
	data = std::vector<rgb>(33333333, rgb());
}

void AoSTest::run()
{
	rgb * ptr = data.data();
	for (int i = data.size(); i > 0; --i) {
		rgb px = *ptr;
		px.red = std::max(px.green, px.blue);

		ptr++;
	}
}