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
	src = std::vector<rgb>(10000000, rgb());
	trg = std::vector<rgb>(10000000, rgb());
}

void AoSTest::run()
{
	const rgb * src_ptr = src.data();
	rgb * trg_ptr = trg.data();
	for (size_t i = src.size(); i > 0; --i) {
		trg_ptr->red = 64 + src_ptr->red;
		trg_ptr->green = 128 + src_ptr->green;
		trg_ptr->blue = 155 + src_ptr->blue;

		src_ptr++;
		trg_ptr++;
	}
}