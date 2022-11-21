#include <iostream>

using namespace std;

string wrap_in_color(string name, int color_code) {
	if (color_code == 1) {
		return "\x1b[91m" + name + "\x1b[0m";
	}
	else if (color_code == 2) {
		return "\x1b[92m" + name + "\x1b[0m";
	}
	else if (color_code == 3) {
		return "\x1b[93m" + name + "\x1b[0m";
	}
	else if (color_code == 4) {
		return "\x1b[94m" + name + "\x1b[0m";
	}
	else if (color_code == 5) {
		return "\x1b[95m" + name + "\x1b[0m";
	}
	else if (color_code == 6) {
		return "\x1b[96m" + name + "\x1b[0m";
	}
	else if (color_code == 7) {
		return "\x1b[97m" + name + "\x1b[0m";
	}
	else return "\x1b[0m";
}

bool is_game_over(char game[3][3], char fg) {
	if (game[0][0] == fg && game[0][1] == fg && game[0][2] == fg) {
		return true;
	}
	else if (game[1][0] == fg && game[1][1] == fg && game[1][2] == fg) {
		return true;
	}
	else if (game[2][0] == fg && game[2][1] == fg && game[2][2] == fg) {
		return true;
	}
	else if (game[0][0] == fg && game[1][0] == fg && game[2][0] == fg) {
		return true;
	}
	else if (game[0][1] == fg && game[2][1] == fg && game[2][1] == fg) {
		return true;
	}
	else if (game[0][2] == fg && game[1][2] == fg && game[2][2] == fg) {
		return true;
	}
	else if (game[0][0] == fg && game[1][1] == fg && game[2][2] == fg) {
		return true;
	}
	else if (game[0][2] == fg && game[1][1] == fg && game[2][0] == fg) {
		return true;
	}
	else return false;
}


int main() {
	setlocale(0, "");

	//Главное меню
	cout << "[+] Крестики-нолики" << endl << endl
		<< "[1] Начать игру" << endl
		<< "[2] Статистика" << endl
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

	char game[3][3] = 
	{
		{'-','-','-'},
		{'-','-','-'},
		{'-','-','-'}
	};
	cout << game[0][1];

	int counter = 1;
	int motion;
	int iter = 0;
	int select_player, select_color;
	bool settings_is_work = true;
	bool in_game = true;

	struct Player
	{
		string nickname;
		char figure;
		int color_code;
		bool is_player;
	};
	
	string colors[7] =
	{
		"Red",
		"Green",
		"Yellow",
		"Blue",
		"Magenta",
		"Cyan",
		"White"
	};
		// Коды цветов
		//Bright Red      1  
		//Bright Green    2  
		//Bright Yellow   3  
		//Bright Blue     4  
		//Bright Magenta  5  
		//Bright Cyan     6  
		//Bright White    7

	Player players[10] =
	{

		{ "Игрок 1", 'X', 1, true},
		{ "Игрок 2", 'O', 2, true},
		{ "Компьютер", 'O', 3, false}
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

		case 2:


			while (in_game)
			{
				// проверка пройгрыша
				for (int i = 0; i < 3; i++) {
					if (is_game_over(game, players[i].figure)) {
						cout << "Игрок " << players[i].nickname << " выйграл" << endl;
						in_game = false;
					}
				}

				if (in_game) {
					cout << "Добро пожаловать в игру!\t Информация о последнем ходе:\n";
					for (int i = 0; i < 3; i++) {
							cout << "\t" << "|";
							for (int j = 0; j < 3; j++) {
									if (game[i][j] != '-') {
										cout << " " << game[i][j] << " |";
									}
									else {
										cout << " " << (i*3)+j+1 << " |";
										
									}
							}
							cout << endl;
					}

					cout << "[+] Ход: " << players[iter].nickname << endl;
					cout << "Введите цифру: ";
					cin >> motion;
					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							if (arr[i][j] == motion) {
								if (game[i][j] == players[0].figure || game[i][j] == players[1].figure) {
									cout << "Поле занято" << endl;
									system("pause");
									break;
								}
								game[i][j] = players[iter].figure;

								//Меняем игрока 
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
				}
				

			break;


		case 1:
			while (in_game)
			{
				if (is_game_over(game, players[0].figure)) {
					cout << "Игрок " << players[0].nickname << " выйграл" << endl;
					in_game = false;
				}
				else if (is_game_over(game, players[1].figure)) {
					cout << "Игрок " << players[1].nickname << " выйграл" << endl;
					in_game = false;
				}
				if (!is_game_over(game, players[0].figure) && !is_game_over(game, players[1].figure)) {
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
					if (iter == 0) {
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								if (arr[i][j] == motion) {
									if (game[i][j] == players[0].figure || game[i][j] == players[1].figure) {
										cout << "Поле занято" << endl;
										system("pause");
										break;
									}
									game[i][j] = players[iter].figure;

									//Меняем игрока 
									if (iter == 0) {
										iter = 1;
									}
									else iter = 0;

									break;
								}

							}
						}
					}
					else if (iter == 1) {
						int i = rand() % 3;
						int j = rand() % 3;
						if (game[i][j] != players[0].figure || game[i][j] != players[1].figure) {
							
						}
					}
					

					system("cls");
				}
			}


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
			cout << "[+] Настройки игрока" << endl << endl;
			for (int i = 0; i < 3; i++) {
				cout << "[" << i + 1 << "]" << wrap_in_color(players[i].nickname, players[i].color_code) << endl;
			}
			cout << "[4] Выйти";

			cout << "Введите команду: ";
			cin >> select_player;

			/*bool change_set_player = true;*/
			if (select_player != 4) {
				cout << "[+] Настройки игрока" << "[" << select_player << "]" << endl << endl
					<< "[1] Ник     : " << wrap_in_color(players[select_player - 1].nickname, players[select_player - 1].color_code) << endl
					<< "[2] Фигура  : " << players[select_player - 1].figure << endl
					<< "[3] Цвет    : " << wrap_in_color(colors[players[select_player - 1].color_code - 1], players[select_player - 1].color_code) << endl
					<< "[4] Назад" << endl;

				cout << "Введите команду: ";
				cin >> answer;
				// обработка настроек

				switch (answer)
				{
				case 1:
					if (select_player != 3) {
						cout << "Введите новый ник: ";
						cin >> players[select_player - 1].nickname;
					}
					else cout << "Компьютер не прикосновенен";
					break;


				case 2:
					cout << "Введите новую фигуру: ";
					cin >> players[select_player - 1].figure;
					break;


				case 3:

					for (int i = 0; i < 7; i++) {
						cout << "[" << i + 1 << "] " << wrap_in_color(colors[i], i + 1) << endl;
					}
					cout << "Введите новый цвет: ";
					cin >> select_color;
					players[select_player - 1].color_code = select_color;
					break;

				default:
					break;
				}
			}
			else settings_is_work = false;
			

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
