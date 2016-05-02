#include <iostream>

#include "test/test.h"
#include "test/testFailure.h"
#include "test/testRegistrar.h"

class TestFailure : public test::Test {
public:
    TestFailure() : test::Test("TestFailure") {
    }

    void operator()() {
        throw test::TestFailure("Throw");
    }
};

static test::TestRegistrar myRegistrar(new TestFailure());

