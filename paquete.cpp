#include <iostream>
#include <string>
#include "paquete.h"

using namespace std;
Paquete::Paquete(){
    peso=0;
}
Paquete::Paquete(int _peso, string _dimensiones, string _recoleccion){
    peso = _peso;
    dimensiones = _dimensiones;
    recoleccion = _recoleccion;
}
void Paquete::setPeso(int _peso){
    peso = _peso;
}
int Paquete::peso(){
    return peso;
}
void Paquete::setDimensiones(string _dimensiones){
    dimensiones = _dimensiones;
}
string Paquete::getdimensiones(){
    return dimensiones;
}

void Paquete::setRecoleccion(string _recoleccion){
    recoleccion=_recoleccion;
}
string Paquete::getrecoleccion(){
    return recoleccion();
}
