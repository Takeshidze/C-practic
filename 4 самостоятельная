#include <iostream>




using namespace std;

int main() {
	setlocale(0, "");
	
	int n, answer;
	
	cout << "[+]Введите число: ";
	cin >> n;

	for (int i = 1; i < 10; i++) {
		cout << "[+]Решите пример " << n << " x " << i << endl
			<< "[+]Введите ответ: ";
		cin >> answer;
		if (answer == n*i) {
			if (i == 9) {
				cout << "[+]Примеры решены, поздравляем!" << endl;
			}
			else {
				cout << "[+]Пример решен правильно!" << endl;
			}
		}
		else {
			cout << "[-]Ошибка, пример решен неверно!";
			break;
		}
		
	}


	return 0;
}
