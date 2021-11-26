#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    
    float arr1[10] = { 1.1 , 1.2 , 1.3 , 1.4 , 1.5 , 1.6, 1.7, 1.8 , 1.9, 2.0 };
    
    double arr2[10] = { 1.1 , 2.2 , 3.3 , 4.4 , 5.5 , 6.66, 7.7, 8.08 , 8.8, 9.9 };
    
    int arr3[10] = { 111, 222, 3333, 444, 555, 666, 777, 808, 888, 999 };
    
    short arr4[10] = { 123, 212, 123, 321, 533, 442, 757, 66, 8875, 6632 };
    
    long arr5[10] = { 75864846, 24547474, 25333535, 2353252, 2525678888, 6666666666, 324325211, 254634637, 334636464, 363765889 };
    
    char arr6[10] = { 'a', 'b', 'c' , 'd' ,'e' , 'a' , 'm' , 'o' , 'g', 'g' };
    string arr7[10] = { "aboba" , "aoiiai" , "bbbbb" , "cccc'" , "ddddd", "eeeeeee" , "ff", "gggg", "hhhhh", "iiii"};
    
    bool arr8[10] = {1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 };

    cout << "Массив данных для вывода: \n[1] float\n[2] double\n[3] int\n[4] short\n[5] long\n[6] char\n[7] string\n[8] bool\n";
    
    int a;
    cin >> a;
    cout << "\n";
    
    switch (a)
    {
    case 1:
        for (int i = 0; i < 10; i++)
        {
            cout << "[" << i + 1 << "]" << " - " << arr1[i] << endl;
        }
        break;
    case 2:
        for (int i = 0; i < 10; i++)
        {
            cout << "[" << i + 1 << "]" << " - " << arr2[i] << endl;
        }
        break;
    case 3:
        for (int i = 0; i < 10; i++)
        {
            cout << "[" << i + 1 << "]" << " - " << arr3[i] << endl;
        }
        break;
    case 4:
        for (int i = 0; i < 10; i++)
        {
            cout << "[" << i + 1 << "]" << " - " << arr4[i] << endl;
        }
        break;
    case 5:
        for (int i = 0; i < 10; i++)
        {
            cout << "[" << i + 1 << "]" << " - " << arr5[i] << endl;
        }
        break;
    case 6:
        for (int i = 0; i < 10; i++)
        {
            cout << "[" << i + 1 << "]" << " - " << arr6[i] << endl;
        }
        break;
    case 7:
        for (int i = 0; i < 10; i++)
        {
            cout << "[" << i + 1 << "]" << " - " << arr7[i] << endl;
        }
        break;
    case 8:
        for (int i = 0; i < 10; i++)
        {
            cout << "[" << i + 1 << "]" << " - " << arr8[i] << endl;
        }
        break;
    default:
        cout << "Ответ неверный!";
        break;

    }

    int _; cin >> _;
    return 0;
}
