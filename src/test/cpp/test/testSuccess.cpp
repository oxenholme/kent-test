#include <iostream>

#include "test/test.h"
#include "test/testRegistrar.h"

class TestSuccess : public test::Test {
public:
    TestSuccess() : test::Test("TestSuccess") {
    }

    void operator()() {
    }
};

static test::TestRegistrar myRegistrar(new TestSuccess());

