#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	setlocale(0, "");

	//описание вопросов

	struct Answer
	{
		string answ;
		bool o;
	};

	struct Question
	{
		string text;
		Answer answers[4];
	};

	Question arr_q[12] = {
		{ "Системный язык программирования?",
			{
				{"Python", false},
				{"С#", false},
				{"Ruby", false},
				{"C++", true}
			}
		},
		{ "Логический тип данных объявляется служебным словом",
			{
				{"BOOL", true},
				{"BYTE", false},
				{"LOGIC", false},
				{"SHORT", false}
			}
		},
		{ "Символьный тип данных объявляется служебным словом",
			{
				{"STRING", false},
				{"WORD", false},
				{"CHAR ", true},
				{"DWORD", false}
			}
		},
		{ "Как называется алгоритм, в котором действия выполняются друг за другом, не повторяясь",
			{
				{"циклическим", false},
				{"разветвленным", false},
				{"вспомогательным", false},
				{"линейным ", true}
			}
		},
		{ "Перевод программ с языка высокого уровня на язык более низкого уровня обеспечивает программа",
			{
				{"паскаль", false},
				{"ассемблер", false},
				{"компилятор ", true},
				{"операционная система", false}
			}
		},
		{ "Какие из приведенных типов данных относятся к целочисленному типу данных",
			{
				{"float, double", false},
				{"int, char", false},
				{"long, short", true},
				{"float, string", false}
			}
		},
		{ " Как называется набор однотипных данных, имеющий общее для всех своих элементов имя?",
			{
				{"множество", false},
				{"словарь", false},
				{"запись", false},
				{"массив", true}
			}
		},
		{ "В основе какого метода сортировки лежит обмен соседних элементов массива",
			{
				{"Сортировка пузырьком", true},
				{"Сортировка выборкой", false},
				{"Бинарный сортировка", false},
				{"Сортировка слиянием", false}
			}
		},
		{ "Вещественный тип данных объявляется служебным словом:",
			{
				{"LONG INT", false},
				{"FLOAT", true},
				{"SHORT", false},
				{"Char", false}
			}
		},
		{ "C++ язык?",
			{
				{"Интерпритируемый", false},
				{"Магический", false},
				{"Компилируемый", true},
				{"Убийственный", true}
			}
		},
		{ "Кто изобрел интернет",
			{
				{"Брюс Ли", false},
				{"Тимоти Джон Бернес-Ли", true},
				{"Джеки Чан", false},
				{"Ты", false}
			}
		},
		{ "Основатель Microsoft",
			{
				{"Билл Гейтс", true},
				{"Стив Джобс", false},
				{"Леонардо Да Винчи", false},
				{"Абракадабра", false}
			}
		}
	};


	string name_player = "Vasya";
	bool check = true;
	int count_quations = 8;
	string color = "\x1b[93m";




	
	//приветствие

	while (check) {
		cout << color;
		cout << "Приветствую " << name_player << ". Викторина с вопросами по программированию и сферой IT." << endl;
		int key_input;
		cout << "[1] - Начать игру" << endl
			<< "[2] - Настройки" << endl
			<< "[3] - Правила" << endl
			<< "[4] - Выйти" << endl;

		//главное меню считывание нажатия на клавиатуре
		key_input = _getch();

		//начать игру
		if (key_input == 49) {
			int lives = 3;
			int coin = 0;
			bool in_game = true;

			system("cls");
			//Вывод ответов
			for (int i = 0; i < count_quations && in_game==true; i++) {
				cout << "[+] Игрок: " << name_player << " | жизни: " << lives
					<< " | очки: " << coin << endl;
				cout << "[" << i << "]" << "Вопрос: " << arr_q[i].text << endl;
				for (int j = 0; j < 4; j++) {
					cout << "[" << char('A' + j) << "]" << arr_q[i].answers[j].answ << endl;
				}

				cout << "[+]Выбрать ответ: ";
				key_input = _getch();

				// Проверка ответов
				bool stoper = true;
				while (stoper) {
					if (key_input == 65 || key_input == 66 || key_input == 67 || key_input == 68) {
						for (int j = 0; j < 4; j++) {
							if (key_input == 65 + j) {
								if (arr_q[i].answers[j].o) {
									coin += 1;
									cout << "Ответ верный! + 1 очко" << endl;
								}
								else {
									lives -= 1;
									cout << "Ответ неверный! - 1 жизнь" << endl;
									if (lives == 0) {
										system("cls");
										cout << "Игра окончена" << endl;
										in_game = false;
										break;
									}
								}
							}
						}
						stoper = false;
					}
					if (stoper) {
						key_input = _getch();
					}
					
				}
				
				system("pause");
				system("cls");
				

			}
			if (in_game) {
				cout << "Ты выиграл! У тебя осталось " << lives << " жизней и " << coin << " очкОв" << endl;
				system("pause");
			}


		}

		//Настройки
		else if (key_input == 50) {
			cout << "[1] Редактирование имя игрока;" << endl
				<< "[2] Редактирование вопросов в игре.Можно изменить на 8 - 10 - 12." << endl
				<< "[3] Редактирование цвет интерфейса" << endl
				<< "[4] Назад" << endl;

			//считывание нажатия
			key_input = _getch();
			system("cls");
			//изменить имя игрока
			if (key_input == 49) {
				cout << "Введите новое имя игрока: ";
				cin >> name_player;
			}

			//изминение количества вопросов
			else if (key_input == 50) {
				cout << "Сейчас вопросов: " << count_quations << endl;
				cout << "Выберите количество вопросов:" << endl
					<< "[1] 8" << endl
					<< "[2] 10" << endl
					<< "[3] 12" << endl;
				key_input = _getch();
				if (key_input == 49) {
					count_quations = 8;
				}
				else if (key_input == 50) {
					count_quations = 10;
				}
				else if (key_input == 51) {
					count_quations = 12;
				}
			}

			//редактирование цвета интерфейса
			else if (key_input == 51) {
				cout << "Выберите цвет: " << endl
					<< "[1] Белый" << endl
					<< "[2] Красный" << endl
					<< "[3] Зеленый" << endl
					<< "[4] Синий" << endl;
				key_input = _getch();
				if (key_input == 49) {
					color = "\x1b[93m";
				}
				else if (key_input == 50) {
					color = "\x1b[91m";
				}
				else if (key_input == 51) {
					color = "\x1b[92m";
				}
				else if (key_input == 52) {
					color = "\x1b[94m";
				}
			}
			else if (key_input == 52) {
				system("cls");
			}
		}

		//Правила
		else if (key_input == 51) {
			cout << "- Игрок получает очки за правильный ответ на вопрос;" << endl
				<< "- Игрок проходит дальше за правильный ответ;" << endl
				<< "- Игрок теряет жизнь при неправильном ответе." << endl;
			system("pause");
		}

		//Выход
		else if (key_input == 52) {
			check = false;
		}

		//Очистка консоли
		system("cls");
	}
	return 0;
}
