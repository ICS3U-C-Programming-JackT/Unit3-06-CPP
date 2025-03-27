// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: March 20, 2025
// Random number guessing program in c++ with try catch

#include <string>
#include <cmath>
#include <iostream>

int main() {
    // Create string and random variables
    std::string guessAsString;
    int guessAsInt;
    int randomNum;

    // Setting random number
    srand((unsigned)time(NULL));
    randomNum = rand() % 9 + 1;

    // Get user input
    std::cout << "Enter a number: ";
    std::cin >> guessAsString;

    // Try catch (converting guess into int)
    try {
        // Try converting guess from string to int datatype
        guessAsInt = std::stoi(guessAsString);
        if (guessAsInt == randomNum) {
            // In the scenario that the guess was correct
            std::cout << "Correct! Thanks for playing!";
        } else if (guessAsInt<0 || guessAsInt>9) {
            // In the scenario that the guess was out of the range
            std::cout <<(
                "Please enter a number within the given range, thanks!");
            main();
        } else {
            // In the scenario that the guess was wrong
            std::cout << (
            "Aw, your guess was wrong! The number was ")<<
            guessAsString << ". Try again!";
            main();
        }
    } catch (std::invalid_argument) {
        // In the scenario that something other than an integer is entered
        std::cout << "Please make sure to enter a number, not a string!";
        main();
    }
}
