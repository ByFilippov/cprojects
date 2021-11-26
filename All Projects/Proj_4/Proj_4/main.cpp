#include <iostream>
using namespace std;
 

int main()
{
    setlocale(0, "");

    int a = 0;
    while (a == 0)
    {
        cout << "Введите номер месяца:\n\n";
        int c;
        cin >> c;

        switch (c)
        {
            case 1:
            {
                cout << "Январь\n";
                break;
            }
            case 2:
            {
                cout << "Февраль\n";
                break;
            }
            case 3:
            {
                cout << "Март\n";
                break;
            }
            case 4:
            {
                cout << "Апрель\n";
                break;
            }
            case 5:
            {
                cout << "Май\n";
                break;
            }
            case 6:
            {
                cout << "Июнь\n";
                break;
            }
            case 7:
            {
                cout << "Июль\n";
                break;
            }
            case 8:
            {
                cout << "Август\n";
                break;
            }
            case 9:
            {
                cout << "Сентябрь\n";
                break;

            }
            case 10:
            {
                cout << "Октябрь\n";
                break;
            }
            case 11:
            {
                cout << "Ноябрь\n";
                break;
            }
            case 12:
            {
                cout << "Декабрь\n";
                break;
            }
            default:
            {
                cout << "Такого месяца нет\n";
            }
        }
    }
}
