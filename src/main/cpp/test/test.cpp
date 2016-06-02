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

#include <exception>

#include "test/test.h"
#include "test/testFailure.h"
#include "test/testResult.h"

void test::test::run_test(test_result& results) {
    try {
        results.start(_name);
        (*this)();
        results.success(_name);
    }
    catch (const test_failure& tf) {
        results.failure(_name, tf.what());
    }
    catch (const std::exception& se) {
        results.error(_name, se.what());
    }
    catch (...) {
        results.error(_name, "Unknown exception");
    }
}

