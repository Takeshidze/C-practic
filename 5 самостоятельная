#include <iostream>




using namespace std;

int main() {
	setlocale(0, "");
	
	cout << "[-]Программа Калькулятор может: " << endl << endl <<
		"[+]Скаладывать" << endl <<
		"[-]Вычитать" << endl <<
		"[*]Умножать" << endl <<
		"[/]Делить" << endl <<
		"[%]Деление от остатка" << endl;

	string operation;
	cin >> operation;
	
	double a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: " ;
	cin >> b;
	cout << endl;
	
	if (a == -0) {
		a = 0;
	}
	if (b == -0) {
		b = 0;
	}

	if (operation == "+") {
		cout << "[+] Результат: " << a << " + " << b << " = " << a + b;
	}
	else if (operation == "-") {
		cout << "[-] Результат: " << a << " - " << b << " = " << a - b;
	}
	else if (operation == "*") {
		cout << "[*] Результат: " << a << " * " << b << " = " << a * b;
	}
	else if (operation == "/") {
		if (b == 0) {
			cout << "На ноль делить нельзя";
		}
		else cout << "[/] Результат: " << a << " / " << b << " = " << a / b;
	}
	else if (operation == "%") {
		if (b == 0) {
			cout << "На ноль делить c отстатком нельзя";
		}
		cout << "[%] Результат: " << a << " % " << b << " = " << int(a) % int(b);
	}
	

	return 0;
}
