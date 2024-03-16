//
// Created by abamr on 3/15/2024.
//

#ifndef UNTITLED_CHARARRAY_H
#define UNTITLED_CHARARRAY_H
#include <cstring>
#include <utility>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
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
//deconstructor
 ~CharArray();
    // prefix increment
    char* operator++();
    //postfix decrement
    char* operator--(int);
    // joins 2 char arrays together
    CharArray operator+(const CharArray &right);
char first();
char last();
};



#endif //UNTITLED_CHARARRAY_H
