#ifndef _TEST_TESTREGISTRY_
#define _TEST_TESTREGISTRY_

#include <vector>

#include "test/test.h"

namespace test {

    class TestRegistry {
    public:
        static TestRegistry& instance() {
            if (_instance == 0) {
                _instance = new TestRegistry();
            }
            return *_instance;
        }

        void addTest(Test* test) {
            _tests.push_back(test);
        }

        std::vector<Test*>& getTests() {
            return _tests;
        }

    private:
        TestRegistry() {
        }
        ~TestRegistry() {
        }

        std::vector<Test*> _tests;

        static TestRegistry* _instance;
    };
}

#endif

