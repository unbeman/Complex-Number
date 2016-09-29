//
// Created by devernua on 28.09.16.
//

#include "Complexnumber.h"

ComplexNumber::ComplexNumber(double Re, double Im){
    this->Re = Re;
    this->Im = Im;
}

ComplexNumber::ComplexNumber(const ComplexNumber & number){
    Re = number.Re;
    Im = number.Im;
}

ComplexNumber & ComplexNumber::operator+(const ComplexNumber & number){
    Re += number.Re;
    Im += number.Im;
    return  *this;
}

ComplexNumber operator+(ComplexNumber number, double n){
    number.Re = number.Re + n;
    return number;
}

ComplexNumber operator-(const ComplexNumber n1, const ComplexNumber n2){
    ComplexNumber res;
    res.Re = n1.Re - n2.Re;
    res.Im = n1.Im - n2.Im;
    return res;
}

ComplexNumber operator-(ComplexNumber number, double n){
    number.Re = number.Re - n;
    return number;
}

void ComplexNumber::print(ComplexNumber & number){
    if (number.Im == 0){
        cout << number.Re << endl;
    }
    else{
        cout << number.Re << ((number.Im)? '+' : '-') << number.Im << 'i' << endl;
    }
}

ostream &operator<<(ostream & stream, ComplexNumber & number){

    if (number.Im == 0){
        stream << number.Re << endl;
    }
    else{
        stream << number.Re << ((number.Im)? '+' : '-') << number.Im << 'i' << endl;
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
/* )   ComplexNumber &operator=(ComplexNumber & number){
    if (this != &number){
        ComplexNumber(number).swap(*this);
    }
    return *this;
}
*/
bool operator==(ComplexNumber n1, ComplexNumber  n2){
    return ((n1.Re == n2.Re) && (n1.Im == n2.Im))? true : false;
}

