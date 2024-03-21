#include <cstring>
#include <utility>
#include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
class CharArray {
    int size;
    char *array;

public:
    //default constructor
    CharArray(){
    }

    // paramaterized constructor with char array
    CharArray(string f){
        size= f.size();

        array=new char(size);
        strcpy(array,f.c_str());

    }

// accessor of array
    char*getarray(){
        return array;
    }
//deconstructor

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
        r.array=new char(this->length()+ strlen(right.array));
        r.size= this->length()+ strlen(right.array);
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
    void reverse(){
        for (int i = size; i >=1 ; i--) {
            cout<<array[i-1];
        }
        cout<<endl;
    }
    int length(){
        return size;
    }
    char &operator[](int i){
        return array[i];
    }


};

int main() {
    vector<CharArray>strings;
    cout<<"1- Add a new String\n"
          "2- Copy a string to another\n"
          "3- Concatenate 2 strings\n"
          "4- Reverse a string\n"
          "5- Find Length of the string\n"
          "6- Get the largest string (with maximum size)\n"
          "7- Get a character in string by index\n"
          "8- Change a character in string by index\n"
          "9- Get first and last character in string\n"
          "10- Repeat the string for number of times n\n"
          "11- Add 1 to string characters\n"
          "12- Subtract 1 from string characters\n"
          "13- Exit "<<endl;
   int m;
   int n;
   cin>>m;
while(m!=13){
    if(m==1){
        string g;
        cout<<"add new string: ";
        cin>>g;
        strings.push_back(CharArray(g));
        cout<<"string added"<<endl;

    }
   else if(m==3){
       cout<<"enter string number "<<endl;
       cin>>n;
string p;
cout<<"What string to concatenate? "<<endl;
cin>>p;
CharArray e(p);
CharArray r;
r=strings[n-1]+p;
strings[n-1]=r;
cout<<" String concatenated to a new string: "<<r.getarray()<<endl;
    }
   else if (m==4){
       cout<<"enter string number";
       cin>>n;
       cout<<"string reversed: " ;
       strings[n-1].reverse();
   }
   else if (m==5){
       cout<<"enter string number ";cin>>n;
       cout<<strings[n-1].length()<<endl;
   }
   else if(m==7){
       int i;
       cout<<"enter string number ";
       cin>>n;
       cout<<"enter index";
       cin>>i;
       cout<<strings[n-1][i]<<endl;


   }
   else if (m==8){
       int i; char c;
        cout<<"enter string number ";
        cin>>n;
        cout<<"enter letter ";
        cin>>c;
        cout<<"enter index";
        cin>>i;
        strings[n-1][i]=c;
        cout<<strings[n-1].getarray()<<endl;
   }
   else if(m==9){
        cout<<"enter string number ";
        cin>>n;
        cout<<"first letter: "<<strings[n-1].first()<<endl;
        cout<<"last letter: "<<strings[n-1].last()<<endl;
   }
   else if(m==11){
        cout<<"enter string number ";
        cin>>n;
        cout<<++strings[n-1]<<endl;
   }
   else if(m==12){
        cout<<"enter string number ";
        cin>>n;
        cout<<strings[n-1]--<<endl;
   }

   cout<<"choice?  ";
    cin>>m;
}
cout<<"Thank you :)";
}

