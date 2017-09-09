#ifndef __CELULAR_HPP__
#define __CELULAR_HPP__
struct SCelular {
	long nro;
	char* marca;
	SCelular(long nro, char* marca) {
		this->nro = nro;
		this->marca = marca;
	}
	SCelular() {
		nro = 0;
		marca = new char[10];
	}
};

#endif // !__CELULAR_HPP__

