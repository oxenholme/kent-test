#ifndef _TEST_TESTREGISTRAR_
#define _TEST_TESTREGISTRAR_

#include "test/test.h"

namespace test {

    class TestRegistrar {
    public:
        TestRegistrar(Test* test);
        ~TestRegistrar();
    };
}

#endif

