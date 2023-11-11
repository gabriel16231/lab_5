#include "tv.h"
void TV::set_info(char * s)
{
    if(s!=NULL)
    {
       info_suplimentare=new char(sizeof(s)+1);
       strcpy(info_suplimentare,s);
    }
    else
        info_suplimentare=NULL;
}
TV::TV()
{
    diagonala=0;
    info_suplimentare=NULL;
}

TV::TV(char c[6],int p,char* m, bool g, double d,char* s):Electrocasnic(),diagonala(d)
{
    set_info(s);

}

TV::TV(const TV& tv):Electrocasnic(tv),diagonala(tv.diagonala)
{
    set_info(tv.info_suplimentare);
}

void TV::operator=(const TV & tv)
{
    delete []info_suplimentare;
    info_suplimentare=NULL;
    set_info(tv.info_suplimentare);
    diagonala=tv.diagonala;
}

TV::~TV()
{
    delete []info_suplimentare;
}

istream& operator>>(istream& dev, TV& tv)
{
    dev>>(Electrocasnic&)tv;
    dev>>tv.diagonala;
    char * c =new char[99];
    dev.get();
    dev.get(c,99);
    tv.set_info(c);
    delete []c;
    c=NULL;
    return dev;
}

ostream& operator<<(ostream& dev,const TV & tv)
{
    dev<<(Electrocasnic&)tv;
    dev<<tv.diagonala<<endl;
    dev<<tv.info_suplimentare<<endl;
}
