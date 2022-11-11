#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int array[5] = {};
	const string COLOR_WHITE = "\x1b[0m";
	const string COLOR_RED = "\x1b[91m";
	cout << "Введите 5 значений" << endl;
	for (int i = 0; i < size(array); i++)
	{
		cout << "Введите " << i + 1 << " число: ";
		cin >> array[i];
		cout << endl;
	}





	for (int i = 0; i < size(array); i++)
	{

		cout << "Таблица " << COLOR_RED << i + 1 << COLOR_WHITE << endl
			<< "_______________________________" << endl
			<< "| Число | Решение | Результат |" << endl
			<< "_______________________________" << endl;
		cout << "|   " << array[i] << "   |  " << array[i] << COLOR_RED << " + " << COLOR_WHITE << array[i] << "  |     " << array[i] + array[i] << "     |  " << endl
			<< "_______________________________" << endl
			<< "|   " << array[i] << "   |  " << array[i] << COLOR_RED << " - " << COLOR_WHITE << array[i] << "  |     " << array[i] - array[i] << "     |  " << endl
			<< "_______________________________" << endl
			<< "|   " << array[i] << "   |  " << array[i] << COLOR_RED << " * " << COLOR_WHITE << array[i] << "  |     " << array[i] * array[i] << "     |  " << endl
			<< "_______________________________" << endl
			<< "|   " << array[i] << "   |  " << array[i] << COLOR_RED << " / " << COLOR_WHITE << array[i] << "  |     " << array[i] / array[i] << "     |  " << endl
			<< "_______________________________" << endl;
	}


}
