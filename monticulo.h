#ifndef MONTICULO_H
#define MONTICULO_H
#include <iostream>
using namespace std;

struct Nodo{
	int prioridad;	
};


class Monticulo{
	int *Arr;
	int tam, posAct = 1;
	int lista[];
	
	public: Monticulo(int tamano){
		tam = tamano;
		int lista[tam];		
	}
	
	void insertar(int prioridad);
	int atender();
	void imprimir();
	bool monticulo_lleno();	
};

void Monticulo::insertar(int prioridad){
	int aux;
	if(posAct == 1){
		lista[posAct] = prioridad;
		posAct = posAct + 1;
	}
	else if(prioridad < lista[(posAct/2)]){
		lista[posAct] = prioridad;
		posAct = posAct + 1;
	}
	else{ //Si prioridad es mayor a posAct
		aux = posAct; //auxiliar con la posAct otiginal
		while(prioridad > lista[(aux/2)]){ //Mientras que prioridad sea mayor a posAct			
			lista[aux] = lista[(aux/2)]; //Poner en posAct al padre
			lista[(aux/2)] = prioridad; //ponemos en la posicion padre a la prioridad
			aux = aux/2;
		}
		posAct = posAct + 1;			
	}	
}

int Monticulo::atender(){
//Hay que hacer estas funciones
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

void Monticulo::imprimir(){	
	cout<<"tamaño: "<<tam<<endl;
	for(int i=1; i<=tam;i++){
		cout<<i<<" valor: "<<lista[i]<<endl;
	}
}

bool Monticulo::monticulo_lleno(){	
}
//Hay que hacer estas funciones


#endif
