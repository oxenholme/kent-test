#ifndef _TEST_TESTRESULT_
#define _TEST_TESTRESULT_

#include <string>

namespace test {

    class TestResult {
    public:
        TestResult();
        ~TestResult();

        void start(const std::string& name);
        void success(const std::string& name);
        void failure(const std::string& name, const std::string& description);
        void error(const std::string& name, const std::string& description);

        bool summary();

        int getSuccess() {
            return _success;
        }
        int getFailure() {
            return _failure;
        }
        int getError() {
            return _error;
        }

    private:
        int _success;
        int _failure;
        int _error;
    };
}

#endif

