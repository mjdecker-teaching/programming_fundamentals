/**
 * @file character_input.cpp
 *
 * Illustrate two ways to input a character
 *
 * @author Michael John Decker, Ph.D.
 * @date 2/17/2020
 */

#include <iostream>

int main() {

    char character;
    std::cin >> character;
    std::cout << "character: " << character << '\n';

    std::cout << "Please, enter 5 characters: ";
    char ch1, ch2, ch3, ch4, ch5;
    std::cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5;
    std::cout << "characters are: " << ch1 << ch2 << ch3 << ch4 << ch5 << "\n\n";

    std::cin.ignore();

    std::cout << "Please, enter 5 characters: ";
    std::cin.get(ch1);
    std::cin.get(ch2);
    std::cin.get(ch3);
    std::cin.get(ch4);
    std::cin.get(ch5);
    std::cout << "characters are: '" << ch1 << ch2 << ch3 << ch4 << ch5 << "'\n\n";

    return 0;
}
