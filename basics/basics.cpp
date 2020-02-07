/**
 * @file basics.cpp
 *
 * Illustrate basic types, printing, and arithmetic.
 *
 * @author Michae J Decker, Ph.D.
 * @date 2/3/2020
 */

#include <iostream>
#include <string>

/*

 Block/multiline comment

*/
int main() {

    // single line comment

    std::cout << "Hello World!\n";

    // show integer types
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

    // show the character type
    char character = 'a';
    int num = 'a';
    std::cout << character << '\n';
    std::cout << num << '\n';

    // show basic arithmetic
    int width = 10;
    int height = 5;
    int area = width * height;
    int perimeter = 2 * width + 2 * height;
    std::cout << "area: " << area << '\n';
    std::cout << "perimeter: " << perimeter << "\n\n";

    // can't divide by zero
    int division = 5 / 2;
    //int division = 5 / 0;
    std::cout << "5 / 2 = " << division << '\n';

    // show string type
    std::string str = "Hello World";
    std::cout << str << "\n";

    // show decimal number
    double decimal = 3.5; 
    float smaller_decimal = 1.5;

    std::cout << "double size: " << sizeof(double)
        << " decimal: " << decimal << '\n';
    std::cout << "float size: " << sizeof(float)
        << " smaller_decimal: " << smaller_decimal << '\n';

    // show decimal devision
    // first is on doubles
    // second is two int
    double double_division = 5.0 / 2.0;
    double incorrect = 5 / 2;
    double mixed_types = 5.0 / 2;
    std::cout << "\ndouble_division: " << double_division << '\n';
    std::cout << "incorrect: " << incorrect << '\n';
    std::cout << "mixed_types: " << mixed_types << '\n';

    int foo = 1.5;
    std::cout << foo << '\n';

    return 0;
}
