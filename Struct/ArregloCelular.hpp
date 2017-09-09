#include "Celular.hpp"
#ifndef __ARREGLOCELULAR_HPP__
#define __ARREGLOCELULAR_HPP__
struct SArregloCelulares {
	SCelular** lista;
	short indice;
	short capacidad;
	SArregloCelulares() {
		capacidad = 10;
		lista = new SCelular*[capacidad];
		indice = -1;
	}
	void insertar(SCelular* c) {
		indice++;
		if (indice <= capacidad)
			lista[indice] = c;
	}
	short longitud() {
		return indice + 1;
	}
	SCelular* recuperar(short pos) {
		if (pos >= 0 && pos <= indice)
			return lista[pos];
		else return nullptr;
	}
};
#endif // !__ARREGLOCELULAR_HPP__

