#include <iostream>
#include "add.h"

using std::cout;
using std::cin;
using std::endl;

//using std::cout, std::cin, std::endl; // нужон C++17 для этого

int main(){
    system("chcp 1251>NUL");
    int v;
    cout << "какой ты версию хочеш? ";
    cin>>v;
    if (v=1){
        const char i[6] = " RYTP"; 
        char j[256];
        cout << "какой ты RYTP хочеш? ";
        cin >> j;
        cout << j << i << endl;
        return 0;
    }
    if (v=2){
        lulz(" RYTP");
        return 0;
    }
    return 0; //можно не писать, но лучше на всякий случай
}
