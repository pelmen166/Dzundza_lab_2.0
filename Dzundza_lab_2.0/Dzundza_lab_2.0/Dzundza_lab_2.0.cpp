// Lab_02.cpp
// < Дзундза Дмитро >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 0.6
#include <iostream>
using namespace std;
int main()
{
	double alpha;
	double z1;
	//double z2;

	cout << "alpha = "; cin >> alpha;
	z1 = cos(alpha)+cos(2.0*alpha)+cos(6*alpha)+cos(7.0*alpha);
	//z2 = 4*cos(alpha/2.0)*cos(5.0/2.0*alpha)*cos(4.0*alpha);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
