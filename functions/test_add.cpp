/**
 * @file test_add.cpp
 *
 * A sample test file.  Shows form of a test
 * However, not fully tested.  A test file was
 * rigorously test the function. A typical case
 * and all the unusual cases.
 *
 * In Visual Studio, you can have one project for each main. 
 * You then run each one separately.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <cassert>

#include "math.hpp"

int main() {

    // a general test format
    {
	// setup
	int num_one = 0;
	int num_two = 0;

	// test
	int result = add(num_one, num_two);

	// verify
	assert(result == 0);

    }

    // A more compact form applicable to this method
    {
	assert(add(1, 2) == 3);
    }
    
    return 0;
}
