#include <iostream>

using namespace std;


//void c_pole(int arr[][]) {
//
//	cout << "| " << array[i] << " |  " << array[i] << COLOR_RED << " + " << COLOR_WHITE << array[i] << "  |     " << array[i] + array[i] << "     |  " << endl
//		<< "_______________________________" << endl
//		<< "| " << array[i] << " |  " << array[i] << COLOR_RED << " - " << COLOR_WHITE << array[i] << "  |     " << array[i] - array[i] << "     |  " << endl
//		<< "_______________________________" << endl
//		<< "| " << array[i] << " |  " << array[i] << COLOR_RED << " * " << COLOR_WHITE << array[i] << "  |     " << array[i] * array[i] << "     |  " << endl
//		<< "_______________________________" << endl
//		<< "| " << array[i] << " |  " << array[i] << COLOR_RED << " / " << COLOR_WHITE << array[i] << "  |     " << array[i] / array[i] << "     |  " << endl
//		<< "_______________________________" << endl;
//}



int main() {
	setlocale(0, "");

	//Главное меню
	cout << "[+] Крестики-нолики" << endl << endl
		<< "[1] Начать игру" << endl
		<< "[2] статистика" << endl
		<< "[3] Настройки" << endl
		<< "[4] Выйти" << endl;
	cout << "Введите команду: ";
	int answer;
	cin >> answer;


	//Переменные

	int arr[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	char game[3][3];

	string colors[5] =
	{
		{"\x1b[92m зеленый \x1b[0m"},
		{"\x1b[95m красный \x1b[0m"},
		{"\x1b[96m синий \x1b[0m"},
		{"\x1b[0m белый \x1b[0m"}
	};

	int motion;
	int iter = 0;
	int select_player, select_color;
	bool settings_is_work = true;

	struct Player
	{
		string nickname;
		char figure;
		string color;
	};

	Player players[2] =
	{
		{ "Игрок 1", 'X', colors[0]},
		{ "Игрок 2", 'O', colors[0]}
	};

	switch (answer)
	{

		//игра
	case 1:
		cout << "[+] Крестики-нолики" << endl
			<< "[1] Одиночная игра" << endl
			<< "[2] Два игрока" << endl;
		cin >> answer;

		switch (answer)
		{

		case 1:
			while (true)
			{
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (game[i][j] == players[0].figure || game[i][j] == players[1].figure) {
							cout << " " << game[i][j] << " |";
						}
						else cout << " " << arr[i][j] << " |";
							
					}
					cout << endl << "------------" << endl;

				}
				cout << "[+] Ход: " << players[iter].nickname << endl;
				cout << "Введите цифру: ";
				cin >> motion;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						if (arr[i][j] == motion) {
							if (game[i][j] == players[0].figure || game[i][j] == players[1].figure) {
								cout << "Поле занято";
								system("pause");
								break;
							}
							game[i][j] = players[iter].figure;
							if (iter == 0) {
								iter = 1;
							}
							else iter = 0;
							break;
						}
							
					}
				}
				
				system("cls");
			}

			break;


		case 2:
			break;


		default:
			break;
		}
		


		break;




		//Статистика
	case 2:


		break;




		//Настройки
	case 3:
		
		while (settings_is_work) {
			//Меню настроек
			cout << "[+]Настройки игрока" << endl
				<< "[1] " << players[0].nickname << endl
				<< "[2] " << players[1].nickname << endl
				<< "[3] Выйти" << endl;

			cout << "Введите команду: ";
			cin >> select_player;

			/*bool change_set_player = true;*/

			cout << "[+] Настройки игрока" << "[" << select_player << "]" << endl << endl
				<< "[1] Ник     : " << players[select_player - 1].nickname << endl
				<< "[2] Фигура  : " << players[select_player - 1].figure << endl
				<< "[3] Цвет    : " << players[select_player - 1].color << endl
				<< "[4] Назад" << endl;

			cout << "Введите команду: ";
			cin >> answer;
			// обработка настроек

			switch (answer)
			{
			case 1:
				cout << "Введите новый ник: ";
				cin >> players[select_player - 1].nickname;
				break;


			case 2:
				cout << "Введите новую фигуру: ";
				cin >> players[select_player - 1].figure;
				break;


			case 3:

				for (int i = 0; i < 4; i++) {
					cout << "[" << i + 1 << "] " << colors[i] << endl;
				}
				cout << "Введите новый цвет: ";
				cin >> select_color;
				players[select_player - 1].color = colors[select_color - 1];
				break;

			default:
				break;
			}

		}
			break;
		





		//Выйти
	case 4:


		break;

	default:
		break;
	}

	return 0;
}
