//
// Created by abamr on 3/15/2024.
//

#ifndef UNTITLED_CHARARRAY_H
#define UNTITLED_CHARARRAY_H
#include <cstring>
#include<iostream>

class CharArray {
    int size;
    char*array;
public:
    //default constructor
    CharArray(){
    }
    // paramaterized constructor with char array
    CharArray(char *f);

// accessor of array
    char*getarray();

    ~CharArray();
    // prefix increment
    char* operator++();
    //postfix decrement
    char* operator--(int);
    // joins 2 char arrays together
    CharArray operator+(const CharArray &right);
};


#endif //UNTITLED_CHARARRAY_H
