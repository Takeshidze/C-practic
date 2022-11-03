#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	setlocale(0, "");
	int check = 1;
	while (check != 0)
	{
		cout << "[+]Цикл While" << endl;
		cout << "[+]Введите число: ";
		cin >> check;
		if (check < 0 || check > 100) {
			cout << "Ну, не судьба" << endl;
		}
		else {
			for (int i = 0; i < check; i++) {
				cout << "[+]Цикл отработал. Круг: " << i + 1 << endl;
				Sleep(100);
			}
		}
		
		system("pause");
		system("cls");
		
	}

	return 0;
}
