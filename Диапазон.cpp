#include <iostream>




using namespace std;

int main() {
	setlocale(0, "");
	
	int n;

	cout << "[+]Введите число: ";
	cin >> n;

	if (n >= 0 and n <= 10) {
		cout << "[+]Цифра в диапазоне: 0 - 10";
	}
	else if (n >= 11 and n <= 20) {
		cout << "[+]Цифра в диапазоне: 11 - 20";
	}
	else if (n >= 21 and n <= 30) {
		cout << "[+]Цифра в диапазоне: 21 - 30";
	}
	else if (n >= 31 and n <= 40) {
		cout << "[+]Цифра в диапазоне: 31 - 40";
	}
	else if (n >= 41 and n <= 50) {
		cout << "[+]Цифра в диапазоне: 41 - 50";
	}
	else if (n >= 51 and n <= 60) {
		cout << "[+]Цифра в диапазоне: 51 - 60";
	}
	else if (n >= 61 and n <= 70) {
		cout << "[+]Цифра в диапазоне: 61 - 70";
	}
	else if (n >= 71 and n <= 80) {
		cout << "[+]Цифра в диапазоне: 71 - 80";
	}
	else if (n >= 81 and n <= 90) {
		cout << "[+]Цифра в диапазоне: 81 - 90";
	}
	else if (n >= 91 and n <= 100) {
		cout << "[+]Цифра в диапазоне: 91 - 100";
	}
	else if (n < 0) {
		cout << "[+]Ошибка! Число меньше 0";
	}
	else if (n > 100) {
		cout << "[+]Ошибка! Число больше 100";
	}


	return 0;
}
