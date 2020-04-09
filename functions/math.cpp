/**
 * @file math.hpp
 *
 * Implementation file for a basic math class.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include "math.hpp"
#include <cassert>

int add(int num_one, int num_two) {
    return num_one + num_two;
}

int subtract(int num_one, int num_two) {
    return num_one - num_two;
}

int multiply(int num_one, int num_two) {
    return num_one * num_two;
}

int divide(int num_one, int num_two) {
    assert(num_two != 0);
    return num_one / num_two;
}
