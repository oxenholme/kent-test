#ifndef _TEST_TESTFAILURE_
#define _TEST_TESTFAILURE_

#include <exception>

namespace test {

    class TestFailure : public std::exception {
    public:
        TestFailure(const std::string& reason) : _reason(reason) {
        }
        ~TestFailure() throw() {
        }

	const char* what() const throw() {
            return _reason.c_str();
        }

    private:
        std::string _reason;
    };

}

#endif

