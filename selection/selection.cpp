/**
 * @file selection.cpp
 *
 * Illusrate booleans, comparison, and if-statemetn
 *
 * @author Michael John Decker, Ph.D. <mdecke@bsgu.edu>
 */

#include <iostream>
#include <iomanip>
#include <string>

int main(int argc, char * argv[]) {

  /*
    Program elements:
       sequential execution (each line/statement one after other)
       selection (selectively execute a line)
       repeat (repeatedly execute)
   */

  // bool stands for boolean
  // can hold true or false
  bool is_true = true;
  bool is_false = false;
  std::cout << "is_true: " << is_true << "\tis_false:  " << is_false << '\n';
  std::cout << std::boolalpha;  
  std::cout << "is_true: " << is_true << "\tis_false:  " << is_false << '\n';
  //std::cout << std::noboolalpha;  

  // any number besides 0 is true
  bool is_nonzero = 42;
  bool zero_is_false = 0;
  std::cout << "is_nonzero: " << is_nonzero << "\tzero_is_false:  " << zero_is_false << '\n';

  // comparison
  int zero = 0;
  int ten = 10;
  int number = 42;
  bool is_zero = number == 0;
  bool is_not_zero = number != 0;
  std::cout <<  "is_zero: " << is_zero << '\n';
  std::cout <<  "is_not_zero: " << is_not_zero << '\n';

  // << and >> are evaluated before == so need ()
  std::cout <<  "is_zero: " << (zero == 0) << '\n';
  // common mistake is to accidently have only 1 =
  std::cout <<  "answer: " << (number = 9001) << '\n';

  // other comparisons
  std::cout <<  "less than: " << (zero < ten) << '\n';
  std::cout <<  "greater than: " << (ten > zero) << '\n';
  std::cout <<  "less than or equal: " << (zero <= ten) << '\n';
  std::cout <<  "less than or equal: " << (zero <= 0) << '\n';
  std::cout <<  "greater than or equal: " << (ten > zero) << '\n';
  std::cout <<  "greater than or equal: " << (ten >= 10) << '\n';

  // if-statement selectively runs code depending on if true or false
  // Uses a keyword if, part between () is known as condition
  // between {} is known as body or then-part.  Runs only if condition is true
  if(number > 0) {
    std::cout << "number > 0 is true\n";
  }

  if(number < 0) {
    // never will run
    std::cout << "number < 0 is true\n";
  }

  // if-statements can have an else-clause
  // which run only when condition is false
  // keyword else and the body of else in {}
  // proper indentation is important
  if(number < 0) {
    // never will run
    std::cout << "number < 0 is true\n";
  } else {
    // runs as condition is false
    std::cout << "number < 0 is false\n";
  }

  // if a single statement is in body
  // do not need {}, but generally nicer to always have {}
  if(number < 3)
    std::cout << "number < 3\n";
  else
    std::cout << "number >= 3\n";

  std::cout << '\n';
  
  char input;
  std::cout << "Add one to number? ";
  std::cin >> input;
  
  std::cout << "old number:" << number << '\n';
  if(input == 'y') {
    number += 1;
    std::cout << "new number:" << number << '\n';
  } else {
    std::cout << "same number:" << number << '\n';
  }
  std::cout << '\n';

  // string comparison is
  // lexicographical (i.e., dictionary order)
  std::string hello("hello");
  std::string world("world");

  if(hello < world) {
    std::cout << "Dictionary order\n";
  } else {
    std::cout << "???\n";
  }

  std::string help("help");
  std::string hello_world("hello world");

  std::cout << "hello > help: " << (hello > help) << '\n';
  
  std::cout << "hello == hello world " << (hello == hello_world) << '\n';
  std::cout << "hello < hello world " << (hello < hello_world) << '\n';
  std::cout << '\n';


  // nested if
  // is it valid?
  std::cout << "Enter a number between 0 and 99: ";
  int input;
  std::cin >> input; 
/*
  if(input > 0)
    if(input < 100)
      std::cout << "Valid input";
  // dangling else (it's the inner's, but looks like it should be outers)
  else
    std::cout << "Invalid input";
  else
    std::cout << "Invalid input";
/*

  if(input > 0) {
    if(input < 100) {
      std::cout << "Valid input";
    } else {
      std::cout << "Invalid input";
    }
  } else {
    std::cout << "Invalid input";
  }
  std::cout << '\n';

  // else if
  // zero positive or negative
  int num;
  std::cin >> num;

/*
  if(num == 0) {
    std::cout << "zero";
  } else {
      if(num > 0) {
        std::cout << "positive";
      } else {
        if(num < 0) {
          std::cout << "negative";
        }
      }
  }
  */

  if(num == 0) {
    std::cout << "zero";
  } else if(num > 0) {
    std::cout << "positive";
  } else if(num < 0) {
    std::cout << "negative";
  }
  std::cout << '\n';

  return 0;
}
