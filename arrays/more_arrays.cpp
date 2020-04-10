/**
 * @file main.cpp
 *
 * This is a generic C++ main file.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <string>

int main(int argc, char * argv[]) {

    // Each line of grocery_list.txt is the triplet: item #bought price
    // If we read this in, since there are three parts we can store them in
    // three different arrays.
    std::ifstream input("grocery_list.txt");

    const NUM_ENTRIES = 3;
    std::string items[NUM_ENTRIES];
    int num_bought[NUM_ENTRIES];
    double prices[NUM_ENTRIES];

    int count = 0;
    while(count < NUM_ENTRIES && input >> items[count]) {
        // could have these in condition too
        input >> num_bought[count];
        input >> prices[count];
        ++count;
    }


    // These are called parallel arrays as the
    // elements at each position correspond to the elements in the other
    // This takes a lot of management to make sure manipulating each is done
    // consistantly.  E.g., if you add a new item to one, you need to make sure
    // you add it to all

    // This is an anti pattern which you should never avoid using.  There are much better solutions.


    // multi-dimension dimension
    // So, far we have only looked at single dimentional arrays.
    // You can have multiple dimension arrays.  For example, a two 
    // dimension array is like a matrix. It is an array of arrays, take this example:

    const int NUM_ROWS = 5;
    const int NUM_COLUMNS = 7;
    int matrix[NUM_ROWS][NUM_COLUMNS];

    // There are 5-arrays with each of the 5 having 7 values



    return 0;
}
