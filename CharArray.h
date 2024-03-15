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
    CharArray(char *f);
    ~CharArray();
    // prefix increment
    char* operator++();
    char* operator--(int);
};


#endif //UNTITLED_CHARARRAY_H
