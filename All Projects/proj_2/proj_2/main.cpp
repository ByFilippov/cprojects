#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int season;
    cout << "Время года: \n[1] Зима \n[2] Весна \n[3] Лето \n[4] Осень \n";
    cin >> season;
    if (season == 1)
    {
        cout << "Сейчас холодно (наверно)";
    }
    else if (season == 2)
    {
        cout << "Сейчас холодно (наверно)";
    }
    else if (season == 3)
    {
        cout << "Сейчас тепло (наверно)";
    }
    else if(season == 4)
    {
        cout << "Сейчас холодно (наверно)";
    }
    else
    {
        cout << "Ответ неверный!";
    }

    int _; cin >> _;
    return 0;
}
