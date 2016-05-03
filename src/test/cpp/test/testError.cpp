#include <iostream>

#include "test/test.h"
#include "test/testRegistrar.h"

class test_error : public test::test {
public:
    test_error() : test::test("TestError") {
    }

    void operator()() {
        throw 0;
    }
};

static test::test_registrar my_registrar(new test_error());

