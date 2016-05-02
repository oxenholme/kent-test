#include <iostream>

#include "test/test.h"
#include "test/testRegistrar.h"

class TestError : public test::Test {
public:
    TestError() : test::Test("TestError") {
    }

    void operator()() {
        throw 0;
    }
};

static test::TestRegistrar myRegistrar(new TestError());

