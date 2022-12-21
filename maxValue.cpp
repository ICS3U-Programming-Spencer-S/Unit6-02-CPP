// Copyright (c) 2022 All rights reserved.
// .
// Created by: Spencer S
// Date : Dec 18, 2022
// A program which uses lists and without functions
// to round a decimal number

#include <time.h>

#include <array>
#include <iostream>
#include <random>
using std::string;

// Declaring constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// Defining the function that returns the max value

int MaxNumber(std::array<int, 10> array) {
    int counter, maxNum;
    maxNum = array[0];

    for (counter = 1; counter < 10; counter++) {
        if (maxNum < array[counter]) {
            maxNum = array[counter];
        }
    }
    return maxNum;
}


int main() {
    std::cout << "This is a program that generates 10 random numbers\n";
    std::cout << "And displays the largest number\n";

    // declaring the variables
    std::array<int, 10> arrayOfInt;
    int sum = 0;
    int maxNumList = 0;
    int RandNum;
    int counter;
    srand(time(NULL));
    // to generate random numbers
    for (counter = 0; counter < 11; counter++) {
        RandNum = (rand_r() % 100 + 1) + MIN_NUM;
        arrayOfInt[counter] = RandNum;
        std::cout << RandNum << " added to array at element ";
        std::cout << counter << "\n";
    }

    // calling function
    maxNumList = MaxNumber(arrayOfInt);

    std::cout << "\nThe maximum  number is " << maxNumList;
    std::cout << "\n";
}
