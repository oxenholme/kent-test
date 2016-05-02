#include "test/testRegistrar.h"
#include "test/testRegistry.h"

test::TestRegistry* test::TestRegistry::_instance;

test::TestRegistrar::TestRegistrar(Test* test) {
    TestRegistry::instance().addTest(test);
}

test::TestRegistrar::~TestRegistrar() {
}

