//
// Created by Javier Mundaca on 8/27/19.
//

#include "MyVector.h"

MyVector::MyVector(): data {nullptr} , nelem{0} {

}

MyVector::MyVector(int n): nelem{n} {
    data = new int[nelem];

}

MyVector::~MyVector() {
    delete [] data;

}

int MyVector::size() {
    return nelem;
}

void MyVector::push_back(int numinsert) {
    // Variable dinamica
    int *temp;

    //Variable temporal adicionada la nu
    temp = new int [nelem+1];


    for (int i = 0; i < nelem; i++)
    {
        temp[i] = data [i];
    }
    delete [] data;
    data = temp;
    temp [nelem +1] = numinsert;
    nelem++;
}

void MyVector::insert(int, int) {

}

void MyVector::pop_back() {

}

int MyVector::operator[](int) {
    return 0;
}


