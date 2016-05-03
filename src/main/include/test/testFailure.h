#ifndef _TEST_TESTFAILURE_
#define _TEST_TESTFAILURE_

#include <exception>

namespace test {

    class test_failure : public std::exception {
    public:
        test_failure(const std::string& reason) : _reason(reason) {
        }

	const char* what() const throw() {
            return _reason.c_str();
        }

    private:
        std::string _reason;
    };

}

#endif

