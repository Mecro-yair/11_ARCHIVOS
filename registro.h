#ifndef REGISTRO_H 
#define REGISTRO_H

struct tRegistro{
	int codigo;
	char item[MAX];
	double valor;
};
int SIZE = sizeof(tRegistro);

#endif 