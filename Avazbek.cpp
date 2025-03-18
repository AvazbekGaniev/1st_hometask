//
// Created by avazb on 18/03/2025.
//
#include <iostream>
#include "Name.h"
#include "Avazbek.h"

using namespace std;

Avazbek::Avazbek(string n)
{
    name=n;
}

void Avazbek::setName(string n)
{
    name=n;
}

void Avazbek::Print() const
{
    cout << name << endl;
}