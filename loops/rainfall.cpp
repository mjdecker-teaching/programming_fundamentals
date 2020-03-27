/**
 * @file rainfall.cpp
 *
 * Program to calculate total rainfall for multiple region;
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <iomanip>

int main(int argc, char * argv[]) {

	char enter_another = 'y';
	double total_rainfall = 0;
	while(enter_another == 'y') {

		std::cout << "Region name? ";
		std::string region_name;
		std::cin >> region_name;

		std::cout << "Enter each days rainfall (in cm, enter negative number to quit) ";
		double region_total = 0;;

		double rainfall;
		std::cin >> rainfall;
		while(rainfall >= 0) {
			region_total += rainfall;
			std::cin >> rainfall;
		}

		std::cout << "Total rainfall for " << region_name << " is: " << region_total << "cm\n";
		total_rainfall += region_total;

		std::cout << "Enter another region (y/n)? ";
		std::cin >> enter_another;

		while(enter_another != 'y' && enter_another != 'n') {
			std::cout << "Invalid response, enter (y/n): ";
			std::cin >> enter_another;
		}
	}

	std::cout <<  "Total rainfall for all regions is: " << total_rainfall << '\n';
 
    return 0;
}
