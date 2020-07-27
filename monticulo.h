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
	int subatender(int posAct, int utlitmo, int tam);
	void imprimir();
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
int ultimo= lista[tam];
 	
	if(lista[2]>ultimo &&lista[2]>lista[3]){
		lista[1]=lista[2];
		posAct=lista[2];
	while(posAct<tam){
			  subatender(posAct, ultimo, tam);
		}
		tam =-- tam;

	}else if(ultimo>lista[2] && ultimo >lista[3]){

	}else if(ultimo>lista[2] && ultimo >lista[3]){


		lista[1]=ultimo;

	}else if(lista[3]>ultimo && lista[3]>lista[2]){

		lista[1]=lista[3];
		posAct=lista[3];

		while(posAct<tam){
			  subatender(posAct, ultimo, tam);
		}
		tam =-- tam;
	}
}

int Monticulo::subatender(int posAct,int ultimo,int tam){
	
		
	 if(lista[posAct*2] > lista[(posAct*2)+ 1] && lista[(posAct*2)] > ultimo){
	 	
	 		lista[posAct] = lista[posAct*2];
	 		lista[posAct*2] = posAct;
            
	 	    
	 }else if(lista[(posAct*2)+ 1]> lista[posAct*2] && lista[(posAct*2)+ 1]>ultimo){
	 		lista[posAct] = lista[(posAct*2)+ 1];
	 		lista[(posAct*2)+ 1] = posAct;
	 	    
	 	    
	 }else if(ultimo>lista[posAct*2] && ultimo>lista[(posAct*2)+ 1]){
	 		lista[posAct] = ultimo;
	 	    
	 }
tam =-- tam;
}

void Monticulo::imprimir(){	
	cout<<"tamaño: "<<tam<<endl;
	for(int i=1; i<=tam;i++){
		cout<<i<<" valor: "<<lista[i]<<endl;
	}
}


//Hay que hacer estas funciones


#endif
