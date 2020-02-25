/**
 * @file digit2word.cpp
 *
 * Take in a 2 digit number and output in word form.
 * Illustrates else-if.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bsgu.edu>
 */

#include <iostream>

int main(int argc, char * argv[]) {

    std::cout << "Please, enter a number (10-19) ";
    char tens_digit;
    char ones_digit;
    std::cin >> tens_digit >> ones_digit;

    if(tens_digit == '1') {

        if(ones_digit == '0') {
            std::cout << "ten";
        } else if(ones_digit == '1') {
            std::cout << "eleven";
        } else if(ones_digit == '2') {
            std::cout << "twelve";
        } else if(ones_digit == '3') {
            std::cout << "thirteen";
        } else if(ones_digit == '4') {
            std::cout << "fourteen";
        } else if(ones_digit == '5') {
            std::cout << "fifteen";
        } else if(ones_digit == '6') {
            std::cout << "sixteen";
        } else if(ones_digit == '7') {
            std::cout << "seventeem";
        } else if(ones_digit == '8') {
            std::cout << "eighteen";
        } else if(ones_digit == '9') {
            std::cout << "nineteen";
        } else {
            std::cerr << "Invalid one's digit entered";
        }

    } /*else if(tens_digit != '0') {

        if(tens_digit == '2') {
            std::cout << "twenty ";
        } else if(tens_digit == '3') {
            std::cout << "thirty ";
        } else if(tens_digit == '4') {
            std::cout << "fourty ";
        } else if(tens_digit == '5') {
            std::cout << "fifty ";
        } else if(tens_digit == '6') {
            std::cout << "sixty ";
        } else if(tens_digit == '7') {
            std::cout << "seventy ";
        } else if(tens_digit == '8') {
            std::cout << "eighty ";
        } else if(tens_digit == '9') {
            std::cout << "ninety ";
        } else {
            std::cerr << "Invalid ten's digit entered ";
        }

        if(ones_digit == '0') {
        } else if(ones_digit == '1') {
            std::cout << "one";
        } else if(ones_digit == '2') {
            std::cout << "two";
        } else if(ones_digit == '3') {
            std::cout << "three";
        } else if(ones_digit == '4') {
            std::cout << "four";
        } else if(ones_digit == '5') {
            std::cout << "five";
        } else if(ones_digit == '6') {
            std::cout << "six";
        } else if(ones_digit == '7') {
            std::cout << "seven";
        } else if(ones_digit == '8') {
            std::cout << "eight";
        } else if(ones_digit == '9') {
            std::cout << "nine";
        } else {
            std::cerr << "Invalid one's digit entered";
        }

    } */else {
        std::cerr << "Invalid ten's digit entered";
    }

    std::cout << '\n';

    return 0;
}
