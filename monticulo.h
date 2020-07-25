#ifndef MONTICULO_H
#define MONTICULO_H
#include <iostream>
using namespace std;


template<class T>
class Lista{
	int *Arr;
	int tam, posAct;
	
	public: Monticulo(int nodo){
	}
	
	void insertar(int nodo);
	int atender();
	void imprimir();
	bool monticulo_lleno();
	
};


#endif
