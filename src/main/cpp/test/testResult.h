#ifndef _TEST_TESTRESULT_
#define _TEST_TESTRESULT_

#include <string>

namespace test {

    class test_result {
    public:
        test_result();

        void start(const std::string& name);
        void success(const std::string& name);
        void failure(const std::string& name, const std::string& description);
        void error(const std::string& name, const std::string& description);

        bool summary();

        int get_success() {
            return _success;
        }
        int get_failure() {
            return _failure;
        }
        int get_error() {
            return _error;
        }

    private:
        int _success;
        int _failure;
        int _error;
    };
}

#endif

