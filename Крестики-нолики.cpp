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

struct Player
{
	string nickname;
	string figure;
	int color_code;
	bool is_player;
	int win = 0;
	int lose = 0;
	int draw = 0;
	float score = 0.0;
};


string is_game_over(string game[3][3], struct Player pl) {



	if (
		(game[0][0] == pl.figure && game[0][1] == pl.figure && game[0][2] == pl.figure) ||
		(game[1][0] == pl.figure && game[1][1] == pl.figure && game[1][2] == pl.figure) ||
		(game[2][0] == pl.figure && game[2][1] == pl.figure && game[2][2] == pl.figure) ||
		(game[0][0] == pl.figure && game[1][0] == pl.figure && game[2][0] == pl.figure) ||
		(game[0][1] == pl.figure && game[1][1] == pl.figure && game[2][1] == pl.figure) ||
		(game[0][2] == pl.figure && game[1][2] == pl.figure && game[2][2] == pl.figure) ||
		(game[0][0] == pl.figure && game[1][1] == pl.figure && game[2][2] == pl.figure) ||
		(game[0][2] == pl.figure && game[1][1] == pl.figure && game[2][0] == pl.figure)
		) {
		return "true";
	}
	else {
		int ch = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (game[i][j] != "-") {
					ch++;
				}
			}
		}

		if (ch == 9) {
			return "draw";
		}
		else
			return "false";
	}
}



int main() {
	setlocale(0, "");




	//Переменные

	int arr[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	string game[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			game[i][j] = '-';
		}
	}

	int counter = 1;
	int motion;
	int iter = 0;
	int select_player, select_color;
	bool settings_is_work = true;
	bool in_game = true;



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

		{ "Игрок 1", "X", 1, true},
		{ "Игрок 2", "O", 2, true},
		{ "Компьютер", "+", 3, false}
	};


	//Главное меню

	bool work = true;
	int answer;
	while (work)
	{
		system("cls");
		cout << "[+] Крестики-нолики" << endl << endl
			<< "[1] Начать игру" << endl
			<< "[2] Статистика" << endl
			<< "[3] Настройки" << endl
			<< "[4] Выйти" << endl;
		cout << "Введите команду: ";
		
		cin >> answer;

		switch (answer)
		{

			//игра
		case 1:
				system("cls");
				cout << "[+] Крестики-нолики" << endl
				<< "[1] Одиночная игра" << endl
				<< "[2] Два игрока" << endl;
			cin >> answer;

			switch (answer)
			{

			case 2:
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						game[i][j] = "-";
					}
				}
				in_game = true;
				while (in_game)
				{	
					system("cls");
					// проверка пройгрыша
					cout << "Добро пожаловать в игру!\t Информация о последнем ходе:\n";
					for (int i = 0; i < 3; i++) {
						cout << "\t" << "|";
						for (int j = 0; j < 3; j++) {
							if (game[i][j] != "-") {
								cout << " " << game[i][j] << " |";
							}
							else {
								cout << " " << (i * 3) + j + 1 << " |";

							}
						}
						cout << endl;
					}

					if (is_game_over(game, players[0]) == "true") {
						cout << "Игрок " << players[0].nickname << " выйграл" << endl;
						players[0].win++;
						players[0].score += 6.0;
						players[1].lose++;
						players[1].score -= 6.0;
						in_game = false;
						system("pause");
						break;
						
					}
					else if (is_game_over(game, players[1]) == "true") {
						cout << "Игрок " << players[0].nickname << " выйграл" << endl;
						players[1].win++;
						players[1].score += 6.0;
						players[0].lose++;
						players[0].score -= 6.0;
						in_game = false;
						system("pause");
						break;
						
					}
					else if (is_game_over(game, players[0]) == "draw") {
						cout << "Ничья" << endl;
						players[0].draw++;
						players[0].score -= 1.0;
						players[1].draw++;
						players[1].score -= 1.0;
						in_game = false;
						system("pause");
						break;
						
					}

					if (in_game) {
						cout << "[+] Ход: " << players[iter].nickname << endl;
						cout << "Введите цифру: ";
						cin >> motion;
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								if (arr[i][j] == motion) {
									// Проверяем занято ли поле
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
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						game[i][j] = "-";
					}
				}
				in_game = true;
				while (in_game)
				{
					cout << "Добро пожаловать в игру!\t Информация о последнем ходе:\n";
					for (int i = 0; i < 3; i++) {
						cout << "\t" << "|";
						for (int j = 0; j < 3; j++) {
							if (game[i][j] != "-") {
								cout << " " << game[i][j] << " |";
							}
							else {
								cout << " " << (i * 3) + j + 1 << " |";

							}
						}
						cout << endl;
					}

					if (is_game_over(game, players[0]) == "true") {
						cout << "Игрок " << players[0].nickname << " выйграл" << endl;
						players[0].win++;
						players[0].score += 6.0;
						players[1].lose++;
						players[1].score -= 6.0;
						in_game = false;
						break;
					}
					else if (is_game_over(game, players[2]) == "true") {
						cout << "Игрок " << players[0].nickname << " выйграл" << endl;
						players[2].win++;
						players[2].score += 6.0;
						players[0].lose++;
						players[0].score -= 6.0;
						in_game = false;
						break;
					}
					else if (is_game_over(game, players[0]) == "draw") {
						cout << "Ничья" << endl;
						players[0].draw++;
						players[0].score -= 1.0;
						players[2].draw++;
						players[2].score -= 1.0;
						in_game = false;
						break;
					}
					if (in_game) {
						if (iter == 0) {
							cout << "[+] Ход: " << players[iter].nickname << endl;
							cout << "Введите цифру: ";
							cin >> motion;
							for (int i = 0; i < 3; i++) {
								for (int j = 0; j < 3; j++) {
									if (arr[i][j] == motion) {
										if (game[i][j] == players[0].figure && game[i][j] == players[1].figure) {
											cout << "Поле занято" << endl;
											system("pause");
											break;
										}
										else game[i][j] = wrap_in_color(players[iter].nickname, players[i].color_code);

									}

								}
							}
						}
						else if (iter == 2) {
							while (true)
							{
								int i = rand() % 3;
								int j = rand() % 3;
								cout << i << j << game[i][j];
								system("pause");
								if (game[i][j] != players[0].figure && game[i][j] != players[2].figure) {
									game[i][j] = players[iter].figure;
									break;
								}
							}
						}
						//Меняем игрока 
						if (iter == 0) {
							iter = 2;
						}
						else iter = 0;


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
			cout << "\t\t\t" << "W" << "\t" << "L" << "\t" << "D" <<
				"\t" << "Очки";
			cout << endl;
			for (int i = 0; i < 3; i++) {
				cout.width(2);
				cout << i + 1 << " | ";
				cout.width(24);
				/*cout << players[i].nickname;*/
				cout << wrap_in_color(players[i].nickname, players[i].color_code);
				cout.width(5);
				cout << players[i].win;
				cout.width(8);
				cout << players[i].lose;
				cout.width(8);
				cout << players[i].draw;
				cout << "  |  ";
				cout.width(3);
				cout << players[i].score;
				cout << endl;
			}
			system("pause");

			break;




			//Настройки
		case 3:
			settings_is_work = true;
			while (settings_is_work) {
				//Меню настроек
				system("cls");
				cout << "[+] Настройки игрока" << endl << endl;
				for (int i = 0; i < 3; i++) {
					cout << "[" << i + 1 << "]" << wrap_in_color(players[i].nickname, players[i].color_code) << endl;
				}
				cout << "[4]Выйти" << endl;

				cout << "Введите команду: ";
				cin >> select_player;

				/*bool change_set_player = true;*/
				if (select_player != 4) {
					system("cls");
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
						system("cls");
						if (select_player != 3) {
							cout << "Введите новый ник: ";
							cin >> players[select_player - 1].nickname;
						}
						else 
							cout << "Компьютер не прикосновенен" << endl;
						system("pause");
						break;


					case 2:
						system("cls");
						cout << "Введите новую фигуру: ";
						cin >> players[select_player - 1].figure;
						break;


					case 3:
						system("cls");
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
			work = false;

			break;

		default:
			break;
		}

		
	}
	return 0;
	}
