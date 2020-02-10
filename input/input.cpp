/**
 * @file input.cpp
 *
 * Illustrate input from command-line,
 *
 * @author Michael Decker
 * @date 2/7/2020
 */

#include <iostream>
#include <cmath>

int main() {

    std::cout << "Please, enter a number: ";

    int number;
    std::cin >> number;
    std::cout << "You entered: " << number << "\n\n";

    //int width, height;
    //std::cout << "Please, enter a width and height: ";
    //std::cin >> width >> height;
    //std::cout << "width = " << width << " height = " << height << '\n';
    //std::cout << "area = " << width * height << '\n';

    std::cout << "Please, enter a width ";
    int width;
    std::cin >> width;

    std::cout << "Please, enter a height ";
    int height;
    std::cin >> height;

    std::cout << "area = " << width * height << '\n';

    // computer x-squared - 2x  + 1
    std::cout << "Please, give an x: ";
    double x;
    std::cin >> x;
    double y = pow(x, 2) - 2 * x + 1;
    std::cout << "y is " << y << '\n';

    int base;
    //double divisor;
    int divisor;

    std::cin >> base >> divisor;

    //double result = base / (double)divisor
    //double result = base / double(divisor);
    double result = base / static_cast<double>(divisor);
    std::cout << "result = " << result << '\n';

    return 0;
}
