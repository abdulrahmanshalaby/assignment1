#include <cstring>
#include <utility>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class CharArray {
    int size;
    char *array;
public:
    //default constructor
    CharArray(){
    }

    // paramaterized constructor with char array
    CharArray(char *f){
        size= strlen(f);
        array=new char(size);
        strcpy(array,f);
    }

// accessor of array
    char*getarray(){
        return array;
    }
//deconstructor
    ~CharArray(){
        delete[]array;
    }
    // prefix increment
    char* operator++(){
        for (int i = 0; i < size; ++i) {
            array[i]++;

        }
        return array;
    }
    //postfix decrement
    char* operator--(int){
        for (int i = 0; i < size; ++i) {
            array[i]--;


        }
        return array;
    }
    // joins 2 char arrays together
    CharArray operator+(const CharArray &right){
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

    char first(){
        return array[0];
    }

    char last() {
        return array[strlen(array) - 1];
    }
    char *reverse(){
        for (int i = size; i >=1 ; i--) {
            cout<<array[i-1];
        }
    }
    int length(){
        return size;
    }
};

int main() {
    CharArray e("newstr");
    CharArray s("Object Oriented Programming");
}
