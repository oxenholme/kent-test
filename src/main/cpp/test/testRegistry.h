#ifndef _TEST_TESTREGISTRY_
#define _TEST_TESTREGISTRY_

#include <vector>

#include "test/test.h"

namespace test {

    class test_registry {
    public:
        static test_registry& instance() {
            if (_instance == 0) {
                _instance = new test_registry();
            }
            return *_instance;
        }

        void add_test(test* test) {
            _tests.push_back(test);
        }

        std::vector<test*>& get_tests() {
            return _tests;
        }

    private:
        test_registry() {
        }

        std::vector<test*> _tests;

        static test_registry* _instance;
    };
}

#endif

