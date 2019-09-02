//
// Created by Javier Mundaca on 8/27/19.
//

#ifndef UNTITLED2_MYVECTOR_H
#define UNTITLED2_MYVECTOR_H


class MyVector {
private:
    int* data;
    int nelem;
public:
    MyVector();
    MyVector(int n);
    virtual ~MyVector();
    int size();
    void push_back();
    void insert(int,int);
    void pop_back();
    int operator [] (int);







};


#endif //UNTITLED2_MYVECTOR_H
