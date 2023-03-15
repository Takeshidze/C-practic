#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    setlocale(0, "");
    char arr[50][50];

    char people[3][3] = {
        {' ', 'X', ' '},
        {'\\', '|', '/'},
        {'/', ' ', '\\'},
    };
    int cord_i = 1;
    int cord_j = 1;

    cout << "Для начала нажмите любую клавишу\n";

    while (true) {
        int press_code = _getch();
        
        switch (press_code)
        {
            case int('w') :
                if (cord_i != 1) {
                    cord_i -= 1;
                }
                break;
            case int('s'):
                if (cord_i != size(arr)-4) {
                    cord_i += 1;
                }
                break;
            case int('d'):
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

        system("cls");
        //draw map
        for (int i = 0; i < size(arr); i++) {
            for (int j = 0; j < size(arr); j++) {
                if (i == 0 || j == 0 || i == size(arr)-1 || j == size(arr)-1) {
                    arr[i][j] = '*';
                }
                else arr[i][j] = ' ';
            }
        }

        // draw people
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr[cord_i + i][cord_j + j] = people[i][j];
            }
        }
        for (int i = 0; i < size(arr); i++) {
            for (int j = 0; j < size(arr); j++) {
                cout << arr[i][j];
            }
            cout << endl;
        }
        cout << press_code;
    }
}
