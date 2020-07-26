#ifndef MONTICULO_H
#define MONTICULO_H
#include <iostream>
using namespace std;


class Monticulo{
	int *Arr;
	int tam, posAct;
	
	public: Monticulo(int nodo){
	}
	
	void insertar(int nodo);
	int atender(int *Arr, int tam,int posAct);
	void imprimir();
	bool monticulo_lleno();
	
};
//
int subatender(int *Arr, int posAct,int ultimo,int tam){
	 if(*(Arr+posAct*2)>*(Arr+posAct*2+1) && *(Arr+posAct*2)>ultimo){
	 	
            *(Arr+posAct)=*(Arr+posAct*2);
	 	    *(Arr+posAct*2)=posAct;
	 	    
	 }else if(*(Arr+posAct*2+1)>*(Arr+posAct*2) && *(Arr+posAct*2+1)>ultimo){
	 	
	 	    *(Arr+posAct)=*(Arr+posAct*2+1);
	 	    *(Arr+posAct*2+1)=posAct;
	 	    
	 }else if(ultimo>*(Arr+posAct*2) && ultimo>*(Arr+posAct*2+1)){
	 	
	 	    *(Arr+posAct)=ultimo;
	 }
tam =-- tam;
	}
void Monticulo::insertar(int nodo){	
//Hay que hacer estas funciones
}
int Monticulo::atender(int *Arr, int tam, int posAct){
	int ultimo= *(Arr+tam);
 	
	if(*(Arr+2)>ultimo &&*(Arr+2)>*(Arr+3)){
		*(Arr)=*(Arr+2);
		posAct=*(Arr+2);
	while(posAct<tam){
             int subatender(int *Arr, int posAct,int ultimo,int tam);
	}
	}else if(ultimo>*(Arr+2) && ultimo >*(Arr+3)){

		*(Arr)=ultimo;

	}else if(*(Arr+3)>ultimo &&*(Arr+3)>*(Arr+2)){

		*(Arr)=*(Arr+3);
		posAct=*(Arr+3);

		while(posAct<tam){
			 int subatender(int *Arr, int posAct,int ultimo,int tam);
	}
}
}

void Monticulo::imprimir(){	
//Hay que hacer estas funciones
}

bool Monticulo::monticulo_lleno(){	
}
//Hay que hacer estas funciones


#endif
