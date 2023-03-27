#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main() {
    setlocale(0, "");
    char arr[50][50];
    int summ_gifts = 0;
    char people[3][3] = {
        {' ', 'X', ' '},
        {'\\', '|', '/'},
        {'/', ' ', '\\'},
    };
    int cord_i = 1;
    int cord_j = 1;
    
    cout << "Для начала нажмите любую клавишу\n";

    HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD cd;
    cd.X = 0;
    cd.Y = 0;
    
    int gift_x = 2 + rand() % 47;
    int gift_y = 2 + rand() % 47;

    while (true) {
        int press_code = _getch();
        
    // move
        switch (press_code)
        {
            case int('w') :
                if (cord_i != 1) {
                    cord_i -= 1;
                }
            break;
            case int('s') :
                if (cord_i != size(arr) - 4) {
                    cord_i += 1;
                }
            break;
            case int('d') :
                if (cord_j != size(arr) - 4) {
                    cord_j += 1;
                }
            break;
            case int('a') :
                if (cord_j != 1) {
                    cord_j -= 1;
                }
            break;

            default:
                break;
        }

        SetConsoleCursorPosition(hd, cd);
        //set map
        for (int i = 0; i < size(arr); i++) {
            for (int j = 0; j < size(arr); j++) {
                if (i == 0 || j == 0 || i == size(arr) - 1 || j == size(arr) - 1) {
                    arr[i][j] = '*';
                }
                else arr[i][j] = ' ';
            }
        }

        // set people
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr[cord_i + i][cord_j + j] = people[i][j];
            }
        }
        
        // set gifts
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[cord_i + i][cord_j + j] == arr[gift_x][gift_y] && arr[cord_i + i][cord_j + j] != ' ') {
                    
                    gift_x = 2 + rand() % 47;
                    gift_y = 2 + rand() % 47;
                    
                    summ_gifts += 1;
                }
            }
        }
        arr[gift_x][gift_y] = '$';

        // draw all
        for (int i = 0; i < size(arr); i++) {
            for (int j = 0; j < size(arr); j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << "Количество собранных подарков = " << summ_gifts;
        cout << endl;
        cout << gift_x << " " << gift_y;
    }
}
