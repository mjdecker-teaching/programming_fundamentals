/**
 * @file arrays.cpp
 *
 * Illustrates arrays and files through program
 * that reads in up to ARRAY_SIZE data and performs some calculations
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <string>
#include <fstream>

const int ARRAY_SIZE = 10;

/* std::ifstream has to be passed by reference
   Will read up size values into data array
   Will return how much read in
 */
int read_data(std::ifstream & in, int size, int data[]) {
    // need to count how much we read to
    //    make sure we don't read over ARRAY_SIZE and
    //    file may have less that ARRAY_SIZE numbers. 
    //        In which case the array is partially filled
    //        Used porition is known as its size or length why total amount can hold is known as capacity
    int size = 0;

    //  reads int each element in array
    while(size < size && (in >> data[size])) {
        ++size;
    }

    return size;
}

// get sum of elements in array
int get_sum(int size, int data[]) {
    int total = 0;

    // Being off by one is really common mistake.
    // Be careful not to make them. 
    //for(int i = 0; i <= size; ++i) {
    for(int i = 0; i <= size; ++i) {
        total += data[i];
    }
    return total;
}

// get minimum element in array
int get_minimum(int size, int data[]) {
    int minimum = data[0];
    for(int i = 1; i < size; ++i) {
        if(data[i]  < minimum) {
            minimum = data[i];
        }
    }
    return minimum;
}

// get maximum element in array;
int get_maximum(int size, int data[]) {
    int maximum = data[0];
    for(int i = 1; i < size; ++i) {
        if(data[i]  < maximum) {
            maximum = data[i];
        }
    }
    return maximum;
}

int main() {

    std::cout << "Input file: ";
    std::string filename;
    std::cin >> filename;

    // open input file
    std::ifstream input(filename.c_str());
    if(!input) {
        std::cout << "Can't open numbers " << filename << " \n";
        return 1;
    }

    // open output file;
    std::ofstream output("results.txt");
    if(!output) {
        std::cout << "Can't open results.txt\n";
        return 1;
    }

    /*
        We are going to reads in data to array
        Computes max, min, and average.
        Then outputs results

        This nicely separates input, operations on the data, and output
    */

    int data[ARRAY_SIZE];
    int count = read_data(input, ARRAY_SIZE, data);

    // we could write one big loop that computes all three
    // but will be a complicated loop
    // instead we will compute one at time
    // through functions with a singular purpose (could inline functions too)
    // but a good decomposition to use them
    int minimum = get_minimum(ARRAY_SIZE, data);
    int maximum = get_maximum(ARRAY_SIZE, data);
    int average = get_sum(ARRAY_SIZE, data) / count;


    // now we are going to output a repor that consists of
    // the count, max, min, average, and the numbers we used
    output << "Maximum: " << maximum << '\n';
    output << "Minimum: " << minimum << '\n';
    output << "Average: " << average << '\n';
    output << "Count: " << count << '\n';
    output << '\n';

    for(int i = 0; i < count; ++i) {
        output << "datum " << i << ": " << data[i] << '\n';
    }

    return 0;
}
