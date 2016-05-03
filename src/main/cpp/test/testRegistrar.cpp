#include "test/testRegistrar.h"
#include "test/testRegistry.h"

test::test_registry* test::test_registry::_instance;

test::test_registrar::test_registrar(test* test) {
    test_registry::instance().add_test(test);
}

