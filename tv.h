#include "electrocasnic.h"


class TV: public Electrocasnic {
 double diagonala;
 char *info_suplimentare;
 public:
     TV();
     TV(char*,int,char*,bool,double,char*);
     TV(const TV &);
     ~TV();

     void operator=(const TV &);

     friend istream& operator>>(istream& , TV&);
     friend ostream& operator<<(ostream&, const TV &);
     void set_info(char*);
};

