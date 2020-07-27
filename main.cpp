#include <iostream>
#include "monticulo.h"

using namespace std;

int main(int argc, char *argv[]){
	
	Monticulo lista(7);
	//Insertar
	lista.insertar(100);
	lista.insertar(90);
	lista.insertar(80);
	lista.insertar(110);
	lista.insertar(95);
	lista.insertar(120);
	lista.insertar(130);
	lista.imprimir();
	cout<<"atender"<<endl;
	lista.atender();
	lista.imprimir();
}
	
	
	



