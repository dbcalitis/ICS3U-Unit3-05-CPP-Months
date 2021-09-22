// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program prints the name of the month based on user input

#include <iostream>
#include <string>

int main() {
    // This function prints the name of the month based on user input

    std::string monthNumberString;
    int monthNumber;

    // input
    std::cout << "Enter the number of a month (ex:January = 1): ";
    std::cin >> monthNumberString;

    // process & output
    monthNumber = atoi(monthNumberString.c_str());

    switch (monthNumber) {
        case 1 :
            std::cout << "January" << std::endl;
            break;
        case 2 :
            std::cout << "February" << std::endl;
            break;
        case 3 :
            std::cout << "March" << std::endl;
            break;
        case 4 :
            std::cout << "April" << std::endl;
            break;
        case 5 :
            std::cout << "May" << std::endl;
            break;
        case 6 :
            std::cout << "June" << std::endl;
            break;
        case 7 :
            std::cout << "July" << std::endl;
            break;
        case 8 :
            std::cout << "August" << std::endl;
            break;
        case 9 :
            std::cout << "September" << std::endl;
            break;
        case 10 :
            std::cout << "October" << std::endl;
            break;
        case 11 :
            std::cout << "November" << std::endl;
            break;
        case 12 :
            std::cout << "December" << std::endl;
            break;
        default :
            std::cout << "Invalid number" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
