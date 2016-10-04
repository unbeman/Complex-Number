//
// Created by devernua on 28.09.16.
//
#include <iostream>

using namespace std;

#include <cmath>
#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(const double Re, const double Im, const double eps){
    this->Re = Re;
    this->Im = Im;
    this->eps = eps;
}

ComplexNumber::ComplexNumber(const ComplexNumber & number){
    Re = number.Re;
    Im = number.Im;
    eps = number.eps;
}

double ComplexNumber::getRe() const { return Re;}
double ComplexNumber::getIm() const { return Im;}

double ComplexNumber::abs() const { return sqrt(Re * Re + Im * Im);}
double ComplexNumber::phase() const {
    if (std::abs(Re) < eps){
        return 0;
    }
    return atan(Im / Re); //только для 1 и 4 четвертей
}


ComplexNumber & ComplexNumber::operator+(const ComplexNumber & number){
    Re += number.Re;
    Im += number.Im;
    return  *this;
}

ComplexNumber & ComplexNumber::operator-(const ComplexNumber & number){
    Re -= number.Re;
    Im -= number.Im;
    return  *this;
}

ComplexNumber & ComplexNumber::operator*(const ComplexNumber & number){
    Re = Re * number.Re - Im * number.Im;
    Im = Re * number.Im + number.Re * Im;
    return  *this;
}

ostream &operator<<(ostream & stream, const ComplexNumber & number){

    if (number.Im == 0){
        stream << number.Re;
    }
    else if( number.Im == 1 || number.Im == -1){
        stream << number.Re << ((number.Im >= 0)? "+" : "-")  << "i";
    }
    else{
        stream << number.Re << ((number.Im >= 0)? "+" : "") << number.Im << "i";
    }

    return stream;

}

istream &operator>>(istream & stream, ComplexNumber & number){
    stream >> number.Re >> number.Im;
    return stream;
}

void  ComplexNumber::swap(ComplexNumber & number){
    std::swap(Re, number.Re);
    std::swap(Im, number.Im);
}

bool operator==(const ComplexNumber n1, const ComplexNumber  n2){
    double eps = min(n1.eps, n2.eps);
    return (std::abs(n1.Re - n2.Re) < eps) && ( std::abs(n1.Im - n2.Im) < eps);
}

bool operator!=(const ComplexNumber n1, const ComplexNumber  n2){
    return !(n1 == n2);
}

