#include <exception>

#include "test/test.h"
#include "test/testFailure.h"
#include "test/testResult.h"

void test::Test::test(test::TestResult& results) {
    try {
        results.start(_name);
        (*this)();
        results.success(_name);
    }
    catch (const test::TestFailure& tf) {
        results.failure(_name, tf.what());
    }
    catch (const std::exception& se) {
        results.error(_name, se.what());
    }
    catch (...) {
        results.error(_name, "Unknown exception");
    }
}

