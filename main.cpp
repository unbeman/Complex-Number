#include <iostream>
using namespace std;

#include "ComplexNumber.h"
/*
struct ComplexNumber {

    ComplexNumber(double Re = 0, double Im = 0): Re(Re), Im(Im){}

    ComplexNumber(const ComplexNumber & number){
        Re = number.Re;
        Im = number.Im;
    }

    ComplexNumber &operator+(ComplexNumber number){
        Re += number.Re;
        Im += number.Im;
        return  *this;
    }

    friend ComplexNumber operator+(ComplexNumber number, double n){
        number.Re = number.Re + n;
        return number;
    }

    friend ComplexNumber operator-(const ComplexNumber n1, const ComplexNumber n2){
        ComplexNumber res;
        res.Re = n1.Re - n2.Re;
        res.Im = n1.Im - n2.Im;
        return res;
    }


    friend void print(ComplexNumber &number){
        if (number.Im == 0){
            cout << number.Re << endl;
        }
        else{
            cout << number.Re << ((number.Im)? '+' : '-') << number.Im << 'i' << endl;
        }
    }

    friend ostream &operator<<(ostream & stream, ComplexNumber & number){

        if (number.Im == 0){
            stream << number.Re << endl;
        }
        else{
            stream << number.Re << ((number.Im)? '+' : '-') << number.Im << 'i' << endl;
        }

        return stream;

    }

    friend istream &operator>>(istream & stream, ComplexNumber & number){
        stream >> number.Re >> number.Im;
        return stream;
    }

    void swap(ComplexNumber & number){
        std::swap(Re, number.Re);
        std::swap(Im, number.Im);
    }
 /*   ComplexNumber &operator=(ComplexNumber & number){
        if (this != &number){
            ComplexNumber(number).swap(*this);
        }
        return *this;
    }

    friend bool operator==(ComplexNumber n1, ComplexNumber  n2){
        return ((n1.Re == n2.Re) && (n1.Im == n2.Im))? true : false;
    }

//private:
    double Re;
    double Im;
};
 */

int main() {
    ComplexNumber n1(1.5, 1.0);
    ComplexNumber n2(2.5, 2.6);
    cin >> n1 >> n2;
    //print (n1 + n2);
    //print (n1 = n1 - n2);
    cout << n1 << n2;
    cout << (n1 == n2) << endl;
    n2 = n1;
    cout << n2;
    n1 = n1 +0.5;
    cout << n1 << n2;
    return 0;
}