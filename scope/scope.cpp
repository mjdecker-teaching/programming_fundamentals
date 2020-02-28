/**
 * @file scope.cpp
 *
 * Illustrates scoping
 *
 * @author Michael John Decker, Ph.D.
 * @date 2/28/2020
 */

#include <iostream>

// global variables accessible anywhere
// in file after declared
const double SPEED_OF_LIGHT = 3e8;
const double SPEED_OF_LIGHT_SQUARED = SPEED_OF_LIGHT * SPEED_OF_LIGHT;

// global mass
double mass = 9001;

int main() {

    std::cout << "speed of light: " << SPEED_OF_LIGHT << '\n';
    std::cout << "speed of light squared: " << SPEED_OF_LIGHT_SQUARED << '\n';

    // local variable
    double mass = 120;
    if (mass > 0) {
        double energy = mass * SPEED_OF_LIGHT_SQUARED;
        std::cout << "E = " << energy << '\n';

        // can't redefine, but can assign
        //double energy;
        energy = 2;

        // expression block
        {
            // this mass is hiding the one outside
            double mass = 0;
            energy = mass * SPEED_OF_LIGHT;
            std::cout << "E = " << energy << '\n';

            // :: is scope resolution operator
            energy = ::mass * SPEED_OF_LIGHT;
            std::cout << "E = " << energy << '\n';

        } // expression block mass ends here

        // what is currently in scope
        // function mass is in scope
        energy = mass * SPEED_OF_LIGHT;
        std::cout << "E = " << energy << '\n';

    } // energy goes out of scope here

    // can't access as out of scope
    //std::cout << energy << '\n';

    return 0;
} // function mass no longer in scope