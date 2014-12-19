//
//  main.cpp
//  Chapter1
//
//  Created by Daniel Chan on 12/14/14.
//  Copyright (c) 2014 Pookeye Inc. All rights reserved.
//

#include <iostream>
#include <string>

int main() {
    // ask for a persons name and greet the person.
    
    std::cout << "Please Enter your First Name: ";
    
    //read name
    std::string Firstname; //define the variable name
    std::cin >> Firstname; //read the name and put it into variable name
    std::cout << "Please Enter your Last Name: ";
    std::string LastName;
    std::cin >> LastName;
    
    //write a greeting
    std::cout << "Hello, " << Firstname <<" " << LastName << "!" << std::endl;
    
    
    return 0;
}
