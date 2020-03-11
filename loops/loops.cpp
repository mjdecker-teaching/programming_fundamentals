/**
 * @file loops.cpp
 *
 * Illusrate pre/post increment/decrement, while/for loops, do-while,
 * Input with loops, counters, summing, sentinels, and nested loops.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bsgu.edu>
 */

#include <iostream>

int main(int argc, char * argv[]) {

  /*
    Program elements:
       sequential execution (each line/statement one after other)
       selection (selectively execute a line)
       repeat (repeatedly execute)
   */

    // we have seen these ways to add or - 1
    int number = 42;
    number = number + 1;
    number += 1;

    number = number - 1;
    number -= 1;

    // there are also the following
    // these are done as decrement and increment
    // These are often used in loops

    // pre increment/decrement
    ++number;
    --number;

    // post increment/decrement
    number++;
    number--;

    // As a single statement, above are identifical
    // both increment and decrement the number
    // Difference between pre/post is what value they
    // have when used as part of an expression

    // pre gives the incremented/decremented number
    std::cout << number << '\n';
    std::cout << ++number << '\n';
    std::cout << --number << '\n';
    std::cout << '\n';

    // post increments the number but the old number
    // is used in expression

    std::cout << number << '\n';
    std::cout << "Result is old value: " << number++ << '\n';
    std::cout << "But still updated to new value: " << number << '\n';
    std::cout << "Result is old value: " << number-- << '\n';
    std::cout << "But still updated to new value: " << number << '\n';

    // L-value R-value
    // L-value anyting that can be places on left-side of assignment
    // variable (number) is an l-value, also anthing that has a memory space (will find out more later)
    // r-value the rest, such as a result of an expression (a temporary)
    number = 0;
    // the result of an expression is not assignable
    // so it is an r-value;
    //(number + 1) = 0;

    // Likewise, pre/post increment/decrement can only be applied to l-values
    //number = ++(number + 1);
    //number = (number + 1)++;
    std::cout << (++number)++ << '\n';

    // while-loop (pretest loop) or more times
    // while (condition) {
    //     body
    //}

    // count up to to but excluding 10
    // a variable which is used control the loop execution
    // is known as loop control variable
    // not required but i, j, and k are common names for
    // loop control variables
    int i = 0;
    while(i < 10) {
    	std::cout << i << ' ';
    	// what happens when remove ++i; infinite loop!!!
    	++i;
    }
    std::cout << '\n';


    // how would you count down?
    int j = 9;
    while(j >= 0) {
    	std::cout << j << ' ';
    	--j;
    }
    std::cout << '\n';

    // i & j can also be called counter variables as count up/down


    // 1 2 4 8 16 32 64 128 256
    int power = 1;
    while(power <= 256) {
    	std::cout << power << ' ';
    	power *= 2;
    }
    std::cout << '\n';

    // or
    power = 1;
    int k = 0;
    while(k < 9) {
    	std::cout << power << ' ';
    	power *= 2;
    	++k;
    }
    std::cout << '\n';


    // how would you generate the following sequences?
    // 4 5 6 7 8 9 10 11 12 13 14 15
    int num = 4;
    while(num < 16) {
    	std::cout << num << ' ';
    	++num;
    }
    std::cout << '\n';

    // 0 3 6 9 12 15 18
    int loop_control_variable = 0;
    while(loop_control_variable < 19) {
    	std::cout << loop_control_variable << ' ';
    	loop_control_variable += 3;
    }
    std::cout << '\n';
    std::cout << '\n';

    // with user input validation
    std::cout << "Please, enter y or n: ";
    char answer;
    std::cin >> answer; 
    while(answer != 'y' && answer != 'n') {
      std::cout << "Incorrect input.  Please, enter y or n: ";
      std::cin >> answer;
    }


    // repeated input
    // sum of any three numbers
    int sum = 0;
    int count = 0;
    std::cout << "Please, enter three numbers: ";
    while(count < 3) {
      int num;
      std::cin >> num;

      sum += num;

      ++count;
    }
    std::cout << "The sum is: " << sum << "\n\n";


    // could just ask for three numbers, but what if it is 100
    // a loop is much less code, so easier to read write

    //  if number of entries varies, we could ask for number

    std::cout << "How many numbers are there: ";
    int number_entries;
    std::cin >> number_entries;

    sum = 0;
    count = 0;
    while(count < number_entries) {
      int num;
      std::cin >> num;

      sum += num;

      ++count;
    }
    std::cout << "The sum is: " << sum << "\n\n";


    // sum any amount of user supplied numbers
    // to do this we use what is called a sentinel (a special value that is agreed)
    // upon to be the stopping condition
    // continue to ask numbers until -1 to quite (-1 is sentinel)

    std::cout << "Please, enter numbers followed by a -1: ";
    int input;
    std::cin >> input;
    int total = 0;
    while(input != -1) {
      total += input;
      std::cin >> input;
    }
    std::cout << "The total is: " << total << '\n';

    // do-while (post-test) 1 or more
    // In general, just don't use this
    char ch;
    do {
      // looks ok for this code
      std::cout << "Please enter y or n: ";
      std::cin >> ch;

    } while(ch != 'y' && ch != 'n');

    // this make less sense
    // additionally, it is so rarely used
    // and a while-statement can be used instead
    // it is better just not to use it
    std::cout << "Please, enter numbers followed by a -1: ";
    int do_input;
    int do_total = 0;
    do {

      std::cin >> do_input;
      if(do_input != -1) {
        do_total += do_input;
      }

    } while(do_input != -1);
    std::cout << "The total is: " << do_total << '\n';



    // for-statement
    // for(initialization; condition; update) {
    //     body;
    //}

    // initialization is a declaration, condition is a boolean expression,
    // update is an expression

    // initialization, condition, and update are collectively the control group

    // initializtion runs once at start
    // then conditition tested
    for(int anumber = 0; anumber < 10; ++anumber) {
      std::cout << anumber << ' ';      

      // update runs at end of body
      // and condition run again
    }
    std::cout << '\n';

    // not in range, anumber only in scope for control group and body
    //anumber = 1;

    // equivalent to (except here anumber is accessible afterwards)
    /*
     int anumber = 0;
     while(i < anumber) {
      std::cout << anumber;      
      ++anumber;
    }
    */

    // you can have multiple initialization and update
    for(int i = 0, pow = 1; i < 21; ++i, pow *= 2) {
      std::cout << "2 ^ " << i << ": " << pow << '\n';
    }
    std::cout << '\n';

    // you can omit everyting but the condition of for, however
    // but this is more succinct as while
    i = 0;
    for(; i < 10; ) {
      std::cout << i << ' ';
      ++i;
    }
    std::cout << '\n';

    // when to use for vs while
    // if need all the control group use for
    // otherwise, use while (e.g., you need update in the body)


    // each one of these is a loop (but each increasing 1 each time)
    // There are 6 loops, we can use nested loops to run a loop multiple times
    // 0
    // 0 1
    // 0 1 2
    // 0 1 2 3
    // 0 1 2 3 4
    // 0 1 2 3 4 5

    int outer_control = 0;
    while(outer_control < 6) {

    	int inner_control = 0;
    	while(inner_control <= outer_control) {
    		std::cout << inner_control << ' ';
    		++inner_control;
    	}
    	std::cout << '\n';
    	++outer_control;
    }
    std::cout << '\n';
    // rewrite as for
    for(int outer_control = 0; outer_control < 6; ++outer_control)  {
      for(int inner_control = 0; inner_control <= outer_control; ++inner_control) {
        std::cout << inner_control << ' ';
      }
      std::cout << '\n';
    }
    std::cout << '\n';

    // 0
    // 1 0 
    // 2 1 0 
    // 3 2 1 0 
    // 4 3 2 1 0 
    // 5 4 3 2 1 0 

    for(int outer_control = 0; outer_control < 6; ++outer_control)  {
      for(int inner_control = outer_control; inner_control >= 0; --inner_control) {
        std::cout << inner_control << ' ';
      }
      std::cout << '\n';
    }
    std::cout << '\n';

    // 1 2 3 4
    // 2 4 6 8
    // 3 6 9 12
    // 4 8 12 16
    for(int i = 1; i <= 4; ++i) {
        for(int j = 1; j <= 4; ++j) {
            std::cout << i * j  << ' ';
        }
        std::cout << '\n';
    }
    std::cout << "\n\n";



    // add odd numbers from 1 to 100;
    int odd_sum = 0;
    for(int i = 1; i < 100; ++i) {
        if(i % 2 == 0) continue;

        odd_sum += i;
    }
    std::cout << "Odd Sum: " << odd_sum;

    return 0;
}
