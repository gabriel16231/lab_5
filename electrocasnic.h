#include "produs.h"

class Electrocasnic : public Produs {
protected:
 char *marca;
 bool are_garantie;
public:
    Electrocasnic();
    Electrocasnic(char [],int ,char *,bool);
    Electrocasnic(const Electrocasnic &);

    void operator=(const Electrocasnic &);

    friend istream& operator>>(istream& ,Electrocasnic &);
    friend ostream& operator<<(ostream& ,const Electrocasnic &);

    void set_marca(char *);
};

