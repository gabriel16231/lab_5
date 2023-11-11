#include <iostream>
#include <cstring>
#pragma once

using namespace std;


class Produs {
protected:
 char cod[6]="00000";
 int pret=0;
public:
    Produs()=default;
    Produs(char [],int);
    Produs(const Produs &);
    void operator=(const Produs&);
    friend istream& operator>>(istream & , Produs &);
    friend ostream& operator<<(ostream & ,const Produs &);
};

