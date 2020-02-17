#include <iostream>
#include <string>
int main() {
    
    std::string hello = "Hello";
    std::string world = " World";
    std::cout << hello << ' ' << world << '\n';

    // ask a string its size (how long)
    std::cout << "size/length = " << hello.size() << '\n';
    std::cout << "size/length = " << world.size() << '\n';
    std::cout << '\n';

    std::string hello_world = hello + world;
    std::cout << hello_world << "\n\n";

    int num = 12;
    //num = num + 1
    num += 1;
    std::cout << "num: " << num << '\n';

    std::string na = "na";
    na += "na";
    std::cout << na << '\n';
    na += na;
    na += na;
    na += na;
    na += " Batman!";
    std::cout << na << '\n';

    //std::string word;
    //std::cin >> word;
    //std::cout << "Word is: " << word << '\n';
    
    //std::string word_two;
    //std::cin >> word_two;
    //std::cout << "second word is " << word_two << '\n';

    std::string name;
    std::getline(std::cin, name);
    std::cout << "Your name is: '" << name << "'\n";

    return 0;
}