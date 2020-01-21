#include <iostream>
#include <string>
#include "cliente.h"

using namespace std;

Cliente::Cliente(string _name, string _adress, string _phone){
   name = _name;
   adress =_adress;
   phone =_phone;
}
void Cliente::setName(string _name){
    name = _name;
}

string Cliente::getname(){
    return name;
}

void Cliente::setAdress(string _adress){
    adress=_adress;
}

string Cliente::getadress(){
    return adress;
}

void Cliente::setPhone(string _phone){
    phone=_phone;
}

string Cliente::getphone(){
    return phone;
}
