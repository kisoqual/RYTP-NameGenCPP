#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//using std::cout, std::cin, std::endl; // нужон C++17 для этого

const char i[6] = " RYTP"; 
char j[256];

int main()
{
    system("chcp 1251>NUL");
    cout << "какой ты RYTP хочеш? ";
    cin >> j;
    cout << j << i << endl;
    return 0; //можно не писать, но на всякий случай
}
