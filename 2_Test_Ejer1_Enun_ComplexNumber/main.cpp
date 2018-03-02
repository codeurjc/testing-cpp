#include "iostream"
#include "Complex.h"
#include "cstdio"

int main(){

	setvbuf(stdout, NULL, _IONBF, 0);

	Complex complex1;
	Complex complex2(3.0,2.0);
	std::cout<<"El modulo del complejo ";
	std::cout<<complex2.toString();
	std::cout<<" es "<<complex2.abs()<<std::endl;
	std::cout.precision(4);
	Complex complex3 = complex1.add(complex2);

	if(complex2.equals(complex3)){
		std::cout<<"Los dos complejos son iguales";
	}
	else{
		std::cout<<"Los dos complejos son distintos";
	}

	return 0;
}
