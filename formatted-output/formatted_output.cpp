/**
 * @file formatted_output.cpp
 *
 * Illustrate various ways formatting output
 *
 * @author Michael Decker
 * @date 2/14/20
 */

#include <iostream>
#include <iomanip>
int main() {

    int one = 1;
    int ten = 10;
    int hundred = 100;
    int thousand = 1000;
    int ten_thousand = 10000;

    std::cout << one << '\n';
    std::cout << ten << '\n';
    std::cout << hundred << '\n';
    std::cout << thousand << '\n';
    std::cout << ten_thousand << '\n';
    std::cout << '\n';

    // std::setw(int)
    std::cout << std::setw(5) << one << '\n';
    std::cout << std::setw(5) << ten << '\n';
    std::cout << std::setw(5) << hundred << '\n';
    std::cout << std::setw(5) << thousand << '\n';
    std::cout << std::setw(5) << ten_thousand << '\n';
    std::cout << '\n';

    // std::setprecision(int)
    double one_seventh = 1.0 / 7;
    std::cout << one_seventh << '\n';
    std::cout << std::setprecision(5) << one_seventh << '\n';
    std::cout << std::setprecision(4) << one_seventh << '\n';
    std::cout << std::setprecision(3) << one_seventh << '\n';
    std::cout << std::setprecision(2) << one_seventh << '\n';
    std::cout << std::setprecision(1) << one_seventh << '\n';

    std::cout << std::setprecision(20) << one_seventh << '\n';
    // std:setw(int) minimum width
    std::cout << std::setprecision(20) << std::setw(5) << one_seventh << '\n';
    std::cout << '\n';

    double gallons = 11.07;
    double gas_price = 2.319;
    double gas_cost = gallons * gas_price;
    std::cout << gas_cost << '\n';
    std::cout << std::setprecision(4) << gas_cost << '\n';
    std::cout << std::setprecision(6) << gas_cost << '\n';


    double large_number = 12600.06189;
    std::cout << large_number << '\n';
    std::cout << std::setprecision(3) << large_number << '\n';

    // std::fixed (precision is still 3)
    //std::cout << std::fixed << large_number << '\n';
    std::cout << std::setprecision(6);
    //std::cout << std::fixed << large_number << '\n';

    double digit = 3;
    std::cout << digit << '\n';
    std::cout << std::showpoint;
    std::cout << digit << '\n';
    std::cout << std::noshowpoint;

    // set justification std::left and std::right
    std::cout << "one: " << std::setw(5) << one << '\n';
    std::cout << "ten: " << std::setw(5) << ten << '\n';
    std::cout << "hundred: " << std::setw(5) << hundred << '\n';
    std::cout << "thousand: " << std::setw(5) << thousand << '\n';
    std::cout << "ten thousand: " << std::setw(5) << ten_thousand << '\n';

    std::cout << std::setw(15) << "one: " << std::setw(5) << one << '\n';
    std::cout << std::setw(15) << "ten: " << std::setw(5) << ten << '\n';
    std::cout << std::setw(15) << "hundred: " << std::setw(5) << hundred << '\n';
    std::cout << std::setw(15) << "thousand: " << std::setw(5) << thousand << '\n';
    std::cout << std::setw(15) << "ten thousand: " << std::setw(5) << ten_thousand << '\n';

    std::cout << std::setw(15) << std::left << "one: " 
        << std::setw(5) << std::right << one << '\n';
    std::cout << std::setw(15) << std::left << "ten: " 
        << std::setw(5) << std::right << ten << '\n';
    std::cout << std::setw(15) << std::left << "hundred: "
        << std::setw(5) << std::right << hundred << '\n';
    std::cout << std::setw(15) << std::left << "thousand: "
        << std::setw(5) << std::right << thousand << '\n';
    std::cout << std::setw(15) << std::left << "ten thousand: "
        << std::setw(5) << std::right << ten_thousand << '\n';


    return 0;
}