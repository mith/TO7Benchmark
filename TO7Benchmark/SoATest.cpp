#include "SoATest.h"


SoATest::SoATest() : Test("Struct of Arrays")
{
}


SoATest::~SoATest()
{
}

void SoATest::setup()
{
	src = std::vector<unsigned char>(30000000, 0);
	trg = std::vector<unsigned char>(30000000, 0);
}

void SoATest::run()
{
	const int channelsize = 10000000;
	std::array<unsigned char *, 3> src_ptrs;
	std::array<unsigned char *, 3> trg_ptrs;
	for (int i = 0; i < src_ptrs.size(); i++) {
		src_ptrs[i] = src.data() + i * channelsize;
		trg_ptrs[i] = trg.data() + i * channelsize;
	}

	for (size_t i = channelsize; i > 0; --i) {
		*trg_ptrs[0] = 64 + *src_ptrs[0];
		*trg_ptrs[1] = 128 + *src_ptrs[1];
		*trg_ptrs[2] = 255 + *src_ptrs[2];

		src_ptrs[0]++;
		trg_ptrs[0]++;
		src_ptrs[1]++;
		trg_ptrs[1]++;
		src_ptrs[2]++;
		trg_ptrs[2]++;
		
	}
}