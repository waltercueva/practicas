#include <iostream>
#include "ArregloCelular.hpp"
using namespace std;
int main() {
	short opcion;
	long nro;
	
	SArregloCelulares* arreglo = new SArregloCelulares();
	char continua = 'S';
	do {
		cout << "Menu" << endl;
		cout << "1.-Insertar" << endl;
		cout << "2-Mostrar" << endl;
		cout << "3-Salir" << endl;
		cin >> opcion;
		if (opcion == 1)
		{
			do {
				char* marca = new char[10];
				SCelular* celular;
				cout << "Ingrese Marca" << endl;
				cin >> marca;
				cout << "Ingrese Nro" << endl;
				cin >> nro;
				celular = new SCelular(nro, marca);
				arreglo->insertar(celular);
				cout << "Desea continuar (s/n)" << endl;
				cin >> continua;
			} while (continua == 'S' || continua == 's');
		}
		else if (opcion == 2)
			for (int i = 0; i<arreglo->longitud(); ++i) {
				cout << arreglo->recuperar(i)->nro << " " << arreglo->recuperar(i)->marca << endl;
			}
	} while (opcion != 3);
	system("pause");
	return 0;
}
