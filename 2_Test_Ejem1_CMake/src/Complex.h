//
// Created by Miguel Angel Julian Aguilar on 8/3/18.
//

#ifndef EJERCICIO1_COMPLEX_H
#define EJERCICIO1_COMPLEX_H


#include <string>

class Complex {
public:

    Complex();
    Complex(double realPart, double imaginaryPart);
    virtual ~Complex();

    double getRealPart()const;

    double getImaginaryPart()const;

    // return abs/modulus/magnitude
    double abs ()const;

    // return angle/phase/argument
    double phase()const;

    // return a new Complex object whose value is the conjugate of this
    Complex conjugate ()const;

    // return a new Complex object whose value is the reciprocal of this
    Complex reciprocal ()const;

    // return a new Complex object whose value is (this + complex)
    Complex add(const Complex& complex)const;

    // return a new Complex object whose value is (this - complex)
    Complex minus(const Complex& complex)const;

    // return a new Complex object whose value is (this * complex)
    Complex times(const Complex& complex)const;

    // return a new Complex object whose value is (this * alpha)
    Complex times(const double& alpha)const;

    // return a new Complex object whose value is (this / complex)
    Complex divides(const Complex& complex)const;

    bool equals (const Complex& complex)const;

    bool operator== (const Complex& complex)const;

    std::string toString()const;

private:
    double realPart;
    double imaginaryPart;

};


#endif //EJERCICIO1_COMPLEX_H
