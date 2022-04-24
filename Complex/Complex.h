#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>

using namespace std;
class Complex
{
private:
	double real, imag;
public:
	// construtor default e especifico
	inline Complex(double R=0.0, double I=0.0): real(R), imag(I){}
	
	// construtor por copia
	inline Complex(const Complex& C):real(C.real), imag(C.imag) {}
	
	// metodos de consulta
	inline double getReal() const{return this->real;}
	inline double getImag() const{return this->imag;}
	
	// metodos de entrada e saida
	friend istream& operator>>(istream &I, Complex &C);
	friend ostream& operator<<(ostream &O, const Complex &C);

	// operacoes especificas da classe
	Complex operator+(Complex C2) const;
	Complex operator*(Complex C2) const;
};
#endif