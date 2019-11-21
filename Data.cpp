//
// Created by Ryan Phadnis on 11/21/19.
//

#include <string>
#include <iostream>
#include "Data.h"
using namespace std;

Data::Data() //default constructor
{
    name = "";
    age = 0;
    country = "";
    overall = 0;
}

Data::Data(string n, int a, string c, int o) //preferable constructor
{
    name = n;
    age = a;
    country = c;
    overall = o;
}

//ostream operator overloader
ostream& operator << (ostream& os, Data d)
{
    os << "Name: " << d.name << endl;
    os << "Age: " << d.age << endl;
    os << "Country: " << d.country << endl;
    os << "Overall: " << d.overall << endl;
    os << endl;
    return os;
}

bool operator > (const Data &d, const Data &da)
{
    return d.overall > da.overall;
}

bool operator < (const Data &d, const Data &da)
{
    return d.overall < da.overall;
}