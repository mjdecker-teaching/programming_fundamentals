

/**
 * @file more_function.cpp
 *
 *  More on functions
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <string>
#include <iomanip>

/*
	You can declare functions by using just the signature and ending with ;
	This notifies the compiler that this method exists and to look for
	full function (function definition) later.  A function only needs to be
	declared before it is used.  The compiler will fill in what needs execute 
	so it works as if defined before.
 */
int compute_maximum(int number_one, int number_two, int number_three);

/*
	you can have multiple functions with the same name as long as they
	have different # of parameters.  Called function overloading 
	(they are different functions, though)

	Actually, if you anything but the return type is different,
	they are different functions
*/
int compute_maximum(int number_one, int number_two);


/*
	 When you declare a parameter, it is a new declaration with scope restricted to the function
	 When you pass something the parameter is a copy of what was passed (known as argument).
	 This mechanism of copying the passed in value is known as pass by value
*/
void pass_by_value(double value) {

	std::cout << "Value in function: " << value << '\n';
	// this won't change the variable passed in, only the parameter
	value = 0;

	// with pass-by-value
	// it is good practice to not modifiy a passed value anyway
	// as the function may be reliant on the original value
	// Make a copy (new declaratin) and modifiy that.
	// This is a program requirement for this class

}

/* 
	You can use a reference type to allow it to be changed by the function 
	Placement of & can be
	double & value - Ok
	double& value - Ok 
	double &value - someone might argue for it, but makes no sense as & is part of the type
	double&value - bad hard to read

*/
void pass_by_reference(double & value) {

	std::cout << "Value in function: " << value << '\n';
	// this will change the argument
	value = 0;

}

/*
	Pass-by-value is for when you only need to read.
	Pass-by-reference is when you need to write.

	With some types (cause they contain a lot of data) like
	std::string, you don't want to pass-by-value to avoid copy. But 
	if you are not writing you still want the guarantee that it can't
	be modified by the function (modifyin is known as a side-effect).

	Answer const refeernce
*/
void pass_by_const_reference(const std::string & name) {
	std::cout << "Name is: " << name << '\n';
}
	
/**
 * is_in_range
 * @param number - number to test if in range (no default value)
 * @param lower_imit -  lower range limit (default 0)
 * @param upper_limit - upper range limit (default 100)
 *
 * Predicate function that returns if a number is within a specified range
 *
 * Any function can return a boolean value, and these can be used in if-statements
 * for checks.  Another word for these is a predicate function.
 *
 * All functions get a header comment.
 *
 * @returns if number is in range
 */
bool is_in_range(int number, int lower_limit = 0, int upper_limit = 100) {
	return number >= lower_limit && number <= upper_limit;
}


/*
	Using non-const globals creates very hard to maintain/debug programs
	because difficult to determine what/where was it last changed
	so, avoid using them

	Global constants are fine and good programming, however if used in function,
	any program that uses that function needs that constant as well
*/

//only at global scope is this intialized to 0
int global_value;


void modify_global() {

	// __FUNCTION__ is a variable that can be used in any function to mean the function name
	std::cout << __FUNCTION__ << ' ' << global_value << '\n';
	global_value = 1000;

}

// static local variables are initialized
// once and not at each function call
// They are maintain value between calls
int get_unique_id() {
	//int id = 10;
	static int id = 10;

	++id;
	return id;
}


int main(int argc, char * argv[]) {

	std::cout << "Maximum is: " << compute_maximum(12, -1, 15) <<'\n';

	double pi = 3.14;
	pass_by_value(pi);
	std::cout << "Value after call (by-value): " << pi << '\n';


	double speed = 2.5;

	// using the & between the type and variable
	// make the new declaration a reference type variable
	// it references the other variable
	// another word is it is an alias (aother name) for
	// the original variable
	double & alias_of_speed = speed;

	// as it is an alias it modifies the original variable
	alias_of_speed *= 2;
	std::cout << "speed: " << speed << '\n';

	pass_by_reference(pi);
	std::cout << "Value after call (by-reference): " << pi << '\n';

	// reference can't be a literal
	//pass_by_reference(3.14);

	std::string name = "Joe";
	pass_by_const_reference(name);

	// const ref can take a literal	
	pass_by_const_reference("Jane");

	std::cout << "Enter a number (0-100): ";
	int number;
	std::cin >> number; 
	if(is_in_range(number, 10, 20)) {
		std::cout << "Yep\n";
	} else {
		std::cout << "Nope\n";
	}

	// arguments fill from left to right
	// unfilled take on default value
	std::cout << std::boolalpha;
	std::cout << "is in range: " << is_in_range(100, 99) << '\n';
	std::cout << "is in range: " << is_in_range(101, 99) << '\n';
	std::cout << "is in range: " << is_in_range(0) << '\n';
	std::cout << "is in range: " << is_in_range(-1) << '\n';

	std::cout << "global_value: " << global_value << '\n';
	modify_global();
	std::cout << "global_value: " << global_value << '\n';

	for(int i = 0; i < 5; ++i) {
		std::cout << "unique id " << i << ": " << get_unique_id() << '\n';

	}


    return 0;
}

int compute_maximum(int number_one, int number_two, int number_three) {

	int maximum = number_one;
	if(number_two > maximum) {
		maximum = number_two;
	}

	if(number_three > maximum) {
		maximum = number_three;
	}

	return maximum;
}

int compute_maximum(int number_one, int number_two) {

	int maximum = number_one;
	if(number_two > maximum) {
		maximum = number_two;
	}

	return maximum;
}
