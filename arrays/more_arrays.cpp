/**
 * @file main.cpp
 *
 * This is a generic C++ main file.
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <string>
#include <fstream>

// const because we are only reading
// can't do [][] but could do const int * matrix[]
// void print_2d_int_array(const int matrix[][], int num_rows, int num_columns) {
//     for(int i = 0; i < num_rows; ++i) {
//         for(int j = 0; j < num_rows; ++j) {
//             std::cout << matrix[i][j] << ' ';
//         }
//         std::cout << '\n';
//     }

// }

const int MATRIX_SIZE = 3;
// enforced the column size
void print_2d_int_array(const int matrix[][3], int num_rows) {
    for(int i = 0; i < num_rows; ++i) {
        for(int j = 0; j < num_rows; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';

}

int main(int argc, char * argv[]) {

    // Each line of grocery_list.txt is the triplet: item #bought price
    // If we read this in, since there are three parts we can store them in
    // three different arrays.
    std::ifstream input("grocery_list.txt");
    if(!input) {
        std::cerr << "File not found\n";
        return 1;
    }

    const int NUM_ENTRIES = 3;
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

    for(int i = 0; i < NUM_ENTRIES; ++i) {
        std::cout << items[i] << ": $" << num_bought[i] * prices[i] << '\n';
    }
    std::cout << '\n';

    // These are called parallel arrays as the
    // elements at each position correspond to the elements in the other
    // This takes a lot of management to make sure manipulating each is done
    // consistantly.  E.g., if you add a new item to one, you need to make sure
    // you add it to all

    // This is an anti pattern which you should avoid using.  There are much better solutions.

    // multi-dimension dimension
    // So, far we have only looked at single dimentional arrays.
    // You can have multiple dimension arrays.  For example, a two 
    // dimension array is like a matrix. It is an array of arrays, take this example:

    // This is 5-arrays with each of the 5 having another array of 7 values
    const int NUM_ROWS = 5;
    const int NUM_COLUMNS = 7;
    int matrix[NUM_ROWS][NUM_COLUMNS] = { 
        {  0,  1,  2,  3,  4,  5,  6 },
        { 10, 11, 12, 13, 14, 15, 16 },
        { 20, 21, 22, 23, 24, 25, 26 },
        { 30, 31, 32, 33, 34, 35, 36 },
        { 40, 41, 42, 43, 44, 45, 46 },
    };

    // going through 2-dimensional array requires nested loops
    // basically a loop for each dimension

    // go through top level array (rows)
    for(int i = 0; i < NUM_ROWS; ++i) {
        // go through array at row i
        for(int j = 0; j < NUM_COLUMNS; ++j) {
            // get row i column j
            std::cout << matrix[i][j] << ' ';
        }
        // new line after each row prints
        std::cout << '\n';
    }
    std::cout << '\n';

    //const int MATRIX_SIZE = 3;
    int matrix_one[MATRIX_SIZE][MATRIX_SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix_two[MATRIX_SIZE][MATRIX_SIZE] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    print_2d_int_array(matrix_two, MATRIX_SIZE);

    // matrix addition
    int result[MATRIX_SIZE][MATRIX_SIZE];
    for(int i = 0; i < MATRIX_SIZE; ++i) {
        for(int j = 0; j < MATRIX_SIZE; ++j) {
            result[i][j] = matrix_one[i][j] + matrix_two[i][j];
        }
    }

    // print it
    print_2d_int_array(result, MATRIX_SIZE);

    // sum rows
    for(int i = 0; i < MATRIX_SIZE; ++i) {
        int row_sum = 0;
        for(int j = 0; j < MATRIX_SIZE; ++j) {
            row_sum += result[i][j];
        }
        std::cout << "row " << i << " sum: " << row_sum << '\n';
    }

    // sum columns
    // Note, since both dimensions are the same
    // we don't need to swap the sizes in conditions
    for(int i = 0; i < MATRIX_SIZE; ++i) {
        int col_sum = 0;
        for(int j = 0; j < MATRIX_SIZE; ++j) {
            col_sum += result[j][i];
        }
        std::cout << "col " << i << " sum: " << col_sum << '\n';
    }

    // Some other uses for 2D arrays are: images, spreadsheets, lookup table, and more


    // Each [] you add gives it another dimention.  Here is a 3D array
    // It is an array of 2D arrays
    const int SIZE = 2;
    int three_d_array[SIZE][SIZE][SIZE] = {
        {
            {1, 2},
            {3, 4}
        },

        {
            {5, 6},
            {7, 8}
        }

    };

    // 3D array needs 3 loops to set/access each element
    for(int i = 0; i < SIZE; ++i) {
        for(int j = 0; j < SIZE; ++j) {
            for(int k = 0; k < SIZE; ++k) {
                std::cout << three_d_array[i][j][k] << ' ';
            }
            std::cout << '\n';
        }
        std::cout << '\n';
    }

    // Although, you can use a 3D array for 3D space
    // It is more likely that you ar using multiple dimensions for
    // multiple layers of indexing into something.

    // For example, some company has X stores with Y Managers each, and each oversees Z employees.
    // The data is indexed by X Y Z to get payroll for employee.  Here you can see how much
    // each store, manager's team, and individual employee get payes
    const int NUM_STORES = 3;
    const int NUM_MANAGERS = 2;
    const int NUM_EMPLOYEES = 3;
    double salaries[NUM_STORES][NUM_MANAGERS][NUM_EMPLOYEES] = {
        { {88000, 80000, 84000}, {85000, 90000, 87500} },
        { {54000, 60000, 61000}, {55000, 47000, 49000} },
        { {68000, 63000, 71000}, {67000, 65000, 73000} }
    };


    // get store 2 manager 0, employee 1's salary
    std::cout << salaries[2][0][1] << '\n';

    return 0;
}
