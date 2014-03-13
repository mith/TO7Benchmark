#include "SoATest.h"


SoATest::SoATest() : Test("Struct of Arrays test")
{
}


SoATest::~SoATest()
{
}

void SoATest::setup()
{
	for (auto & vec : data) {
		vec = std::vector<unsigned char>(5000000, 0);
	}
}

void SoATest::run()
{
	auto red = data[0].data();
	auto green = data[1].data();
	auto blue = data[2].data();

	for (size_t i = data[0].size(); i > 0; --i) {
		*red = std::max(*green, *blue);
	}
}