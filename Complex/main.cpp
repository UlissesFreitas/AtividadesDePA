#include <iostream>
#include "Complex.h"
using namespace std;

int main(int argc, char** argv) {
	
	
	Complex c1, c2, s, p;
	
	cin >> c1;
	cin >> c2;
	
	
	s = c1+c2;
	p = c1*c2;
	
	cout <<"soma: " << s << endl;
	cout << "produto: "<< p;
	
	return 0;
}