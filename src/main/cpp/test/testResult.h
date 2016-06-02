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

