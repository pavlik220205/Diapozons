#include "pch.h"
#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;
int main()
{
	int a = 0, b = 0, c = 0;
	float vid = 0;
	cout << "Enter natural a ="; cin >> a;
	while (a < 1) {
		cout << "Enter only natural number\n";
		cout << "Enter natural a ="; cin >> a;
	};
	cout << "Enter natural b ="; cin >> b;
	while (b < 1) {
		cout << "Enter only natural number\n";
		cout << "Enter natural b ="; cin >> b;
	};
	while (b < a) {
		cout << "B < A\n";
		cout << "Enter natural b ="; cin >> b;
	}
	for (int i = a; i <= b; i++)
	{
		if (!(i % 3) || !(i % 5)) {

			vid += i;
			c++;
			if (!(c % 8)) {
				cout << i << "\n";
			}
			else {
				cout << i << "\t";
			}
		}

	}
	cout << "\n";
	vid = vid / c;
	cout << "Average = " << vid << "\n" ;
	system("pause");
	return 0;
}