#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	double Tc, Tf;
	cout << "Type Tf";
	cin >> Tf;
	Tc = (Tf - 32) * 5 / 9;
	cout << "Tc:" << Tc ;
	return 0;


}
