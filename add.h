//v2
#pragma once
#include <iostream>
#include <string>

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
