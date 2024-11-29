#ifndef REGISTRO_H
#define REGISTRO_H

const int MAX=100;

struct tRegistro {
	string codigo;
	char item[MAX];
	double costo;
};
int SIZE=sizeof(tRegistro);

#endif