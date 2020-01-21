#include <iostream>
#include <string>
#include "cliente.h"
#include "paquete.h"
#include "destinatario.h"

using namespace std;

void infocliente(Cliente c){
    cout << "Su nombre es: " << c.getname()<<endl;
            "Su dirección es: " << c.getaddress()<<endl;
            "Su telefono es: " << c.getphone()<<endl;
}

void infopaquete(Paquete q){
    cout << "El peso del paquete es: " << q.getpeso()<<endl;
            "Las dimensiones del paquete son " << q.getdimensiones()<<endl;
            "El día que recogerá el paquete es: " << q.getrecoleccion()<<endl;
}

void infodestinatario(Destinatario d){
    cout << "El nombre del destinatario es: " << d.getnomdest()<<endl;
            "La ciudad a la que llegará el paquete es: " << d.getdestino()<<endl;
}

int main(){

Cliente A;
cout<<"Ingrese su nombre"<<endl;
string _cliente; cin>>_cliente;
A.setName(_cliente);
cout<<"Ingrese su dirección de correo electronico"<<endl;
string _adress; cin>>_adress;
A.setAdress(_adress);
cout<<"Ingrese su telefono"<<endl;
string _phone; cin>>_phone;
A.setPhone(_phone);

Paquete P;
cout<<"Ingrese el peso del paquete en kilogramos"<<endl;
int _peso; cin>>_peso;
P.setPeso(_peso);
cout<<"Ingrese las dimensiones del paquete, en formato AxBxC"
string _dimensiones; cin>>_dimensiones;
P.setDimensiones(_dimensiones);
cout<<"Ingrese el día de recolección del paquete, en formato 01/01/20"<<endl;
string _dia; cin>>_dia;
P.setRecoleccion(_dia);

Destinatario D;
cout<<"Ingrese el nombre de la persona que recibirá el paquete";<<endl;
string _nomdest; cin>>_nomdest;
D.setNomdest(_nomdest);
cout<<"Ingrese el lugar al que enviará el paquete"<<endl;
string _ciudad; cin>>_ciudad;
D.setDestino(_ciudad);

infocliente(A);
infopaquete(P);
infodestinatario(D);

return 0;
}
