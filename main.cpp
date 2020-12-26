/* 
 * File:   main.cpp
 * Author: sajjad
 *
 * Created on December 26, 2020, 10:57 PM
 */

#include <iostream>
#include "Mystring.h"

using namespace std;


int main(int argc, char** argv) {
    
    Mystring empty; // Creates an empty str (point to nullptr)
    Mystring larry("Larry"); // Call Overloaded constructor (str points to "Larry")
    Mystring stooge {larry}; // Copy constructor (new str is separate from orig.str)
    
    return 0;
}

