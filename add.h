//v2
#pragma once
#include <iostream>
#include <string>
//#include <cstring> //если надумаете заюзать массив из char вместо string

using std::cout;
using std::cin;
using std::endl;
using std::string;

//using std::cout, std::cin, std::endl, std::string; //нужон C++17

void lulz(const string& i = "") {
  cout << "какой ты RYTP хочеш? ";
  string j;
  getline(cin, j);
  cout << j + i << endl;
}

//если надумаете заюзать массив из char вместо string
/*
void lulz(const char* i = "") {
    char j[256];
    cout << "какой ты RYTP хочеш? ";
    cin.getline(j, sizeof(j)); // указываем размер буфера
    cout << j << i << endl;
}
*/
