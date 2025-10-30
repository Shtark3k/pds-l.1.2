#include <iostream>
#include <string>
#include <windows.h> // для української мови в консолі (Windows)

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    string a, b;       // два вхідні бітові рядки
    string x = "", y = "", z = "";  // результати OR, AND, XOR

    cout << "Введіть перший бітовий рядок a: ";
    cin >> a;
    cout << "Введіть другий бітовий рядок b: ";
    cin >> b;

    int n = a.length(); // довжина рядка a

    // Перевірка, чи рядки однакової довжини
    if (b.length() != n) {
        cout << "Помилка: рядки повинні мати однакову довжину!" << endl;
        return 1;
    }

    // Проходимо по кожному біту
    for (int i = 0; i < n; i++) {
        char A = a[i];
        char B = b[i];

        // OR (диз’юнкція)
        char c = (A == '1' || B == '1') ? '1' : '0';
        x += c;

        // AND (кон’юнкція)
        c = (A == '1' && B == '1') ? '1' : '0';
        y += c;

        // XOR (альтернативне АБО)
        c = (A != B) ? '1' : '0';
        z += c;
    }

    cout << "\nРезультати порозрядних операцій:" << endl;
    cout << "OR  (a ∨ b): " << x << endl;
    cout << "AND (a ∧ b): " << y << endl;
    cout << "XOR (a ⊕ b): " << z << endl;

    return 0;
}
