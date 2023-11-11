#include "electrocasnic.h"

void Electrocasnic::set_marca(char *m)
{
    if(m!=NULL)
    {
        marca=new char[sizeof(m)+1];
        strcpy(marca,m);
    }
    else
        marca=NULL;
}
Electrocasnic::Electrocasnic()
{
    marca=NULL;
    are_garantie=0;
}

Electrocasnic::Electrocasnic(char c[],int p ,char * m ,bool g):Produs(),are_garantie(g)
{
    set_marca(m);

}

Electrocasnic::Electrocasnic(const Electrocasnic & electrocasnic):Produs(electrocasnic),are_garantie(electrocasnic.are_garantie)
{
    set_marca(electrocasnic.marca);
}

void Electrocasnic::operator=(const Electrocasnic & electrocasnic)
{
    (Produs&)(*this) =electrocasnic;
    set_marca(electrocasnic.marca);
    are_garantie=electrocasnic.are_garantie;
}
istream& operator>>(istream& dev,Electrocasnic & electrocasnic)
{
    dev>>(Produs&)electrocasnic;
    char *c=new char[99];

    dev>>c;
    electrocasnic.set_marca(c);
    delete []c;
    c=NULL;

    dev>>electrocasnic.are_garantie;

}

ostream& operator<<(ostream& dev, const Electrocasnic & electrocasnic)
{
    dev<<(Produs&)electrocasnic;
    dev<<electrocasnic.marca<<endl;
    dev<<electrocasnic.are_garantie;
}

