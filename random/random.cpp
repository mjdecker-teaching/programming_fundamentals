#include <iostream>
#include <ctime>

int main() {

    //unsigned int seed = 123;
    unsigned int seed = time(0);
    srand(seed);

    int random_number = rand();
    std::cout << "random number is " << random_number << '\n';

    // 6 sided die
    int die_roll = rand() % 6 + 1;
    std::cout << "roll is: " << die_roll << '\n';

    // if want value between MAX and MIN
    const int MAX = 45;
    const int MIN = -1;
    // rand() % (MAX - MIN + 1) + MIN
    int random = rand() % (MAX - MIN + 1) + MIN;
    std::cout << "random is: " << random << '\n';

    return 0;
}