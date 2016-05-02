#ifndef _TEST_TEST_H_
#define _TEST_TEST_H_

#include <string>

namespace test {

    class TestResult;

    class Test {
    public:
        Test(const std::string& name) : _name(name) {
        }

        void test(TestResult& results);

    protected:
        virtual void operator()() = 0;

        virtual void pre() {
        }
        virtual void post() {
        }

    private:
        std::string _name;
    };

}

#endif
