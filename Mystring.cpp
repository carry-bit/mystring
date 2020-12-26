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

Mystring::Mystring(const Mystring& orig) {
}

Mystring::~Mystring() {
}

// Implementing other methods

void Mystring::display() const {

}

int Mystring::get_length() const {

}

const char Mystring::get_str() const {

}
