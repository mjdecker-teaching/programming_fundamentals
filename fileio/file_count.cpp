/**
 * @file file_copy.cpp
 *
 * Computer word count, line count, and character count
 * Outputs it to a file
 *
 * @author Michael John Decker, Ph.D. <mdecke@bgsu.edu>
 */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char * argv[]) {

    // get input filename
    std::cout << "Input filename? ";
    std::string input_filename;
    std::cin >> input_filename;

    // open check input file
    // need c_str as does not take string
    // but not class version of it (c-string, a char array; later topic)
    std::ifstream in(input_filename.c_str());
    if(!in) {
	std::cout << "Error opening: " << input_filename << '\n';
	// not zero means error
	return 1;
    }
	     
    // get output filename
    std::cout << "Output filename? ";
    std::string output_filename;
    std::cin >> output_filename;

    // open and check output file
    std::ofstream out(output_filename.c_str());
    if(!out) {
	std::cout << "Error opening: " << output_filename << '\n';
	return 1;
    }

    // basic idea go through input file once for each line, word, and character
    // The read once version use stuff beyond the what we know now

    // read lines
    std::string line;
    int num_lines = 0;
    while(std::getline(in, line)) {
	++num_lines;
    }

    // reset for words
    in.close();
    in.open(input_filename.c_str());

    // probably not needed
    if(!in) {
	std::cout << "Error opening: " << input_filename << '\n';
	return 1;
    }    
	

    // read words
    std::string word;
    int num_words = 0;
    while(in >> word) {
	++num_words;
    }

    // reset for characters
    in.close();
    in.open(input_filename.c_str());

    // probably not needed
    if(!in) {
	std::cout << "Error opening: " << input_filename << '\n';
	return 1;
    }    


    // read characters (with whitespace)
    char character;
    int num_characters = 0;
    while(in.get(character)) {
	++num_characters;
    }


    // output counts
    out << "Lines: "      << num_lines      << '\n';
    out << "Words: "      << num_words      << '\n';
    out << "Characters: " << num_characters << '\n';
    
    return 0;
}
