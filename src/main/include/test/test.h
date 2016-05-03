#ifndef _TEST_TEST_H_
#define _TEST_TEST_H_

#include <string>

namespace test {

    class test_result;

    class test {
    public:
        test(const std::string& name) : _name(name) {
        }

        void run_test(test_result& results);

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
