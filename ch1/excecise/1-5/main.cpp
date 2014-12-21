//
//  main.cpp
//  Chapter1Excercises
//
//  Created by Daniel Chan on 12/20/14.
//  Copyright (c) 2014 Pookeye Inc. All rights reserved.
//
//  ecercise 1-5
// not valid, because x is outside the scope of the bracket...   once its closed it cant be used.
/*
 
 to fix this
 {std::string x = s + ",really";
 std::cout << s << std::endl; }
 std::cout << x << std::endl;
 
 move the last line inside the bracket.
 */
 
 
#include <iostream>
#include <string>

int main() {
    // insert code here...
    {std::string s = "a string";
        {std::string x = s + ",really";
            std::cout << s << std::endl;
        std::cout << x << std::endl;}
        
    }
    
    return 0;
}
