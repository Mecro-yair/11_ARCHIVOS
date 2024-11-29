#include <iostream>
#include "registro.h"
#include <fstream>

using namespace std;
int main() {
	bool flag = true;
	tRegistro registro;
	fstream archivo;
	archivo.open("bd.dat", ios::out | ios::binary);
	
	while (flag == true) {
		system("cls");
		cout << "Bienvenido a la escritura de archivos binario\n";
		cout << "Codigo: ";
		cin.sync();
		cin >> registro.codigo;
		cout << "Nombre: ";
		cin.sync();
		cin.getline(registro.item,MAX); 
		cout << "Precio: ";
		cin.sync();
		cin >> registro.costo;
		archivo.write((char *) &registro, SIZE);
		cout << "¿continuar? [S/N] ";
		char respuesta; cin >> respuesta;
		
		if ((respuesta=='N') || (respuesta=='n') ) {
			flag=false;
		}
	}
	archivo.close();
	return 0;
}