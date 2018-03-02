/*
 * Complex.cpp
 *
 *  Created on: 03/01/2012
 *      Author: rcabido
 */

#include "Complex.h"
#include <sstream>
#include <cmath>


Complex::Complex() {
	this->realPart = 0.0;
	this->imaginaryPart = 0.0;
}


Complex::Complex(double realPart, double imaginaryPart) {
	this->realPart = realPart;
	this->imaginaryPart = imaginaryPart;
}

Complex::~Complex() {

}

double Complex::getRealPart() const {
	return this->realPart;
}

double Complex::getImaginaryPart() const {
	return this->imaginaryPart;
}

// return abs/modulus/magnitude
double Complex::abs() const {
	return sqrt(pow(this->realPart, 2.0) + pow(this->imaginaryPart, 2.0));
}

// return angle/phase/argument
double Complex::phase() const {
	return atan2(this->imaginaryPart, this->realPart);
}

// return a new Complex object whose value is the conjugate of this
Complex Complex::conjugate() const {
	return Complex(this->realPart, -this->imaginaryPart);
}

// return a new Complex object whose value is the reciprocal of this
Complex Complex::reciprocal() const {
	double scale = pow(this->realPart, 2.0) + pow(this->imaginaryPart, 2.0);
	return Complex(this->realPart / scale, this->imaginaryPart / scale);
}

// return a new Complex object whose value is (this + complex)
Complex Complex::add(const Complex& complex) const {
	double newRealPart = this->realPart + complex.realPart;
	double newImaginaryPart = this->imaginaryPart + complex.imaginaryPart;

	return Complex(newRealPart, newImaginaryPart);
}

// return a new Complex object whose value is (this - complex)
Complex Complex::minus(const Complex& complex) const {
	double newRealPart = this->realPart - complex.realPart;
	double newImaginaryPart = this->imaginaryPart - complex.imaginaryPart;

	return Complex(newRealPart, newImaginaryPart);
}

// return a new Complex object whose value is (this * complex)
Complex Complex::times(const Complex& complex) const {
	double newRealPart = (this->realPart * complex.realPart)
			- (this->imaginaryPart * complex.imaginaryPart);
	double newImaginaryPart = (this->realPart * complex.imaginaryPart)
			- (this->imaginaryPart * complex.realPart);

	return Complex(newRealPart, newImaginaryPart);
}

// return a new Complex object whose value is (this * alpha)
Complex Complex::times(const double& alpha) const {
	return Complex(alpha * this->realPart, alpha * this->imaginaryPart);
}

// return a new Complex object whose value is (this / complex)
Complex Complex::divides(const Complex& complex) const {
	return this->times(complex.reciprocal());

}

bool Complex::equals(const Complex& complex) const {
	return (this->realPart == complex.realPart) && (this->imaginaryPart
			== complex.imaginaryPart);
}

bool Complex::operator==(const Complex& complex) const {
	return (this->realPart == complex.realPart) && (this->imaginaryPart
			== complex.imaginaryPart);
}

std::string Complex::toString() const {
	std::stringstream s;
	s <<this->realPart << " + " << this->imaginaryPart << "i ";
	return s.str();
}
