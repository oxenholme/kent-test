#include <iostream>
#include <vector>

#include "test/testRegistry.h"
#include "test/testResult.h"

int main() {
    test::test_result result;
    const std::vector<test::test*>& tests = test::test_registry::instance().get_tests();
    if (tests.size() == 0) {
      std::cerr << "No tests present" << std::endl;
      return 1;
    }
    for (int i = tests.size(); --i >= 0; ) {
        tests[i]->run_test(result);
    }
    return !result.summary();
}

