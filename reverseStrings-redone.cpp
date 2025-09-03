// Created by Roman Pena on 8/25/25 - edited at home on 9/3/2025
//Reverse A String Program

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

// Trim Function

std::string trim(const std::string& str) {
    size_t first = 0;
    size_t last = str.size();

    //first none space

    while (first < str.size() && std::isspace(static_cast<unsigned char>(str[first]))) {
        ++first;
    }


    // 2nd none space character
    while (last > first && std::isspace(static_cast<unsigned char>(str[last - 1]))) {
        --last;
    }

    return str.substr(first, last - first);
}

// function to reverse string

std::string reverseString(const std::string& str) {
    std::string result = str;
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    //trim spcaes
    std::string trimmed = trim(input);

    //
    std::string reversed = reverseString(trimmed);

    std::cout << "Original input: [" << input << "]" << std::endl;
    std::cout << "After trim:     [" << trimmed << "]" << std::endl;
    std::cout << "Reversed:       [" << reversed << "]" << std::endl;

    return 0;
}