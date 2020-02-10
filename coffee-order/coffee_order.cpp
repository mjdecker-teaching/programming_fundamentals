/**
 * @file coffee_order.cpp
 *
 * A simple coffee shop ordering program
 *
 * @author Michael Decker
 * @date 2/10/20
 */
#include <iostream>

const double COFFEE_PRICE = 2.15;
const double HOT_CHOCOLATE_PRICE = 2.45;
const double SCONE_PRICE = 5.59;
const double BG_TAX_RATE = .08;
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

    double subtotal = COFFEE_PRICE * num_coffee
                    + HOT_CHOCOLATE_PRICE * num_hot_chocolate
                    + SCONE_PRICE * num_scones;
    double tax = subtotal * BG_TAX_RATE;
    double total = subtotal * (1 + BG_TAX_RATE);

    std::cout << "subtotal: " << subtotal << '\n';
    std::cout << "tax: " << tax << '\n';
    std::cout << "total: " << total << '\n';
 
    return 0;
}