#include<iostream>
#include<stdlib.h>
using namespace std;

class Vehiculo {
	private:
		string marca;
		int matricula;
		string color;
		
	public:
		Vehiculo(string, int, string);
		void mostrarVehiculo();
};

class Deportivo : public Vehiculo {
	private:
		string potencia;
		string area;
	
	public:
		Deportivo(string, int, string, string, string);
		void mostrarDeportivo();
};

class Comercial : public Vehiculo {
	private:
		string tipo;
		int numeroPasajeros;
		int ruta;
		
	public:
		Comercial(string, int, string, string, int, int);
		void mostrarComercial();
};

class Personal : public Vehiculo {
	private:
		int licencia;
		string persona;
		int anio;
		
	public:
		Personal(string, int, string, int, string, int);
		void mostrarPersonal();
};

Vehiculo::Vehiculo(string _marca, int _matricula, string _color) {
	marca = _marca;
	matricula = _matricula;
	color = _color;
}

Deportivo::Deportivo(string _marca, int _matricula, string _color, string _potencia, string _area) : Vehiculo(_marca, _matricula, _color) {
	potencia = _potencia;
	area = _area;
}

Comercial::Comercial(string _marca, int _matricula, string _color, string _tipo, int _numeroPasajeros, int _ruta) : Vehiculo(_marca, _matricula, _color) {
	tipo = _tipo;
	numeroPasajeros = _numeroPasajeros;
	ruta = _ruta;
}

Personal::Personal(string _marca, int _matricula, string _color, int _licencia, string _persona, int _anio) : Vehiculo(_marca, _matricula, _color) {
	licencia = _licencia;
	persona = _persona;
	anio = _anio;
}

void Vehiculo::mostrarVehiculo() {
	cout << "La marca dl vehiculo es: " << marca << endl;
	cout << "Matricula: " << matricula << endl;
	cout << "Color: " << color << endl;
}

void Deportivo::mostrarDeportivo() {
	cout << "\n*********************************************************************" << endl;
	cout << "*                              Deportivo                            *" << endl;
	cout << "*********************************************************************" << endl;
	mostrarVehiculo();
	cout << "Potencia del Vehiculo: " << potencia << endl;
	cout << "Area de Carreras: " << area << endl;
}

void Comercial::mostrarComercial() {
	cout << "\n*********************************************************************" << endl;
	cout << "*                              Comercial                            *" << endl;
	cout << "*********************************************************************" << endl;
	mostrarVehiculo();
	cout << "Especifique el tipo de comercio: " << tipo << endl;
	cout << "Especifique el numero maximo de pasajeros: " << numeroPasajeros << endl;
	cout << "Especifique la ruta del vehiculo: " << ruta << endl;
}

void Personal::mostrarPersonal() {
	cout << "\n*********************************************************************" << endl;
	cout << "*                               Personal                            *" << endl;
	cout << "*********************************************************************" << endl;
	mostrarVehiculo();
	cout << "Licencia del vehiculo: " << licencia << endl;
	cout << "Nombre del duenio del vehiculo: " << persona << endl;
	cout << "Anio de compra: " << anio << endl;
}

int main() {
	Deportivo sport1("Chevrolet", 1234567890, "rojo", "160 K/H", "Nascar");
	sport1.mostrarDeportivo();
	
	Comercial comercial1("Nissan Tsuru", 1115554440, "Blanco con Rojo", "Taxi", 4, 64);
	comercial1.mostrarComercial();
	
	Personal personal1("Ferrari", 2019001478, "Negro", 2016789654, "Gustavo Alberto Vasquez Damaso", 2019);
	personal1.mostrarPersonal();
	
	system("pause");
	return 0;
}
