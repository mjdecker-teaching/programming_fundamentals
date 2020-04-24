/**
 * @file vector.cpp
 *
 * Arrays are fixed size, vector is a dynamically growing array.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <vector>
#include <string>

// vectors take lots of space so pass by ref
// we don't need to modify any elements so const
void print_int_vector(const std::vector<int> & vec) {
    std::cout << "size: " << vec.size() << '\n';
    std::cout << "elements: ";
    for(int element : vec) {
        std::cout << element << ' ';
    }
    std::cout << '\n'; 
    std::cout << '\n'; 
}

int main() {

    // Put type you store in <>
    // This is a vector of ints
    // It startes empty (no room)
    std::vector<int> integers;
    // size gets the number of elements it is holding
    std::cout << "size: " << integers.size() << '\n';

    // grows as you add elements via push_back
    // push_back add element to end of array
    integers.push_back(42);
    std::cout << "size: " << integers.size() << '\n';

    integers.push_back(3);
    integers.push_back(7);
    std::cout << "size: " << integers.size() << '\n';

    // size is used also for looping
    // [] can be used on vectors
    for(int i = 0; i < integers.size(); ++i) {
        std::cout << integers[i] << ' ';
    }
    std::cout << '\n';

    integers[1] = 9000;

    // vector and other standard library containers (and arrays in some cases)
    // can use a range-based for, it looks like
    // for(decl : container) {
    // }
    for(int element : integers) {
        // variable takes on each value in integers
        std::cout << element << ' ';
    }
    std::cout << '\n';

    // can modify element if you make decl a reference
    for(int & element : integers) {
        element /= 2 ;
    }
    std::cout << '\n';

    print_int_vector(integers);

    // pop_back removes the last element
    integers.pop_back();
    print_int_vector(integers);  

    // besides push_back to gradually add elements
    // can use resize to make larger or smaller
    integers.resize(100);
    print_int_vector(integers);

    integers.resize(1);
    print_int_vector(integers);

    // you can tell it how big to be when you make it
    std::vector<double> doubles(10);
    std::cout << "double size: " << doubles.size() << '\n';    

    // you can initialize it like an array
    std::vector<std::string> strings = { "hello", "world" };
    for(const std::string & str : strings) {
        std::cout << str << ' ';
    }
    std::cout << '\n';

    // clear contents
    doubles.clear();
    std::cout << "double size: " << doubles.size() << '\n';

    // check if empty
    std::cout << "empty? " << std::boolalpha << doubles.empty() << '\n';

    return 0;
}
