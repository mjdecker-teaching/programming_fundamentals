/**
 * @file main.cpp
 *
 * This is a generic C++ main file.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bsgu.edu>
 */

#include <iostream>
#include <string>

class bar {
public:
    int a;
};

class foo {
public:
    bar a;
    std::string s;
    
};

int main(int argc, char * argv[]) {

    bar b;
    b.a = 3;
    foo f;

    f.a = b;
    f.s = "foo";

    std::cout << f.a.a << ' ' << f.s << '\n';

    return 0;
}
