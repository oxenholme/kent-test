#include <iostream>

#include "test/test.h"
#include "test/testFailure.h"
#include "test/testRegistrar.h"

class test_failure : public test::test {
public:
    test_failure() : test("TestFailure") {
    }

    void operator()() {
        throw ::test::test_failure("Throw");
    }
};

static test::test_registrar my_registrar(new test_failure());

