//
// Created by devernua on 28.09.16.
//

#ifndef HOMEWORK_COMPLEXNUMBER_H
#define HOMEWORK_COMPLEXNUMBER_H

#endif //HOMEWORK_COMPLEXNUMBER_H

#include <iostream>
using namespace std;

struct ComplexNumber {
    ComplexNumber(double Re = 0, double Im = 0);
    ComplexNumber(const ComplexNumber & number);

    double getRe(const ComplexNumber number);
    double getIm(const ComplexNumber number);


    ComplexNumber &operator+(const ComplexNumber &number);
    ComplexNumber &operator-(const ComplexNumber &number);
    ComplexNumber &operator*(const ComplexNumber &number);


    void print(ComplexNumber & number);
    friend ostream &operator<<(ostream & stream, ComplexNumber & number);
    friend istream &operator>>(istream & stream, ComplexNumber & number);

    friend bool operator==(ComplexNumber n1, ComplexNumber  n2);
    friend bool operator!=(ComplexNumber n1, ComplexNumber  n2);

    void swap(ComplexNumber & number);


private:
    double Re;
    double Im;
};