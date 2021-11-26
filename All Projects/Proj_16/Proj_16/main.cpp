#include <iostream>
using namespace std;


void Cln()
{
    system("cls");
}

void ColorTxt()
{
    system("Color C");
}

void ColorBcgr()
{
    system("Color C0");
}

int IntSize()
{
    int a = 1;
    int b = sizeof(a);
    return b;
}

int CharSize()
{
    char a = 'a';
    int b = sizeof(a);
    return b;
}

int DoubleSize()
{
    double a = 1.1;
    int b = sizeof(a);
    return b;
}

int FloatSize()
{
    float a = 1.11;
    int b = sizeof(a);
    return b;
}

int BoolSize()
{
    bool a = 0;
    int b = sizeof(a);
    return b;
}

string Aboba()
{
    string a = "ABOBA";
    return a;
}

void Square()
{
    for (int y = 0; y < 5; y++)
    {
        cout << "\n";

        for (int x = 0; x < 5; x++)
        {
            cout << "[] ";
        }
    }
}


int main()
{
    setlocale(0, "");

    cout << "[1] Очищение консоли" << endl;
    cout << "[2] Изменение цвета фона консоли" << endl;
    cout << "[3] Изменение цвета текста консоли" << endl;
    cout << "[4] Вывод размера типа данных INT" << endl;
    cout << "[5] Вывод размера типа данных CHAR" << endl;
    cout << "[6] Вывод размера типа данных DOUBLE" << endl;
    cout << "[7] Вывод размера типа данных FLOAT" << endl;
    cout << "[8] Вывод размера типа данных BOOL" << endl;
    cout << "[9] Вывод сообщения \"ABOBA\" " << endl;
    cout << "[10] Вывод квадрата 5x5" << endl << endl;

    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        Cln();
        cout << "Готово\n";
        break;
    case 2:
        ColorBcgr();
        break;
    case 3:
        ColorTxt();
        break;
    case 4:
        cout << "Int size = " << IntSize() << endl;
        break;
    case 5:
        cout << "Char size = " << CharSize() << endl;
        break;
    case 6:
        cout << "Double size = " << DoubleSize() << endl;
        break;
    case 7:
        cout << "Float size = " << FloatSize() << endl;
        break;
    case 8:
        cout << "Bool size = " << BoolSize() << endl;
        break;
    case 9:
        cout << Aboba() << endl;
        break;
    case 10:
        Square();
        break;
    default:
        cout << "\n";
        break;
    }

    int _; cin >> _;
    return 0;
}

