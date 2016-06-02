/*
 * Copyright 2016 Helm Solutions Ltd
 *
 * This file is part of the Kentside Test Library
 *
 * The Kentside Test Library is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * The Kentside Test Library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the Kentside Test Library.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

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
    return _success == 1 && _failure == 1 && _error == 1;
}

