#include <iostream>

using namespace std;

struct complex{
	   float real;
	   float imag;	
};

complex soma(const complex c1, const complex c2);
complex produto(const complex c1, const complex c2);

int main()
{

	complex c1, c2, s;
	c1.real = 5.0;
	c1.imag = 1.0;
	
	c2.real = 2.0;
	c2.imag = -1.0;
    
    s = produto(c1, c2);
	
	cout << "Real: "<< c1.real << " Imag: " << c1.imag;
	cout << endl;
	cout << "Real: "<< c2.real << " Imag: " << c2.imag;
	cout << endl;
	cout << "Real: " << s.real << " Imag: " << s.imag;

    return 0;       
}

complex soma(const complex c1, const complex c2){
	complex c3;
	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;
	
	return c3;
}

complex produto(const complex c1, const complex c2){
	complex c3;
	c3.real = c1.real*c2.real - c1.imag*c2.imag;
	c3.imag = c1.real*c2.imag + c1.imag*c2.real;
	return c3;
}