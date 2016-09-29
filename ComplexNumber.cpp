//
// Created by devernua on 28.09.16.
//

#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double Re, double Im){
    this->Re = Re;
    this->Im = Im;
}

ComplexNumber::ComplexNumber(const ComplexNumber & number){
    Re = number.Re;
    Im = number.Im;
}

double ComplexNumber::getRe(ComplexNumber number){ return number.Re;}
double ComplexNumber::getIm(ComplexNumber number){ return number.Im;}


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
    Re = Re*number.Re - Im*number.Im;
    Im = Re*number.Im + number.Re*Im;
    return  *this;
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
    return (n1.Re == n2.Re) && (n1.Im == n2.Im);
}

bool operator!=(ComplexNumber n1, ComplexNumber  n2){
    return !(n1 == n2);
}

