#include <iostream>

#include "test/testResult.h"

test::TestResult::TestResult() : _success(0), _failure(0), _error(0) {
}

test::TestResult::~TestResult() {
}

void test::TestResult::start(const std::string& name) {
}

void test::TestResult::success(const std::string& name) {
    std::cout << "Success: " << name << std::endl;
    ++_success;
}

void test::TestResult::failure(const std::string& name, const std::string& description) {
    std::cout << "Failure: " << name << ": " << description << std::endl;
    ++_failure;
}

void test::TestResult::error(const std::string& name, const std::string& description) {
    std::cout << "Error: " << name << ": " << description << std::endl;
    ++_error;
}

bool test::TestResult::summary() {
    std::cout << _success << " tests succeeded" << std::endl;
    std::cout << _failure << " tests failed" << std::endl;
    std::cout << _error << " tests in error" << std::endl;
    return _success == 1 && _failure == 1 && _error == 1;
}

