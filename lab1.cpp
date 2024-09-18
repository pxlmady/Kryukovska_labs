#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float number;
	cout << "Введіть число:";
	cin >> number;

	if (number > 0) {
		cout << "Число позитивне" << endl;
	}
	else if (number < 0) {
		cout << "Число негативне" << endl;
	}
	else {
		cout << "Число дорівнює нулю" << endl;
	}
}
