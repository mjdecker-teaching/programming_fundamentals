/**
 * @file coffee_order.cpp
 *
 * A simple coffee shop ordering program
 *
 * @author Michael Decker
 * @date 2/10/20
 */
#include <iostream>

int main() {

    std::cout << "How many coffee(s)? ";
    int num_coffee;
    std::cin >> num_coffee;

    std::cout << "How many hot chocolate(s)? ";
    int num_hot_chocolate;
    std::cin >> num_hot_chocolate;

    std::cout << "How many scone(s)? ";
    int num_scones;
    std::cin >> num_scones;

    return 0;
}