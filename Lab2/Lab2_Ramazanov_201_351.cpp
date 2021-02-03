#include <iostream>
#include <conio.h> 
using namespace std;

void task1() {
	int n;
	cout << "Enter the number: ";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << j;
		}
		cout << endl;
	}
}

// Функция для расчета факториала
double fact(int c) {
	double res = 1;
	for (int i = 1; i <= c; i++) {
		res *= i;
	}
	return res;
}

void task2() {
	double n, k = 0, fctrl, coef;
	cout << "Enter the number: ";
	cin >> n;
	fctrl = fact(n);
	while (k <= n) {
		coef = fctrl / (fact(n - k) * fact(k));
		cout << coef << " ";
		k++;
	}
	cout << " " << endl;
}

void task3() {
	int a = 0, sum = 0, n = 0;
	cout << "Enter the coordinates (for complete enter 0):" << endl;
	while (true) {
		cin >> a;
		if (a == 0) break;
		sum += a;
		n++;
	}
	cout << "Avarage is " << double(sum) / n << endl;
}

int main() {
	int choice = 0;
	while (true) {
		cout << "What do you want to accomplish?" << endl;
		cout << "Task 1" << endl;
		cout << "Task 2" << endl;
		cout << "Task 3" << endl;
		cout << "Exit" << endl;
		cin >> choice;
		switch (choice) {
			case 1: {
				task1();
				break;
			}
			case 2: {
				task2();
				//break;
			}
			case 3: {
				task3();
				break;
			}
			default: {
				cout << "Thanks for using!" << endl;
				return 0;
			}
		}
	}
}