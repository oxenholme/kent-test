#include <iostream>

#include "test/testResult.h"

test::test_result::test_result() : _success(0), _failure(0), _error(0) {
}

void test::test_result::start(const std::string& name) {
}

void test::test_result::success(const std::string& name) {
    std::cout << "Success: " << name << std::endl;
    ++_success;
}

void test::test_result::failure(const std::string& name, const std::string& description) {
    std::cout << "Failure: " << name << ": " << description << std::endl;
    ++_failure;
}

void test::test_result::error(const std::string& name, const std::string& description) {
    std::cout << "Error: " << name << ": " << description << std::endl;
    ++_error;
}

bool test::test_result::summary() {
    std::cout << _success << " tests succeeded" << std::endl;
    std::cout << _failure << " tests failed" << std::endl;
    std::cout << _error << " tests in error" << std::endl;
    return _failure == 0 && _error == 0;
}

