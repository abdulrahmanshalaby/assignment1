//
// Created by abamr on 3/11/2024.
//
class student{
public:
    int grade;
public:

    student(int grade=0){
        this->grade=grade;
    }
    int operator +(const student &right){
        student r;
        return r.grade=grade+right.grade;
    }
    student operator ++ (){
        grade++;
        return *this;
    }
};
#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H

#endif //UNTITLED_STUDENT_H
