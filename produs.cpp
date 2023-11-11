#include "produs.h"

Produs::Produs(char c[6],int n):pret(n)
{
    strcpy(cod,c);
}

Produs::Produs(const Produs & produs):pret(produs.pret)
{
    strcpy(cod,produs.cod);
}

void Produs::operator=(const Produs & produs )
{
    strcpy(cod,produs.cod);
    pret=produs.pret;
}

istream& operator>>(istream & dev, Produs & produs)
{
    dev>>produs.cod;
    dev>>produs.pret;
    return dev;
}

ostream& operator<<(ostream & dev,const Produs & produs)
{
    dev<<produs.cod<<endl;
    dev<<produs.pret<<endl;
    return dev;
}
