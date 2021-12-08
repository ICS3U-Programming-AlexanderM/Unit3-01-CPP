// Copyright (c) 2021 Alexander Matheson HS All rights reserved.
//
// Created by: Alexander Matheson
// Created on: Dec 8, 2021
// This program calculates total from subtotal and tax
#include <iostream>


int main() {
    // this function calculates total from subtotal and tax
    const float HST = 0.13;
    float tax;
    float subTotal;
    float total;

    // input
    std::cout << "Enter the subtotal: $";
    std::cin >> subTotal;

    // process
    tax = + subTotal * HST;
    total = subTotal + tax;

    // output
    std::cout << "" << std::endl;
    std::cout << "The HST is: $" << tax << ", and the total cost is: $"
    << total << "." << std::endl;
}
