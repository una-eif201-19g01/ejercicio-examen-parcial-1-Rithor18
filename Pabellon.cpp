//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Pabellon.h"
#include <ostream>

Pabellon::Pabellon() {
	setId(´ ´);
	setGenero(´ ´);
	setCantidad(0);
	setTamano(0);

}

Pabellon::Pabellon(char id, char genero, int tamaño) : id(id), genero(genero), tamañ(tamaño){
	cantidad = 0;
	cama = new Cama*[tamano];
}

Pabellon::Pabellon(){
	delete[] cama;
}

	//Metodos set
void Pabellon::setId(char id){
	id = id;
}
void Pabellon::setGenero(char genero) {
	genero = genero;
}
void Pabellon::setTamano(int tamano) {
	tamano = tamano;
}
void Pabellon::setCantidad(int cantidad) {

}
	//Metodos get
char Pabellon::getId() const {
	return id;
}
char Pabellon::getGenero() const {
	return genero;
}
int Pabellon::getTamano()const {
	return tamano;
}
int Pabellon::getCantidad()const {
	return cantidad;
}

//Metodos
