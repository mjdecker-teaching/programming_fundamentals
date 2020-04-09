/**
 * @file decomposition.cpp
 *
 * Illustrate function decomposition
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>


/*
	There are several reasons why functions are an important
	mechanism is programming.  

	First, they promote reuse.
	You define a function that performs one task.  You can
	reuse that function as much as you need for the program.

	Second, it support easier to read and understand code.  You break 
	down a large piece of code into several function that each solve
	a task.  These functions (if named well) allow you to look at the
	name and understand what is being done without having to look at the
	code performing a task.

	Although, often programmers will realize they need to take some code
	and make into a function later (AKA extract function).  Functions are also
	formed as the program is being written.  Either way, the taking the entire problem/project
	and decomposing it into a set of function that each perform a single task is known
	as function decomposition.


	The example in here will take a ready make program and decompose it.  Normally,
	the program would be created (called designed) with functions to begin with.
*/

#include <string>

std::string get_region_name() {
		std::cout << "Region name? ";
		std::string region_name;
		std::cin >> region_name;

		return region_name;
}


double calculate_rainfall_for_region(const std::string & region_name) {

		std::cout << "Enter each days rainfall (in cm, enter negative number to quit) ";
		double region_total = 0;;

		double rainfall;
		std::cin >> rainfall;
		while(rainfall >= 0) {
			region_total += rainfall;
			std::cin >> rainfall;
		}

		std::cout << "Total rainfall for " << region_name << " is: " << region_total << "cm\n";
		return region_toal;
}

int main(int argc, char * argv[]) {

 	char enter_another = 'y';
	double total_rainfall = 0;
	while(enter_another == 'y') {

		std::string region_name = get_region_name();


		total_rainfall += calculate_rainfall_for_region(region_name);

		std::cout << "Enter another region (y/n)? ";
		std::cin >> enter_another;

		while(enter_another != 'y' && enter_another != 'n') {
			std::cout << "Invalid response, enter (y/n): ";
			std::cin >> enter_another;
		}
	}


    return 0;

}
