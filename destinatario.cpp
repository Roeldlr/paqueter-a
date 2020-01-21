#include <iostream>
#include <string>
#include "destinatario.h"

using namespace std;

Destinatario::Destinatario(string _nomdest, string _destino){
    nomdest = _nomdest;
    destino = _destino;
}
void Destinatario::setNomdest(string _nomdest){
    nomdest=_nomdest;
}
string Destinatario::getnomdest(){
    return nomdest;
}

void Destinatario::setDestino(string _destino){
    destino = _destino;
}
string Destinatario::getdestino(){
    return destino;
}
