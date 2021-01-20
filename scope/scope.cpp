/**
 * @file main.cpp
 *
 * Expand about scoping
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <cmath>

// review declaration syntax part in []
// is optional
//type variable_name [= intial_value];
// or
//type variable_name[(intial_value)];

// If not in any block {} global scope
// Globals are accessible anywhere in file after declared
// Usually, constant (read-only)
// Writing to constants can make
// Hard to debug programs
const double SPEED_OF_LIGHT = 3e8;
//const double SPEED_OF_LIGHT = 3 * pow(10, 8);
const double SPEED_OF_LIGHT_SQUARED = SPEED_OF_LIGHT * SPEED_OF_LIGHT;

// not a good place for this
// but helps with understanding scope
double mass = 1000;
int main() {

	std::cout << "speed of light: " << SPEED_OF_LIGHT << '\n';
	std::cout << "speed of light squared: " << SPEED_OF_LIGHT_SQUARED << '\n';

	// inside of main or another function 
	// (functions are topic latter in semester)
	// is local scope.  They exist from where declared
	// to the ending } in which they were defined

	// This variable exists until end of } ending main
	double mass = 120;

	if(mass > 0) {
		// if-statements and other constructors 
		// that can have a {} introduce a new scope
		// Variables in parent scopes (scopes surrouding it)
		// can be accessed
		// variables declared in this scope exist until end of scope
		// defined (e.g., engery ends at } ending if-statement)
		double energy = mass * SPEED_OF_LIGHT_SQUARED;
		std::cout << "E = " << energy << '\n';


		// declaring a variable with same name in same scope causes an
		// compile error
		//double energy = 0;

		// declaring a variable with same name as one from surrounding scope
		// hides the outter variable
		double mass = 0;
		energy = mass * SPEED_OF_LIGHT_SQUARED;
		std::cout << "E = " << energy << '\n';

		// just using {} introduces a new scope
		// called expression block
		{
			// accessing variable from if-statement scope
			mass = 12;
			double energy = mass * SPEED_OF_LIGHT_SQUARED;
			std::cout << "E = " << energy << '\n';

			// :: means access global scope
			energy = ::mass * SPEED_OF_LIGHT_SQUARED;
			std::cout << "E = " << energy << '\n';
		} // end of scope for expression block energy

	} // end of scope for if-statement energy and mass

    return 0;
} // end of scope for main mass

// if defined here, can use in main()
// const double SPEED_OF_LIGHT = 3e8;
