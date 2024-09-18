#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	float number;
	cout << "¬вед≥ть число:";
	cin >> number;

	if (number > 0) {
		cout << "„исло позитивне" << endl;
	}
	else if (number < 0) {
		cout << "„исло негативне" << endl;
	}
	else {
		cout << "„исло дор≥внюЇ нулю" << endl;
	}
}