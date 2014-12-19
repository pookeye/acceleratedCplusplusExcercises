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
    std::string FirstName; //define the variable name
    std::cin >> FirstName; //read the name and put it into variable name
    std::cout << "Please Enter your Last Name: ";
    std::string LastName;
    std::cin >> LastName;
    //write a greeting
    //std::cout << "Hello, " << FirstName <<" " << LastName << "!" << std::endl;
    
    //build the message that we intend to write
    const std::string greeting = "Hello, " + FirstName + " " + LastName + "!";
    
    //build the second and fourth lines of the output
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";
    
    std::cout << greeting.size();
    
    //build the first and fifth lines of the output
    const std::string first(second.size(), '*');
    
    //display it all out
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;
    
    return 0;
    
}
