#ifndef PAQUETE_H_INCLUDED
#define PAQUETE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Paquete{
    int peso;
    string dimensiones;
    string recoleccion; //el dia que se debe de recoger el objeto
    public:
        Paquete();
        Paquete (int peso, string dimensiones, string recoleccion);
        void setPeso();
        void setDimensiones();
        void setRecoleccion();
        int peso();
        string getdimensiones();
        string getrecoleccion();
};


#endif // PAQUETE_H_INCLUDED
