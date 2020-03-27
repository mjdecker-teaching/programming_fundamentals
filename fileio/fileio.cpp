/**
 * @file fileio.cpp
 *
 * text/binary file
 *
 * Files read sequentially.  Exactly how std::cin/std::cout works.
 *   * Like std::cin, you have buffer of data (here an entire file) and you read
 *     and consume each part. Draw.
 *   * Like std::cout, you progressing append output.  Here, though it starts at beginning of file.
 *
 * 
 *
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>

// include to handle files read/write
// fstream - f for file & stream for you read and write a stream (consecutive sequence) of data
#include <fstream>

int main(int argc, char * argv[]) {

    // Class - CS term for a type that represents a concept
    // It supports a collection of data and operations on the data
    // std::string is a class that hold consecutive characters and
    // had operations to concatenate, get its size, etc.

    // int, double, etc. are known as primitive types (aka fundamental types)
    
    // Some additional terms
    // Construct - initialize/create a variable of that class type
    // (this variable (instance) is known as an object)
    // Object - an instance of a class

    // Two classes for handing file input/output (file io)
    // std::ifstream - i (input)  f (file) stream
    // std::ofstream - o (output) f (file) stream

    // A file needs to be associated with a filename
    // in order to know what it must read or write to
    // So, the class is initialized with a filename

    // it opens the file to read from starting at beginning
    // file is a path to any file on computer
    std::ifstream in("input.txt");
   
    // Note, this is short hand for
    //  std::ifstream in;
    //  in.open("input.txt");

    // C++ forbids this as a rule of the class
    //std::ifstream in = "input.txt";

    // reading works exactly like std::cin
    // even uses the same syntax
    // actually std::cin can be seem is treated as the same type

    // reads int from beginning of file
    int num;
    in >> num;
    std::cout << "num 1: " << num << '\n';

    // first int consumed points at next;
    int num2;
    in >> num2;
    std::cout << "num 2: " << num2 << '\n';

    // and so on

    // with std::cin we either
    //   had a fixed a mount we read in
    //   prompted for how much to enter
    //   used a special value to indiate end (sentinel)


    // files have their own built in sentinal known as end-of-file (EOF)
    // You can ask the file if it reached end-of-file
    bool is_eof = in.eof();
    std::cout << "is_eof: " << std::boolalpha << is_eof << '\n';

    // This is helpful for looping say to read all numbers in the file
    int num_count = 3;
    
     int number;
    in >> number;
    while(!in.eof()) {
	std::cout << "num " << num_count << ": " << number << '\n';
	in >> number;
	++num_count;
    }

    // this is a the pattern you need to know
    // read
    // while() {
    //   do whatever you need with what you read in
    //   read next item
    //}

    // Comment out the rest while above,
    // if you read first in the loop, what do you get
    // what is wrong?
    while(!in.eof()) {
	in >> number;
	std::cout << "num " << num_count << ": " << number << '\n';
	++num_count;
    }

    // After you read the last number, you did not reach eof yet
    // So, it went another round

    // What if you try to open a file (reading) that
    // does not exist or some other error occurs
    std::ifstream open_fails("no_such_file.txt");

    // The variable can be used as a bool
    // true if ok, false if error
    if(!open_fails) {
	std::cout << "Error opening no_such_file.txt\n";
	// normally would stop program if this happens
    }

    // What were the two ways to create and open a file?

    // If you open, a file you must also close the file
    // In C++, when the variable goes out of scope it will close itself

    // You can close it yourself as well with
    // Many other languages, require you to open/close yourself
    in.close();
    
    // after closed, you can re-open and it starts at beginning
    // or you can declare and open a new variable
    // Both will start at beginning of file and are separate from eachother
    // and previous time it was open

    in.open("input.txt");

    // So, a file variable can be used as a bool
    // Not only will it be false when an error occurs
    // but also when eof occurs

    // We can rewrite the read loop above as:
    int count = 0;
    int next_number;
    while(in >> next_number) {
	std::cout << "num " << count << ": " << next_number << '\n';
	++count;
    }


    // output
    // Here if the file does not exist, it will be created for you
    std::ofstream out("output.txt");

    // its a bool like std::ifstream
    // eof not really meaningful here though
    if(!out) {
	std::cout << "Error opening output.txt\n";
	// normally stop program if this happens
    }

    // Output works just like std::cout (same type as well)
    // Progressively print/write data in sequence to file

    out << "This is a triump\n";

    // this goes after last output line
    int answer = 42;
    out << "answer = " << 42 << '\n';


    // Lastly, there is one type that does both on the same
    // file at the same time.
    // Works/combines both std::ifstream/std::ofstream
    // Not as useful, though
    std::fstream inout;
    
    return 0;
}
