/* EJERCICIO 3: Realice un programa en C++. de tal manera que se construya
una solucion para la jerarquia (herencia) de clases mostrada en la siguiente texto:
Persona -->  Empleado y Estudiante --> Universitario */

#include<iostream>
#include<stdlib.h>
using namespace std;

//clase padre
class Persona {
	private:
		string nombrePersona;
		string curp;
		int edadPersona;
		
	public:
		Persona(string, string, int);
		void mostrarPersona();
};

/* clase hija */
class Empleado : public Persona{ /*accede a todo lo publico de la clase persona (public)*/
	private:
		string empresaEmpleado;
		string cargoEmpleado;
		float sueldoEmpleado;
		
	public:
		Empleado(string, string, int, string, string, float);
		void mostrarEmpleado();
};

/* clase padre- hija */
class Estudiante : public Persona {
	private:
		string escuelaProcedencia;
		string ciudad;
		float promedioAnterior;
		
	public:
		Estudiante(string, string, int, string, string, float);
		void mostrarEstudiante();
};


/*Clase hija*/
class Universitario : public Estudiante {
	private:
		string carrera;
		string universidad;
		string campus;
		int semestre;
		
	public:
		Universitario(string, string, int, string, string, float, string, string, string, int);
		void mostrarUniversitario();
};

Persona::Persona(string _nombrePersona, string _curp, int _edadPersona){
	nombrePersona = _nombrePersona;
	curp = _curp;
	edadPersona = _edadPersona;
}

Empleado::Empleado(string _nombrePersona, string _curp, int _edadPersona, string _empresaEmpleado, string _cargoEmpleado, float _sueldoEmpleado) : Persona(_nombrePersona, _curp, _edadPersona) {
	empresaEmpleado = _empresaEmpleado;
	cargoEmpleado = _cargoEmpleado;
	sueldoEmpleado = _sueldoEmpleado;
}

Estudiante::Estudiante(string _nombrePersona, string _curp, int _edadPersona, string _escuelaProcedencia, string _ciudad, float _promedioAnterior) : Persona(_nombrePersona, _curp, _edadPersona){
	escuelaProcedencia = _escuelaProcedencia;
	ciudad = _ciudad;
	promedioAnterior = _promedioAnterior;
}

Universitario::Universitario(string _nombrePersona, string _curp, int _edadPersona, string _escuelaProcedencia, string _ciudad, float _promedioAnterior, string _carrera, string _universidad, string _campus, int _semestre) : Estudiante(_nombrePersona, _curp, _edadPersona,_escuelaProcedencia, _ciudad, _promedioAnterior){
	carrera = _carrera;
	universidad = _universidad;
	campus = _campus;
	semestre = _semestre;
}

void Persona::mostrarPersona() {
	cout << "Nombre: " << nombrePersona << endl;
	cout << "CURP: " << curp << endl;
	cout << "Edad: " << edadPersona << endl;
}

void Empleado::mostrarEmpleado(){
	cout << "*************************Empleado*************************" << endl;
	mostrarPersona();
	cout << "Empresa: " << empresaEmpleado << endl;
	cout << "Cargo: " << cargoEmpleado << endl;
	cout << "Sueldo: " << sueldoEmpleado << endl;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout << "Bachillerato de Procedencia: " << escuelaProcedencia << endl;
	cout << "Ciudad: " << ciudad << endl;
	cout << "Promedio de bachillerato: " << promedioAnterior << endl;
}

void Universitario::mostrarUniversitario(){
	cout << "\n*************************Estudiante*************************" << endl;
	mostrarEstudiante();
	cout << "Carrera: " << carrera << endl;
	cout << "Universidad o Instituto: " << universidad << endl;
	cout << "Campus: " << campus << endl;
	cout << "Semestre que cursa: " << semestre << endl;
}

int main(){
	Empleado empleado1("Juan Perez Perez", "PPJ020594HVZUEUE2", 24, "MICROSOFT", "SOFTWARE ENGINNER", 123.000);
	empleado1.mostrarEmpleado();
	
	Universitario universitario1("Gustavo A. Vasquez D.", "VADG010126HVZSMSA2", 18, "CETIS 145", "MARTINEZ DE LA TORRE", 9.0, "INGENIERIA DE SOFTWARE", "BENEMERITA UNIVERSIDAD AUTONOMA DE PUEBLA (BUAP)" , " FCC, PUEBLA", 4);
	universitario1.mostrarUniversitario();
	
	
	system ("pause");
	return 0;
}
