# Kryukovska_lab_2

https://docs.google.com/document/d/141OwXMPEeHLVSEqJ9cprFmtPO3N-nvYP/edit?usp=sharing&ouid=107066957088061867853&rtpof=true&sd=true



#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "Ukrainian");
	system("chcp 1251");

	int firstNum, secondNum;

	cout << "Введіть перше число: ";
	cin >> firstNum;

	cout << "Введіть друге число: ";
	cin >> secondNum;

	for ( int i = 1; i < 10000; i++)
	{
		if (i % firstNum == 0 && i % secondNum == 0) {
			cout << "НСК: ";
			cout << i;

			return 0;
		}
	}
}
