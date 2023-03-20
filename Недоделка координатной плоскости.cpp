#include <iostream>
using namespace std;

int main()
{
	int x, y, x1, y1 = 0;

	setlocale(0, "");

	// Ввод X и Y 
	cout << "Введите X - ";
	cin >> x;
	cout << "Введите Y - ";
	cin >> y;

	//модуль чистки
	system("pause");
	system("cls");

	// Создание двумерного динамического массива 
	string** arr = new string * [y * 2 + 1];
	for (int i = 0; i < y * 2 + 1; i++)
	{
		arr[i] = new string[x * 2 + 1];
	}

	// Записись в массив координатной плоскости
	for (int i = 0; i < y * 2 + 1; i++) {
		for (int j = 0; j < x * 2 + 1; j++) {
			if (i == y) {
				arr[i][j] = "# ";
			}
			else if (j == x * 2) {
				arr[i][j] = "#";
			}
			else arr[i][j] = " ";
		}
	}
	// Вывод массива
	for (int i = 0; i < y * 2 + 1; i++) {
		for (int j = 0; j < x * 2 + 1; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}

	while (true) {
		cout << "\n\nВведите координаты точки \n";
		cout << "Введите X точки -  ";
		cin >> x1;
		cout << "Введите Y точки -  ";
		cin >> y1;

		//Проверка 
		if (x1 > x or y1 > y) {
			cout << "\nВы ввели неправильную кординату точки";
			continue;
		}
		else {
			break;
		}
	}


	//модуль чистки
	system("pause");
	system("cls");

	cout << "Точка (" << x1 << "," << y1 << ")\n\n";

	//Записываем точку в массив 
	if (x1 >= 0 and y1 >= 0) {
		arr[y - y1][x1 + x] = "0 ";
		// Полоса к оси x
		for (int i = 1; i < y1; i++) {
			arr[y - y1 + i][x1 + x] = "' ";
		}
		// Полоса к оси y
		for (int i = 1; i < x1; i++) {
			arr[y - y1][x1 + x - i] = "- ";
		}
	}
	else if (x1 <= 0 and y1 > 0) {
		x1 = abs(x1);
		arr[y - y1][x - x1] = "0 ";
		// Полоса к оси x
		for (int i = 1; i < y1; i++) {
			arr[y - y1 + i][x - x1] = "' ";
		}
		// Полоса к оси y
		for (int i = 1; i < x1; i++) {
			arr[y - y1][x - x1 + i] = "- ";
		}
	}
	else if (x1 < 0 and y1 <= 0) {
		x1 = abs(x1);
		y1 = abs(y1);
		arr[y + y1][x - x1] = "0 ";
		// Полоса к оси x
		for (int i = 1; i < y1; i++) {
			arr[y + y1 - i][x - x1] = "' ";
		}
		// Полоса к оси y
		for (int i = 1; i < x1; i++) {
			arr[y + y1][x - x1 + i] = "- ";
		}
	}
	else if (x1 > 0 and y1 < 0) {
		y1 = abs(y1);
		arr[y + y1][x1 + x] = "0 ";
		// Полоса к оси x
		for (int i = 1; i < y1; i++) {
			arr[y + y1 - i][x + x1] = "' ";
		}
		// Полоса к оси y
		for (int i = 1; i < x1; i++) {
			arr[y + y1][x + x1 - i] = "- ";
		}
	}

	// Вывод массива
	for (int i = 0; i < y * 2 + 1; i++) {
		for (int j = 0; j < x * 2 + 1; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
	system("pause");
}
