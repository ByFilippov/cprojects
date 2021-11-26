#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    
    cout << "Переводчик\n";
    cout << "Language:\n [1] RUS\n [2] ENG\n";
    int a;
    cin >> a;
    
    switch (a)
    {
    case 1:
        cout << "Выберите слово:\n[1] Универсалии\n[2] могут\n[3] существовать\n[4] как\n[5] сущности \n[6] конкретных \n[7] вещей \n[8] или \n[9] они \n[10] являются \n[11] лишь \n[12] порождениями \n[13] разума \n[14] Зависит\n[15] от философской школы\n";
        int b;
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "Universals";
            break;
        case 2:
            cout << "can";
            break;
        case 3:
            cout << "exist";
            break;
        case 4:
            cout << "how";
            break;
        case 5:
            cout << "entities";
            break;
        case 6:
            cout << "specific";
            break;
        case 7:
            cout << "things";
            break;
        case 8:
            cout << "or";
            break;
        case 9:
            cout << "they";
            break;
        case 10:
            cout << "are";
            break;
        case 11:
            cout << "just";
            break;
        case 12:
            cout << "offspring";
            break;
        case 13:
            cout << "the mind";
            break;
        case 14:
            cout << "Depends";
            break;
        case 15:
            cout << "from the philosophical school";
            break;
        default:
            cout << "Ответ неверный!";
            break;
        }
        break;
    case 2:
        cout << "Choose the word: \n[1] Can \n[2] universals \n[3] exist \n[4] as \n[5] the essence \n[6] of concrete things \n[7] or \n[8] are \n[9] they \n[10] only \n[11] products \n[12] of the mind \n[13] It \n[14] depends \n[15] on the philosophical school\n";
        int c;
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Могут";
            break;
        case 2:
            cout << "универсалии";
            break;
        case 3:
            cout << "существовать";
            break;
        case 4:
            cout << "как";
            break;
        case 5:
            cout << "сущность";
            break;
        case 6:
            cout << "конкретных вещей";
            break;
        case 7:
            cout << "или";
            break;
        case 8:
            cout << "есть";
            break;
        case 9:
            cout << "они";
            break;
        case 10:
            cout << "только";
            break;
        case 11:
            cout << "порождения";
            break;
        case 12:
            cout << "разума";
            break;
        case 13:
            cout << "Это";
            break;
        case 14:
            cout << "Зависит";
            break;
        case 15:
            cout << "От философской школы";
            break;
        default:
            cout << "Ответ неверный!";
            break;
        }
        break;
    default:
        cout << "Incorrect number";
        break;
    }
    
    int _; cin >> _;
    return 0;
}
