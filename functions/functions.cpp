/**
 * @file functions.cpp
 *
 * Illustrate and define a function
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>

/*
	A function is a collection of statements that accomplish one task.

	Functions are called in a program execute their collection of statements
	and then execution returns back after the call.  Data can be passed to the function
	for it to work on and data can be returned from the function so that caller can
	use the result.

	Like with a variable, a function must be defined (for now that means, before main) before it is used.

	The following is the parts of a function and a real example follows this comment.
	The function is called at the beginning of main

	return-type function-name (parameter-list) {
		function body
	}

	return-type - is type of the result/data produced by the statements in the function body.
	              The return-statement specified what value to return (pass back to caller).
	              Once a return-statement executes the function is exected and execution returns back to 
	              the caller with the data specified.  Note, you may have multiple return-statements,
	              but a function only ever returns one thing. In our example the statements produce an
	              int so the return-type is int.

	parameter-list - a comma separated list of variable declarations (no ;).  This is how means
				     data is passed to the function.  Can have 0 or more, and any mix of types.
				     The scope of a parameter is limited to the function it is a part of.
				     In our example, there are two parameters both of type int.  What variable
				     has the name parameter_one and the other parameter_two

	function-name - a user specified name that indicates what task the function does.
	                What you can use for a function name is the same as a variable.
	                Function names should generaly be verb phrases.
	                In our example, the name of the function is compute_minimum,
	                by the name we would expect this to compute and return the minimum
	                of the parameters

	function-body - a group of any statements that accomplishes a single task.
	                In our example, the body contains statements to compute and return
	                the minimum of the two parameters.


	Everything before the function body (return-type, function-name, parameter-list, and more in 2020)
	are collectively known as the function signature (book class function prototype).

*/
int compute_minimum(int parameter_one, int parameter_two) {

	if(parameter_one < parameter_two) {
		return parameter_one;
	} else {
		return parameter_two;
	}

}


/*
	This is a function with a void return type.  AKA void function.
	A void return type means it does not return data.

 */
void print_hello_world(bool perform_print) {
	// You can use return with out a value to end function execution early
	// It is ok to have multiple returns if it makes the code easier to read/understand
	// It is not ok to have multiple return if it make the code more complicated
	// This is known as a guard-clause, terminate early to make the main body of code that
	// comes after simpler
	if(!perform_print) return;

	std::cout << "Hello World!!!\n";
}

double area_of_rectangle(double width, double height) {

	// scope works the same as main for any function
	// you can declare them, {} from if, etc. make new scopes...
	double area = width * height;
	return area;

}

/*
 main here is a special function that serves as entry
 point into program.  Called by operating system
 Exiting main function terminates program
 */

int main(int argc, char * argv[]) {

	std::cout << "Give two numbers:";
	int number_one, number_two;
	std::cin >> number_one >> number_two;

	// You can assign the result of function call (types must match)
	int minimum = compute_minimum(number_one, number_two);
	std::cout << minimum << '\n';

	// function return can be used as part of an expression
	std::cout << compute_minimum(number_one, number_two) << '\n';

	int min_plus_one = compute_minimum(number_one, number_two) + 1;
	std::cout << min_plus_one << '\n';


	// call void function
	print_hello_world(true);

	// There is no void type, and as a void function return nothing
	// It can't be used as part of an expresion
	//void result = print_hello_world(false);

    return 0;
}
