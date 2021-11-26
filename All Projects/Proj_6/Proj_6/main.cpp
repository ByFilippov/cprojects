#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    
    int monthNum;
    string monthName;
    int dateNum = 44;
    
    cout << "Выберите месяц: \n[1] Январь \n[2] Февраль \n[3] Март \n[4] Апрель \n[5] Май \n[6] Июнь \n[7] Июль \n[8] Август \n[9] Сентябрь \n[10] Октябрь \n[11] Ноябрь \n[12] Декабрь \n";
    cin >> monthNum;
        switch (monthNum) {
            case 1: monthName = "января"; break;
            case 2: monthName = "февраля"; break;
            case 3: monthName = "марта"; break;
            case 4: monthName = "апреля"; break;
            case 5: monthName = "мая"; break;
            case 6: monthName = "июня"; break;
            case 7: monthName = "июля"; break;
            case 8: monthName = "августа"; break;
            case 9: monthName = "сентября"; break;
            case 10: monthName = "октября"; break;
            case 11: monthName = "ноября"; break;
            case 12: monthName = "декабря"; break;
            default: cout << "Такого месяца нет!"; monthName = "чего то.."; break;
        }
    
    cout << "\nВведите дату:\n";
    while (dateNum <= 0 || dateNum > 31){
        cin >> dateNum;
    }
    cout << dateNum << " " << monthName;
    
    int _; cin >> _;
    return 0;
}
