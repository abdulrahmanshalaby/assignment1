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

