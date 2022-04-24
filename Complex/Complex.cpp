#include "Complex.h"

istream& operator>>(istream &I, Complex &C){
	cout << "Real: ";
	I >> C.real;
	cout << "Imag: ";
	I >> C.imag;
	return I;
}

ostream& operator<<(ostream &O, const Complex &C){
	O << C.real << (C.imag<0.0 ? '-' : '+')<<'j' << fabs(C.imag); 
	return O;
}

Complex Complex::operator+(Complex C2) const{
	Complex prov;
	prov.real = this->real + C2.real;
	prov.imag = this->imag + C2.imag;
	return prov;
}

Complex Complex::operator*(Complex C2) const{
	Complex prov;
	prov.real = this->real*C2.real - this->imag*C2.imag;
	prov.imag = this->real*C2.imag + this->imag*C2.real;
	return prov;
}



#include "Complex.h"