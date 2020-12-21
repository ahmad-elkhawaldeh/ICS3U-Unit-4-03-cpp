// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: Dec 2020
//  a program that accepts a positive integer;then calculates the square
//  (power of 2) of each integer from 0 to this number

#include <iostream>
#include <cmath>



int main() {
    int positiveInteger;
    int loopCounter = 0;
    int positive_exponent;
    std::string positive_as_string;

    std::cout << " I will give you the factroial of the number you input"
    << std::endl;


    // input
    std::cout << "Enter a number : ";
    std::cin >> positive_as_string;

    // process
     try {
        positiveInteger = std::stoi(positive_as_string);
        if (positiveInteger < 0) {
            throw std::invalid_argument("");
        }

        for (loopCounter = 0; loopCounter
            < positiveInteger + 1; loopCounter++) {
            positive_exponent = pow(loopCounter, 2);
            std::cout << loopCounter << "² =  " << positive_exponent
            << std::endl;
        }
    }catch (std::invalid_argument) {
            std::cout << "That was not a invalid integer" << std::endl;
    }
}
