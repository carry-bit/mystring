/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mystring.cpp
 * Author: sajjad
 * 
 * Created on December 26, 2020, 11:02 PM
 */

#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring()
: str{nullptr}
{
    str = new char[1];
    *str = '\0';
}

Mystring::Mystring(char* s)
: str{nullptr}
{
    if (s == nullptr)
        Mystring();
    else {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

Mystring::Mystring(const Mystring& orig)
: str{nullptr}
{
    str = new char[std::strlen(orig.str) + 1];
    std::strcpy(this->str, orig.str);
}

Mystring::~Mystring() {
    delete [] str;
}

// Implementing other methods

void Mystring::display() const {
    std::cout << str;
}

int Mystring::get_length() const {
    return std::strlen(str);
}

const char* Mystring::get_str() const {
    return str;
}
