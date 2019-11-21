//
// Created by Ryan Phadnis on 11/21/19.
//

#ifndef PROJECT8_DATA_H
#define PROJECT8_DATA_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Data
{
    friend ostream& operator << (ostream& os, Data d);
public:
    string name;
    int age;
    string country;
    int overall;

    Data();
    Data(string n, int a, string c, int o);

    friend bool operator < (const Data& d, const Data &da);
    friend bool operator > (const Data& d, const Data &da);
};

#endif //PROJECT8_DATA_H
