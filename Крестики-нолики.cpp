#include <iostream>

using namespace std;

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



	string colors[5] =
	{
		{"\x1b[92m зеленый \x1b[0m"},
		{"\x1b[93m красный \x1b[0m"},
		{"\x1b[93m синий \x1b[0m"},
		{"\x1b[0m белый \x1b[0m"}
	};
	
	int select_player, select_color;

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


		break;




	//Статистика
	case 2:


		break;




	//Настройки
	case 3:
		bool settings_is_work = true;
		while (settings_is_work){
			//Меню настроек
			cout << "[+]Настройки игрока" << endl
				<< "[1] " << players[0].nickname << endl
				<< "[2] " << players[1].nickname << endl
				<< "[3] Выйти" << endl;

			cout << "Введите команду: ";
			cin >> select_player;

			bool change_set_player = true;

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

				for (int i = 0; i < 5; i++) {
					cout << "[" << i + 1 << "] " << colors[i] << endl;
				}
				break;
				cout << "Введите новый цвет: ";
				cin >> select_color;
				players[select_player - 1].color = colors[select_color - 1];


			default:
				break;
			}


			break;
		}
		




	//Выйти
	case 4:


		break;

	default:
		break;
	}

	return 0;
}
