#include <iostream>
#include "add.h"
//#include "add.hpp" // если будут проблемы

using std::cout;
using std::cin;
using std::endl;

//using std::cout, std::cin, std::endl; // нужон C++17 для этого

int v;

void select() {
    cout << "какой ты версию хочеш? ";
    cin >> v;
}

int main() {
    system("chcp 1251>NUL");
    select();
    if (v == 1) {
        const char i[6] = " RYTP";
        char j[256];
        cout << "какой ты RYTP хочеш? ";
        cin >> j;
        cout << "\n" << j << i << endl;
        cout << "\nНажмите на любую клавишу чтобы выйти..." << endl;
        system("pause>NUL");
        return 0;
    } if (v == 2) {
        lulz(" RYTP");
        return 0;
    }
    else {
        cout << "\aтакой версии нет" << endl;
        select();
    }
    return 0; //можно не писать, но лучше на всякий случай
}
