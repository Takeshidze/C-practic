#include <iostream>
#include <conio.h>
#include <vector>
#include "windows.h"

using namespace std;

int main() {
    setlocale(0, "");
    string figure[2][2] = {
        {"* ","* "},
        {"* ", "* "}
    };
    
    string field[50][50];
    
    for (int i = 0; i < size(field); i++) {
        for (int j = 0; j < size(field[i]); j++) {
            
            if (i == 0 || j == 0 || i == size(field) - 1 || j == size(field[i]) - 1) {
                field[i][j] = "* ";
            }
            else {
                field[i][j] = "  ";
            }
            cout << field[i][j];
        }
        cout << "\n";
    }
    while (true) {

    }

    Sleep(5000);

    return 0;
}
