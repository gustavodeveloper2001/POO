#include<iostream>
using namespace std;

class Smartphone {
    private:
        string marca;
        string color;
        string modelo;
        int voltaje;

    public:
        Smartphone(string, string, string, int);
        void encenderSmart();
        void cargarSmart();
        void llamarSmart();
        void mensajesSmart();
        void apagarSmart();
};

Smartphone::Smartphone(string _marca, string _color, string _modelo, int _voltaje) {
    marca = _marca;
    color = _color;
    modelo = _modelo;
    voltaje = _voltaje;
}

void Smartphone::encenderSmart() {
    cout << "ENCENDIENDO...\n" << endl;
    cout << marca << endl;
    cout << modelo << endl;
    cout << "POWERED BY ANDROID" << endl;
}

void Smartphone::cargarSmart() {
    cout << "\nCARGANDO DISPOSITIVO A LA CORRIENTE..." << endl;
}

void Smartphone::llamarSmart() {
    cout << "\nDIJITE EL NUMERO PARA LLAMAR..." << endl;
    cout << "LLAMANDO..." << endl;
    cout << "FIN DE LA LLAMADA" << endl;
}

void Smartphone::mensajesSmart() {
    cout << "\nELIJA SU CONTACTO..." << endl;
    cout << "ESCRIBA EL MENSAJE..." << endl;
    cout << "ENVIANDO..." << endl;
    cout << "ENVIADO O ERROR..." << endl;
}

void Smartphone::apagarSmart() {
    cout << "\nAPAGANDO EL DISPOSITIVO..." << endl;
    cout << marca << endl;
    cout << modelo << endl;
}

int main() {
    Smartphone android1("motorola", "NEGRO", "moto C plus", 3000);
    android1.encenderSmart();
    android1.cargarSmart();
    android1.llamarSmart();
    android1.mensajesSmart();
    android1.apagarSmart();

    system("pause");
    return 0;
}