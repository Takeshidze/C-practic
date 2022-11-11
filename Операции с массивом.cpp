#include <iostream>
using namespace std;


int main() {
	setlocale(0, "");
	
	int arr[7] = {123,23,4,6,86,32,1};
	for (int i = 0; i < size(arr); i++) {
		cout << "[+]Инициализация | ячейка " << i << " : ";
		cin >> arr[i];
	}
	bool check = true;
	while (check)
	{
		cout << endl;
		system("pause");
		system("cls");

		//Вывод меню
		cout << "[+]Настройка массива: " << endl << endl
			<< "[1]Сортировка по возрастанию" << endl
			<< "[2]Сортировка по убыванию" << endl
			<< "[3]Перемножить массив" << endl
			<< "[4]Сложить массив" << endl
			<< "[5]Разделить массив" << endl
			<< "[6]Обнулить массив" << endl << endl
			<< "[7-8]Выйти" << endl
			<< "[9]Задать новые значения массиву" << endl;
		

		int key;
		int counter1 = 1;
		int counter2 = 0;
		int separator;
		cout << "[+]Ввод: ";
		cin >> key;
		switch (key)
		{
		case 1:
			for (int i = 0; i < size(arr) - 1; i++) {
				for (int j = 0; j < size(arr) - i - 1; j++) {
					if (arr[j] > arr[j + 1]) {
						int temp = arr[j + 1];
						arr[j + 1] = arr[j];
						arr[j] = temp;
					}
				}
			}
			for (int i = 0; i < size(arr); i++) {
				cout << arr[i] << " ";
			}
			break;
		case 2:
			for (int i = 0; i < size(arr) - 1; i++) {
				for (int j = 0; j < size(arr) - i - 1; j++) {
					if (arr[j] < arr[j + 1]) {
						int temp = arr[j + 1];
						arr[j + 1] = arr[j];
						arr[j] = temp;
					}
				}
			}
			for (int i = 0; i < size(arr); i++) {
				cout << arr[i] << " ";
			}
			break;
		case 3:
			for (int i = 0; i < size(arr); i++) {
				counter1 *= arr[i];
			}
			cout << counter1;
			break;
		case 4:
			for (int i = 0; i < size(arr); i++) {
				counter2 += arr[i];
			}
			cout << counter2;
			break;
		case 5:
			cout << "Задайте делитель: ";
			cin >> separator;
			cout << endl;
			for (int i = 0; i < size(arr); i++) {
				arr[i] /= separator;
				cout << arr[i] << " ";
			}


			break;
		case 6:
			for (int i = 0; i < size(arr); i++) {
				arr[i] = 0;
				cout << arr[i] << " ";
			}
			break;

		case 9:
			system("cls");
			for (int i = 0; i < size(arr); i++) {
				cout << "[+]Инициализация | ячейка " << i << " :";
				cin >> arr[i];
			}

			break;

		default:
			check = false;
			break;
		}
	}
	

}
