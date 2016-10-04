//
// Created by devernua on 28.09.16.
//

#ifndef HOMEWORK_COMPLEXNUMBER_H
#define HOMEWORK_COMPLEXNUMBER_H

struct ComplexNumber {
    ComplexNumber(const double Re = 0, const double Im = 0, const double eps = 0.0000005);
    ComplexNumber(const ComplexNumber & number);

    double getRe() const;
    double getIm() const;

    double abs() const;
    double phase() const;

    ComplexNumber &operator+(const ComplexNumber &number);
    ComplexNumber &operator-(const ComplexNumber &number);
    ComplexNumber &operator*(const ComplexNumber &number);

    friend ostream &operator<<(ostream & stream, const ComplexNumber & number);
    friend istream &operator>>(istream & stream, ComplexNumber & number);

    friend bool operator==(const ComplexNumber n1, const ComplexNumber  n2);
    friend bool operator!=(const ComplexNumber n1, const ComplexNumber  n2);

    void swap(ComplexNumber & number);

private:
    double Re;
    double Im;
    double eps;
};

#endif //HOMEWORK_COMPLEXNUMBER_H
