/*
 * Complex.h
 *
 *  Created on: 03/01/2012
 *      Author: rcabido
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <string>

class DivisionByZeroException: public std::exception {
	virtual const char* what() const throw () {
		return "Division by zero";
	}
};

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

::std::ostream& operator<<(::std::ostream& os, const Complex& complex);

#endif /* COMPLEX_H_ */
