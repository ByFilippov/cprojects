#include <iostream>
using namespace std;

void err(int errNum){
    if (errNum == 1) {
        cout << "Делить на 0 нельзя";
    } else if (errNum == 2){
        cout << "Комманды:\n[+] Сложение\n[-] Вычитание\n[*] Умножение\n[/] Деление\n[^] Возведение в степень\n[a] Умножение каждого числа на 0 и сложение 2х результатов\n[)] Умножение суммы чисел на 379\n[(] Очень важная операция\n";
    }
}

double exp(double num1, int num2){
    double rslt = 1;
    for (int i = 0; i < num2; i++){
        rslt = rslt * num1;
    }
    return rslt;
}

double calc(double num1, double num2, char operation) {
    
    switch (operation){
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        case '^': return exp(num1, num2);
        case 'a': return num1*0 + num2*0;
        case ')': return (num1 + num2)*379;
        case '(': return (num1 * num2/3 + 17/3)*0;
        default: return -1;
    }
}

int main()
{
    setlocale (0, "");
    
    cout << "Калькулятор!\n\nКомманды:\n[+] Сложение\n[-] Вычитание\n[*] Умножение\n[/] Деление\n[^] Возведение в степень\n[a] Умножение каждого числа на 0 и сложение 2х результатов\n[)] Умножение суммы чисел на 379\n[(] Очень важная операция\n";
    
    cout << "Введите первое число: ";
    int num1;
    cin >> num1;
    
    cout << "Введите второе число: ";
    int num2;
    cin >> num2;
    
    cout << "Введите действие: ";
    char operation;
    cin >> operation;
    
    if (num2 == 0 and operation == '/'){
        err(1);
    }  else if (operation != '+' and operation != '-' and operation != '*' and operation != '/' and operation != '^' and operation != 'a' and operation != ')'
        and operation != '('){
        err(2);
    } else{
        cout << "Результат: " << calc(num1, num2, operation);
    }

  
    int _; cin >> _;
    return 0;
}
