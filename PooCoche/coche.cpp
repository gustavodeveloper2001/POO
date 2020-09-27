#include<iostream>
using namespace std;

class coche{
    private:
        string marca;
        string color;
        int modelo;

    public:
        coche(string, string, int);
        void LeerCarro();
        void encender();
        void acelerar();
        void frenar();
};

coche::coche(string _marca, string _color, int _modelo){
    marca = _marca;
    color = _color;
    modelo = _modelo;
}

void coche::LeerCarro(){
    cout << "Marca: " << marca << endl;
    cout << "color: " << color << endl;
    cout << "Modelo: " << modelo << endl;
}

void coche::encender(){
    cout << "ENCENDIENDO..." << endl;
}

void coche::acelerar(){
    cout << "ACELERANDO..." << endl;
}

void coche::frenar(){
    cout << "FRENANDO..." << endl;
}

int main(){
    coche coche1 = coche("PONTIAC GTO", "ROJO", 67);
    coche1.LeerCarro();
    coche1.encender();
    coche1.acelerar();
    coche1.frenar();

    system("pause");
    return 0;
}