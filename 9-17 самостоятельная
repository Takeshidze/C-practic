#include <iostream>
using namespace std;


int print_four_squars(string figure) {
    int type;

    cout << "Фигура \"" << figure << "\"" << endl << endl;
    cout << "[1]Заполненый" << endl
        << "[2]Пустой" << endl << endl;
    cout << "[+]Выберите тип: ";
    cin >> type;
    cout << endl;
    return type;
}


string get_texture() {
    string texture;
    cout << "[+]Текстура: ";
    cin >> texture;
    cout << endl;
    return texture;
}




int main()
{

    setlocale(0, "");


    while (true)
    {
        int figure;

        cout << "[+]Программа - ""Геометрические фигуры""" << endl << endl;
        cout << "[1]Линия" << endl
            << "[2]Квадрат" << endl
            << "[3]Прямоугольник" << endl
            << "[4]Треугольник" << endl
            << "[5]Решетка" << endl
            << "[6]Крестик" << endl
            << "[7]Плюс" << endl
            << "[8]Ромб" << endl
            << "[9]Шахматная доска" << endl << endl;
        cout << "[+]Выберите фигуру: ";
        cin >> figure;

        string texture;
        int type;
        int size, size2;
        switch (figure) {
            // Линия
        case 1:
            // Объявление переменных

            // Вывод меню и настроек
            cout << "Фигура ""Линия""" << endl << endl;
            cout << "[1]Горизонтальная" << endl
                << "[2]Вертикальная" << endl << endl;
            cout << "[+]Выберите тип: ";
            cin >> type;
            cout << endl;
            cout << "[+]Длина линии: ";
            cin >> size;
            cout << endl;
            texture = get_texture();
            // Конец вывода меню и настроек

            // Вывод результата
            switch (type)
            {
            case 1:
                for (int i = 0; i < size; i++) {
                    cout << texture;
                }
                break;

            case 2:
                for (int i = 0; i < size; i++) {
                    cout << texture << endl;
                }
                break;

            default:
                break;
            }
            // Конец вывода результата
            break;

            // Квадрат
        case 2:
            // Объявление переменных

            // Вывод меню и настроек
            type = print_four_squars("Квадрат");

            cout << "[+]Размер: ";
            cin >> size;
            cout << endl;

            texture = get_texture();
            // Конец вывода меню и настроек

            // Вывод результата
            switch (type)
            {
            case 1:
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size; j++) {
                        cout << texture;
                    }
                    cout << endl;
                }
                break;

            case 2:
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size; j++) {
                        if (i == 0 || j == 0 || i == size - 1 || j == size - 1) {
                            cout << texture;
                        }
                        else cout << " ";
                    }
                    cout << endl;
                }
                break;

            default:
                break;
            }
            // Конец вывода результата
            break;

            // Прямоугольник
        case 3:
            // Объявление переменных
            int size, size2;

            // Вывод меню и настроек
            type = print_four_squars("Прямоугольник");

            cout << "[+]Ширина: ";
            cin >> size2;
            cout << "[+]Высота: ";
            cin >> size;
            cout << endl;

            texture = get_texture();
            // Конец вывода меню и настроек

            // Вывод результата
            switch (type)
            {
            case 1:
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size2; j++) {
                        cout << texture;
                    }
                    cout << endl;
                }
                break;

            case 2:
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size2; j++) {
                        if (i == 0 || j == 0 || i == size - 1 || j == size2 - 1) {
                            cout << texture;
                        }
                        else cout << " ";
                    }
                    cout << endl;
                }
                break;

            default:
                break;
            }
            // Конец вывода результата
            break;

            // Треугольник
        case 4:
            // Объявление переменных

            // Вывод меню и настроек
            type = print_four_squars("Треугольник");

            cout << "[+]Высота: ";
            cin >> size;

            texture = get_texture();

            // Конец вывода меню и настроек

            // Вывод результата
            switch (type)
            {
            case 1:
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size * 2 - 1; j++) {
                        if (j <= size - 1 + i && j >= size - 1 - i) {
                            cout << texture;
                        }
                        else cout << ".";
                    }
                    cout << endl;
                }
                break;

            case 2:
                for (int i = 0; i < size; i++) {
                    for (int j = 0; j < size * 2 - 1; j++) {
                        if (j == size - 1 + i || j == size - 1 - i || i == size - 1) {
                            cout << texture;
                        }
                        else cout << ".";
                    }
                    cout << endl;
                }
                break;

            }
            break;
            // Конец вывода результата

        // Решетка
        case 5:
            // Объявление переменных

            // Вывод меню и настроек
            cout << "Фигура \"Решетка\"" << endl << endl;


            cout << "[+]Высота: ";
            cin >> size;
            if (size % 2 == 0) {
                size++;
            }
            texture = get_texture();
            // Конец вывода меню и настроек

            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if ((j % 2 == 0) || i % 2 == 0) {
                        cout << texture;
                    }
                    else cout << ".";
                }
                cout << endl;
            }
            break;

            //Крестик
        case 6:
            // Объявление переменных

           // Вывод меню и настроек
            cout << "Фигура \"Крестик\"" << endl << endl;


            cout << "[+]Высота: ";
            cin >> size;

            texture = get_texture();


            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (j == i || j == size - i - 1) {
                        cout << texture;
                    }
                    else cout << ".";
                }
                cout << endl;
            }
            break;

            //Плюс
        case 7:
            cout << "Фигура \"Плюс\"" << endl << endl;


            cout << "[+]Размер: ";
            cin >> size;
            if (size % 2 == 0) {
                size++;
            }
            texture = get_texture();

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == size / 2 || j == size / 2 || i == size / 2 || j == size / 2) {
                        cout << texture;
                    }
                    else cout << ".";
                }
                cout << endl;
            }
            break;

        case 8:
            cout << "Фигура \"Ромб\"" << endl << endl;

            cout << "[+]Размер: ";
            cin >> size;
            if (size % 2 == 0) {
                size++;
            }
            texture = get_texture();

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (j == size / 2 + i || j == size / 2 - i) {
                        cout << texture;
                    }
                    else if (j == i - size / 2 || j == size - 1 - (i - size / 2)) {
                        cout << texture;
                    }

                    else cout << ".";
                }
                cout << endl;
            }
            break;
        case 9:
            cout << "Фигура \"Шахматная доска\"" << endl << endl;

            cout << "[+]Размер: ";
            cin >> size;
            
            texture = get_texture();

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
                        cout << texture;
                    }
                    else cout << ".";
                }
                cout << endl;
            }
            break;
        }

        cout << endl;
        system("pause");
        system("cls");

    }

    return 0;
}
