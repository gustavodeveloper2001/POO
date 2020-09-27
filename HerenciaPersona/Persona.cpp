#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona {
	private:
		string nombre;
		int edad;
		
	public:
		Persona(string, int);
		void mostrarPersona();
};

//accede a todo lo publico de la clase persona (public)
class Alumno : public Persona {
	private:
		string curp;
		string escuela;
		float notaFinal;
		
	public:
		Alumno(string, int, string, string, float);
		void mostrarAlumno();
};

Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, string _curp, string _escuela, float _notaFinal) : Persona(_nombre, _edad) {
	curp = _curp;
	escuela = _escuela;
	notaFinal = _notaFinal;
}

void Persona::mostrarPersona() {
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

void Alumno::mostrarAlumno() {
	mostrarPersona();
	cout << "CURP: " << curp << endl;
	cout << "Universidad o Instituto: " << escuela << endl;
	cout << "Nota Final: " << notaFinal << endl;
}

int main() {
	Alumno alumno1("Gustavo", 18, "VADG010126HVZSMSA2", "Benemerita Universidad Autonoma de Puebla (BUAP)", 10.0);
	alumno1.mostrarAlumno();
	
	system("pause");
	return 0;
}
