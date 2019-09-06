//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"
#include <ostream>

Cama::Cama() {
	setCodigo(´ ´);
	setEstado()
}

//Metodos set
void Cama::setCodigo(string codigo) {
	codigo = codigo;
}
void Cama::setEstado(bool estado) {
	estado = estado;
}

//Metodos get
string Cama::getCodigo() const {
	return codigo;
}
bool Cama::setEstado() const {
	return estado;
}
