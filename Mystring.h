/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mystring.h
 * Author: sajjad
 *
 * Created on December 26, 2020, 11:02 PM
 */

#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring {
public:
    Mystring(); // no-args constructor
    Mystring(char *s); // Overloaded constructor
    Mystring(const Mystring& orig); // copy constructor
    virtual ~Mystring(); // destructor
    
public:
    void display() const; // display str using std::cout
    int get_length() const; // returns length of str
    const char* get_str() const; // returns str
private:
    char *str; // pointer to a char[] that holds a c-style string
};

#endif /* MYSTRING_H */

