#ifndef DESTINATARIO_H_INCLUDED
#define DESTINATARIO_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Destinatario {
    string nomdest; //nombre del destinatario
    string destino; //lugar del destino, ciudad pues
    public:
        Destinatario(string nomdest, string destino);
        void setNomdest();
        void setDestino();
        string getnomdest();
        string getdestino();
};



#endif // DESTINATARIO_H_INCLUDED
