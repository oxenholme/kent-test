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

#ifndef _TEST_TESTREGISTRY_
#define _TEST_TESTREGISTRY_

#include <vector>

#include "test/test.h"

namespace test {

    class test_registry {
    public:
        static test_registry& instance() {
            if (_instance == 0) {
                _instance = new test_registry();
            }
            return *_instance;
        }

        void add_test(test* test) {
            _tests.push_back(test);
        }

        std::vector<test*>& get_tests() {
            return _tests;
        }

    private:
        test_registry() {
        }

        std::vector<test*> _tests;

        static test_registry* _instance;
    };
}

#endif

