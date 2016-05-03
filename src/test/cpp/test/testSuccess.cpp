#include <iostream>

#include "test/test.h"
#include "test/testRegistrar.h"

class test_success : public test::test {
public:
    test_success() : test::test("TestSuccess") {
    }

    void operator()() {
    }
};

static test::test_registrar my_registrar(new test_success());

