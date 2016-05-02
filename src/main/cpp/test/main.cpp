#include <iostream>
#include <vector>

#include "test/testRegistry.h"
#include "test/testResult.h"

int main() {
    test::TestResult result;
    const std::vector<test::Test*>& tests = test::TestRegistry::instance().getTests();
    if (tests.size() == 0) {
      std::cerr << "No tests present" << std::endl;
      return 1;
    }
    for (int i = tests.size(); --i >= 0; ) {
        tests[i]->test(result);
    }
    return !result.summary();
}

