/**
 * @file basics.cpp
 *
 * Illustrate basic types, printing, and arithmetic.
 *
 * @author Michae J Decker, Ph.D.
 * @date 2/3/2020
 */

#include <iostream>

/*

 Block/multiline comment

*/
int main() {

    // single line comment

    std::cout << "Hello World!\n";

    short smaller_number = 10;
    int number = -250;
    unsigned int non_negative_number = -1;
    long larger_number = 500;

    std::cout << smaller_number << "\n";
    std::cout << number << "\n";
    std::cout << larger_number << "\n";
    std::cout << non_negative_number << "\n";
  
    std::cout << "An short is: " << sizeof(smaller_number) << " bytes\n";
    std::cout << "An int is: " << sizeof(number) << " bytes\n";
    std::cout << "An unsigned int is: "<< sizeof(non_negative_number) << " bytes\n";
    std::cout << "An long is: "<< sizeof(larger_number) << " bytes\n";

    char character = 'a';
    int num = 'a';
    std::cout << character << '\n';
    std::cout << num << '\n';


    int width = 10;
    int height = 5;
    int area = width * height;
    int perimeter = 2 * width + 2 * height;
    std::cout << "area: " << area << '\n';
    std::cout << "perimeter: " << perimeter << '\n';

    return 0;
}
