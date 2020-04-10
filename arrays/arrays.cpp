/**
 * @file arrays.cpp
 *
 * Introduce arrays in C++.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <string>
#include <fstream>

const int DATA_SIZE = 10;

// Passes copy of the base-address only
// Since both copy and original point
// to same addrss, [] can modifiy
void init_int_array(int data[DATA_SIZE]) {
    for(int i = 0; i < DATA_SIZE; ++i) {
        data[i] = DATA_SIZE - i;
    }
}


// Make const int data[] to make read only
// as it becomes an array of const int (read only)
// This also does not enfource the size or check
// so dangerous.  Don't do.
void print_int_array(const int data[DATA_SIZE]) {
    // lost its size
    //std::cout << "sizeof: " << sizeof(data) << '\n';
    for(int i = 0; i < DATA_SIZE; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << '\n';
}

// Always pass the size of the array with the array (still base-address)
// Can be any size
void init_int_array(int size, int data[]) {
    for(int i = 0; i < size; ++i) {
        data[i] = size - i;
    }
}

void print_int_array(int size, const int data[]) {

    for(int i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << '\n';
}


bool is_equal(int size_one, double array_one[], int size_two, double array_two[]) {
    if(size_one != size_two) return false;

    for(int i = 0; i < size_one; ++i) {
        if(array_one[i] != array_two[i]) {
            return false;
        }
    }
    return true;
}



int main() {

    /*
        An array is a collection of elements of the same type.
        It allows you store multiple int, double, or anything else.
    */

    // before we declared a single variable with space for a single element of that specified type

    // single int, double, std::string, respectively
    int single_int = 42;
    double single_double = 3.14;
    std::string single_string = "holds a single string";

    // To declare an array, you declare it like you would for a single variable, but
    // you add a [] after the variable  with the number of elements (array size) within the []
    // number of element was be non-negative (although, 0 is not very useful)
    // Once declared, an array's size can not be changed.

    // declare an array of 10 ints
    int ten_ints[10];


    // delare an array of 7 strings
    std::string seven_strings[7];

    int foo[0] = { };

    /*
        What you get when you declare an array is a large chuck of memory,
        where all the elements are stored consecutively.

        
        Here is what an array of 5 elements (array size of 5) looks like (on board in class).

        [ element 1 | element 2 | element 3 | element 4 | element 5 ]

        Each element is said to have a position or index in the array.
        Positions/indexes start at 0 for C++.  The following is the same
        array with the positions labeled

          position 0   position 1   position 2   position 3    position 4
        [ element 1  | element 2  | element 3  | element 4   | element 5  ]

        An element is accessed/indexed by using the index operator [] and the elements position.
        Note, valid positions are always 0 to array-size - 1 (always an whole number)
    */

    // declare an array data of 4 ints
    // it is common to have another variable to represent
    // the size.  Here it is const because of fixed size
    const int ARRAY_SIZE = 5;
    int data[ARRAY_SIZE];

    // access each and set values (use as l-value)
    data[0] = 1;
    data[1] = 2;
    data[2] = 3;
    data[3] = 4;
    data[4] = 5;

    // You can try accessing positions greater that the array zie
    // but as you do not allocate the space (don't own it), it may result in a crash
    // data[5] = 6;

    std::cout << "data[0]: " << data[0] << '\n';
    std::cout << "data[1]: " << data[1] << '\n';
    std::cout << "data[2]: " << data[2] << '\n';
    std::cout << "data[3]: " << data[3] << '\n';
    std::cout << "data[4]: " << data[4] << '\n';

    // outside array, may error
    //std::cout << "data[5]: " << data[5] << '\n';

    std::cout << '\n';
    std::cout << '\n';

    // using the [] peels off the array of the type leaving in this case
    // just the int


    // common to use a loop to go over all array contents
    for(int index = 0; index < ARRAY_SIZE; ++index) {
        std::cout << "data[" << index << "]: " << data[index] << '\n';
    }
    std::cout << '\n';
    std::cout << '\n';

    /* 
        When you declare an array it makes space to store the that number of elements

        That is, if you declare an array of X element of type T you get X * sizeof(T) consecutive bytes 
        of consecutive memory.

        What the array variable actually is, is the address in memory of the first byte (base-address).
        Accessing an element at position P is: base-address + P * sizeof(T)
    */

    // Since indexing into array results in another l-value
    // you can read into with std::cin or from a file

    std::cin >> data[3];
    std::cout << "data[3]: " << data[3] << '\n';

    // note you can not read/write and array
    //std::cin >> data;

    // outputs the base-address in memory
    std::cout << data;
    
    // except if it is char[]
    char word[20];
    // actually dangerous as could put in more than specified size
    std::cin >> word;
    std::cout << word << '\n';;

    /*
        char[] is the actual type of a string-literal.  It known as a c-string
        because it comes from the C language.  As such, C++ has specific support for this time.
        In addition, std::string is a wrapper around a char[] that allows for higher level operations
        such as string concatenation.  A array does not know its own size, so how did it know the 
        correct number of characters to print?

        c-strings have an additional character that it does not print that acts as a sentine.
        It is the null character ('\0') and it null-terminates the c-string
    */

    // 11 char + 1 for null-terminator
    const char str[12] = "hello world";
    std::cout << str << '\n';
    std::cout << str[0] << '\n';
    std::cout << int(str[11]) << '\n';


    std::cout << '\n';
    std::cout << '\n';

    // Array intialization (as opposed to indexing and assigning)
    // Comma-separted list between {}.  Initializes each int left to right
    // position 0 is 5, 1 is 6, 2 is 2, and position 3 is 9
    const int SIZE = 4;
    int values[SIZE] = { 5, 6, 2, 9 };

    for(int index = 0; index < SIZE; ++index) {
        std::cout << "values[" << index << "]: " << values[index] << '\n';
    }

    std::cout << '\n';
    std::cout << '\n';

    // this is an array of chars not a c-string as no null-terminator
    // wont print out correctly
    char characters[SIZE] = { 'a', 'b', 'c', 'd' };

    // this is  a c-string
    char c_string[SIZE] = { 'a', 'b', 'c', '\0' };
    std::cout << c_string << '\n';

    std::cout << '\n';
    std::cout << '\n';

    // Partial initialization
    // You don't have to specify all elements when initialized, unspecified 
    // are default initialized.  For numbers, this means 0
    int partial[SIZE] = { 1, 2 };
    for(int index = 0; index < SIZE; ++index) {
        std::cout << "partial[" << index << "]: " << partial[index] << '\n';
    }

    // None, default initializes all
    int none[SIZE] = { };
    for(int index = 0; index < SIZE; ++index) {
        std::cout << "none[" << index << "]: " << none[index] << '\n';
    }

    std::cout << '\n';
    std::cout << '\n';

    // Implicit size from initialization
    // gets it size from initialization (i.e., 3)
    int implicit[] = {1, 2, 3};
    //int data_array[0];
    int data_array[DATA_SIZE];
    std::cout << "sizeof: " << sizeof(data_array) << '\n';

    std::cout << '\n';
    std::cout << '\n';


    //init_int_array(data_array);
    //print_int_array(data_array);

    init_int_array(DATA_SIZE, data_array);
    print_int_array(DATA_SIZE, data_array);

    std::cout << '\n';
    std::cout << '\n';

    // arrays don't support assignment
    // Best case (like with function call) it assigned the base-address
    // Worst case it won't compile, try assign to local arrays
    //partial = none;

    // instead you need to copy each element over
    for(int i = 0; i < SIZE; ++i) {
        none[i] = partial[i];
    }

    // none went from all zeros to: 1, 2, 3, 0
    print_int_array(SIZE, none);

    std::cout << '\n';
    std::cout << '\n';


    // array index can be an expression
    // result of expression is index
    // get midpoint
    std::cout << "data_array[DATA_SIZE / 2]: " <<  data_array[DATA_SIZE / 2] << '\n';

    std::cout << '\n';
    std::cout << '\n';

    int pos = 0;
    while(pos < DATA_SIZE) {
        // [] is expression resulting in l-value
        // This increments the int at pos,
        std::cout << ++data_array[pos] << '\n';

        // get item at pos, then increment
        // we modified it permantely in previous line
        std::cout << data_array[pos++] << '\n';

    }
    std::cout << '\n';

    // compring arrays;
    double array[] = { 3.14, 9.81 };
    double duplicate[] = { 3.14, 9.81 };

    // this compares the address not the contents
    std::cout << "array == array: " << std::boolalpha << (array == array) << '\n';
    std::cout << "array == duplicate: " << std::boolalpha << (array == duplicate) << '\n';


    std::cout << "is_equal: " << is_equal(2, array, 2, duplicate) << '\n';

    std::cout << '\n';
    std::cout << '\n';

    return 0;
}
