#include <iostream>
using namespace std;

void spec(string mounth) {
    int day;
    cout << "[+]Выбран месяц - " << mounth << endl
        << "[+]Выберете день месяца: ";
    cin >> day;
    if (day > 31 || day < 1) {
        cout << "Ты шо дядя";
    }
    else cout << "[+] Календарь: " << day << " " << mounth;
            
}

int main()
{

    setlocale(0, "");

    cout << "[+]Календарь" << endl
        << "[1]январь" << endl
        << "[2]февраль " << endl
        << "[3]март " << endl
        << "[4]апрель " << endl
        << "[5]май " << endl
        << "[6]июнь " << endl
        << "[7]июль " << endl
        << "[8]август " << endl
        << "[9]сентябрь " << endl
        << "[10]октябрь " << endl
        << "[11]ноябрь " << endl
        << "[12]декабрь " << endl
        << "[+]Выберите месяц: " << endl;
    
    int month;
    cin >> month;
    
    switch (month)
    {
    case 1:
        spec("января");
        break;

    case 2:
        spec("февраля");
        break;

    case 3:
        spec("марта");
        break;

    case 4:
        spec("апреля");
        break;

    case 5:
        spec("мая");
        break;

    case 6:
        spec("июня");
        break;

    case 7:
        spec("июля");
        break;

    case 8:
        spec("августа");
        break;

    case 9:
        spec("сентября");
        break;

    case 10:
        spec("октября");
        break;

    case 11:
        spec("ноября");
        break;

    case 12:
        spec("декабря");
        break;

    default:
        break;
    }

    return 0;
}
