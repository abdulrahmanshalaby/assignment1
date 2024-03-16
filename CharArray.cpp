//
// Created by abamr on 3/15/2024.
//

#include "CharArray.h"
CharArray::~CharArray() {
    delete[]array;

}

CharArray::CharArray(char *f) {
    size= strlen(f);
    array=new char(size);
    strcpy(array,f);

}

char *CharArray::operator++() {
    for (int i = 0; i < size; ++i) {
        array[i]++;

    }
    return array;
}

char *CharArray::operator--(int) {
    for (int i = 0; i < size; ++i) {
        array[i]--;


    }
    return array;
}

CharArray CharArray::operator+(const CharArray &right) {
    CharArray r;
    r.array=new char(strlen(array)+ strlen(right.array));
    r.size= sizeof(array)+ sizeof(right.array);
    strcpy(r.array,array);
    r.array[strlen(array)]= ' ';
    for (int i = strlen(array)+1; i <r.size  ; ++i) {
        r.array[i]=right.array[i- strlen(array)-1];


    }
    return r;
}
char CharArray:: first(){
    return array[0];
}
char CharArray:: last(){
    return array[strlen(array)-1];
}



