//
// Created by avazb on 18/03/2025.
//

#ifndef AVAZBEK_H
#define AVAZBEK_H
#include <iostream>
#include "Name.h"

using namespace std;



class Avazbek: public Name{
public:
    Avazbek(string = "DefaultName");
    virtual void setName(string);
    void Print() const;

private:
    string name;

};



#endif //AVAZBEK_H
