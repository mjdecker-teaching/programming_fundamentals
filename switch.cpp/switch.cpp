/**
 * @file switch.cpp
 *
 * Show remaining selection material.
 *
 * @author Michael John Decker, Ph.D.
 * @date 3/2/2020
 */

#include <iostream>

const double WATER_PRICE = .99;
const double COFFEE_PRICE = 17000;
const double BAGEL_PRICE = 500;
int main() {

    std::cout << "Enter 1-4 to select what you would like to buy:\n";
    std::cout << "\t1. Water\n";
    std::cout << "\t2. Coffee\n";
    std::cout << "\t3. Bagel\n";
    std::cout << "\t4. Exit\n";

    int choice;
    std::cin >> choice;
    /*
    if(choice == 1) {
        // what would do for water
        std::cout << "How many waters would you like: ";
        int quantity;
        std::cin >> quantity;
        std::cout << "That will cost: " << quantity * WATER_PRICE << '\n';

    } else if(choice == 2) {
        // what would do for coffee
        std::cout << "How many coffee would you like: ";
        int quantity;
        std::cin >> quantity;
        std::cout << "That will cost: " << quantity * COFFEE_PRICE << '\n';

    } else if(choice == 3) {
        // what would do for bagel
        std::cout << "How many bagels would you like: ";
        int quantity;
        std::cin >> quantity;
        std::cout << "That will cost: " << quantity * BAGEL_PRICE << '\n';

    } else if(choice == 4) {
        // what would do for exit
        std::cout << "You are broke. Don't come again\n";
    } else {
        // output an error condition
        std::cout << "Error. Invalid option given.\n";
    }
    */

    switch(choice) {
        case 1: {
            // do case one for water
            // what would do for water
            std::cout << "How many waters would you like: ";
            int quantity;
            std::cin >> quantity;
            std::cout << "That will cost: " << quantity * WATER_PRICE << '\n';
            break;
        }

        case 2: {
            // what would do for coffee
            std::cout << "How many coffee would you like: ";
            int quantity;
            std::cin >> quantity;
            std::cout << "That will cost: " << quantity * COFFEE_PRICE << '\n';
            // handle coffee
            break;
        }

        case 3: {
            // what would do for bagel
            std::cout << "How many bagels would you like: ";
            int quantity;
            std::cin >> quantity;
            std::cout << "That will cost: " << quantity * BAGEL_PRICE << '\n';
            break;
        }

        case 4: {
            // what would do for exit
            std::cout << "You are broke. Don't come again\n";
            break;
        }

        default: {
            // output an error condition
            std::cout << "Error. Invalid option given.\n";
            break;
        }
    }

    return 0;
}