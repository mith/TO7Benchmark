#include <iostream>
#include <memory>
#include <vector>
#include "basetimer.h"
#include "Test.h"

#include "VectorIteratorTest.h"
#include "VectorPointerTest.h"
#include "SoATest.h"
#include "AoSTest.h"

int main(int argc, const char* argv[])
{
	std::vector<std::unique_ptr<Test>> tests;
	tests.push_back(std::make_unique<VectorPointerTest>());
	tests.push_back(std::make_unique<VectorIteratorTest>());
	tests.push_back(std::make_unique<SoATest>());
	tests.push_back(std::make_unique<AoSTest>());

	BaseTimer timer;

	for (auto & test : tests) {
		test->setup();
		timer.start();
		for (int i = 20; i > 0; --i) {
			test->run();
		}
		timer.stop();
		
		std::cout << "Test " << test->name << " took " << timer.elapsedSeconds() << " seconds." << std::endl;
		timer.reset();
	}
}

