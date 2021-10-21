#include "converter.hpp"
#include <iostream>
#include <math.h>
using namespace std;

void converter::suma(int cantidad) {
	cout << "Venta comisionable : " << cantidad << " a Venta total : " <<cantidad * 1.16 << endl;
}

void converter::resta(int cantidad) {
	cout << "Venta total : " << cantidad << " a Venta comisionable : " <<cantidad / 1.16 << endl;
}

void converter::checkRegalos(int cantidad) {
	//Variables que se deberan cambiar al avance de los catalogos
	int DET1 = 1500, DET2 = 2500;
	int RB = 2550, RBE = 2750;
	int REA = 4050, NES = 4700;
	cout << "Venta total : " << cantidad << endl;

	if (cantidad >= RB) {
		cout << "Regalo Base Disponible" << endl;
	}
	if (cantidad < RB) {
		cout << "Regalo Base no Disponible" << endl;
	}

	if (cantidad >= RBE) {
		cout << "Regalo Adicional Disponible" << endl;
	}
	if (cantidad < RBE) {
		cout << "Regalo Adicional no Disponible" << endl;
	}

	if (cantidad >= REA) {
		cout << "Primer Nivel Disponible" << endl;
	}
	if (cantidad < REA) {
		cout << "Primer Nivel no Disponible" << endl;
	}
	
	if (cantidad >= DET2) {
		cout << "Detonador Mayor Disponible" << endl;
	}
	else if (cantidad >= DET1) {
		cout << "Detonador Menor Disponible" << endl;
	}
	else {
		cout << "Detonador no Disponible" << endl;
	}
}

void converter::ayuda() {
	cout << "-a | a | ayuda >>Muestra el Mensaje de Ayuda." << endl;
	cout << "-s | s | suma >>Sumar el IVA a la cantidad de venta Comisionable." << endl;
	cout << "-r | r | resta >>Restar el IVA a la cantidad de venta total." << endl;
	cout << "-c | c | comprobar >>Comprueba que regalos tiene disponibles con la cantidad TOTAL." << endl;
}
