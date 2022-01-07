// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Jan. 6, 2022
// This program asks the user to enter a whole number
// and then uses a loop to calculate and display the factorial
//  of the user number from 1 to the number the user entered.
# include <iostream>

int main() {
    // initialize the loop counter and factorial answer
    int loopCounter = 0;
    int factorialAnswer = 1;
    int userNum;
    std::string userNumString;

    // get the user number as string
    std::cout << "Enter a whole number: ";
    std::cin >> userNumString;
    std::cout << std::endl;

    try {
        // convert the user number as string to an integer
        userNum = std::stoi(userNumString);
        std::cout << "" << std::endl;

        // check to see if user number is a whole number
        if (userNum >= 0) {
            // calculate the factorial of the user number
            do {
                loopCounter = loopCounter + 1;
                factorialAnswer = factorialAnswer * loopCounter;
                std::cout << "Tracking " << loopCounter <<
                        " times through the loop.\n";
            } while (loopCounter < userNum);
            // display the factorial to the user
                std::cout << userNum <<" ! = " << factorialAnswer << std::endl;
                std::cout << "" << std::endl;
                std::cout << "Thanks for playing! ";

        } else {
            std::cout << userNum << " is not a whole number.";
            std::cout << "" << std::endl;
            std::cout << "Thanks for playing! ";
    }
    // tells the user that they did not enter a number
    } catch (std::invalid_argument) {
        std::cout <<userNumString << " is not a number.\n";
        std::cout << "" << std::endl;
        std::cout << "Thanks for playing! ";
    }
}
