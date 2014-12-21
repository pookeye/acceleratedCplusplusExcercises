//
//  main.cpp
//  Chapter1Excercises
//
//  Created by Daniel Chan on 12/20/14.
//  Copyright (c) 2014 Pookeye Inc. All rights reserved.
//
//  ecercise 1-6
// not valid, because x is outside the scope of the bracket...   once its closed it cant be used.
/*
 What is your name?Daniel
 Hello, Daniel
 And what is yours? Beckett
 Hello, Beckett; nice to meet you too!
 */
 
 
#include <iostream>
#include <string>

int main() {
    // insert code here...
    std::cout << "What is your name?";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
    
    
    
    return 0;
}
