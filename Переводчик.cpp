#include <iostream>
#include <map>
using namespace std;


int main()
{
    setlocale(0, "");
    
    struct Word
    {
        string ru_name;
        string en_name;
    };
    
    Word arr[100] =
    {
        {"Дом", "Home"},
        {"хмель", "hop"},
        {"тыквенное семя", "pumpkinseed"},
        {"фамилия", "surname"},
        {"гореть", "burn"},
        {"скреплять", "bonding"},
        {"Дом", "cornerstone"},
        {"чайник", "kettle"},
        {"торги", "bidding"},
        {"газон", "turf"},
        {"пламя", "flame"},
        {"расходы", "expense"},
        {"певчая птица", "songbird"},
        {"отказ", "waiver"},
        {"мобильник", "mobile"},
        {"эшафот", "scaffold"}
    };

    //map <string, string> translator =
    //{
    //    {"Дом", "Home"},
    //    {"хмель", "hop"},
    //    {"тыквенное семя", "pumpkinseed"},
    //    {"Фамилия", "surname"},
    //    {"гореть", "burn"},
    //    {"скреплять", "bonding"},
    //    {"Дом", "cornerstone"},
    //    {"чайник", "kettle"},
    //    {"торги", "bidding"},
    //    {"газон", "turf"},
    //    {"пламя", "flame"},
    //    {"расходы", "expense"},
    //    {"певчая птица", "songbird"},
    //    {"отказ", "waiver"},
    //    {"мобильник", "mobile"},
    //    {"эшафот", "scaffold"}
    //};

    cout << "[+] Переводчик" << endl << endl
        << "[1]Русские слова" << endl
        << "[2]Английские слова" << endl << endl
        << "[3]Выйти" << endl
        << "Выберите пункт: ";
    
    int num_lang, num_word;
    cin >> num_lang;

    switch (num_lang)
    {
    case 1:
        for (int i = 1; i <= 15; i++) {
            cout << "[" << i << "]" << arr[i].ru_name << endl;
        }
        
        
        cout << "Введите номер: ";
        cin >> num_word;

        for (int i = 1; i <= 15; i++) {
            if (i == num_word) {
                cout << "Перевод: " << arr[i].ru_name << "->" << arr[i].en_name;
            }
        }

        break;

    case 2:
        for (int i = 1; i <= 15; i++) {
            cout << "[" << i << "]" << arr[i].en_name << endl;
        }

        cout << "Введите номер: ";
        cin >> num_word;

        for (int i = 1; i <= 15; i++) {
            if (i == num_word) {
                cout << "[+] Перевод: " << arr[i].en_name << "->" << arr[i].ru_name;
            }
        }
        break;

    case 3:
        break;

    default:
        cout << "Неправильная команда";
        break;
    }

    return 0;
}
