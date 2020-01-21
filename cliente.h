#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Cliente {
    string name;
    string adress;
    string phone;
    public:
        Cliente();
        Cliente(string name, string adress, string phone);
        void setName(string name);
        void setAdress (string adress);
        void setPhone (string phone);
        string getname();
        string getadress();
        string getphone();
};


#endif // CLIENTE_H_INCLUDED
