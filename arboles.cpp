#include<iostream>
using namespace std;

struct nodo{
	int dato;
	nodo * dere;
    nodo *izq;	
};
void menu();
nodo* crearNodo(int);
void insertar( nodo * &arbol,int dato);
nodo * arbol = NULL;

int main(){
	menu();
	
	return 0;
}


void menu(){
	int dato, opcion;
	do{
		cout<<"\n|-------------------------------|";
		cout<<"\n|            MENÚ               |";
		cout<<"\n|-------------------------------|";
		cout<<"\n|1 INSERTAR  | 2 SALIR          |";
		cout<<"\n|-------------------------------|";
        cout<<"\nOPCION: ";
        cin>>opcion;
        
        switch(opcion){
        	case 1 : cout<<"\n Digite un numero: ";
        	cin>>dato;
        	insertar(arbol,dato);
        	break;
		}
		
	}while(opcion != 2 );
	
	
	
}
nodo * crearNodo(int valor){
	nodo *nuevo_nodo = new nodo();
	
	nuevo_nodo->dato = valor;
	nuevo_nodo->dere = NULL;
	nuevo_nodo->izq  = NULL;
	
	return nuevo_nodo;
}


void insertar( nodo * &arbol,int numero){
	if (arbol==NULL){
		nodo *nuevo_nodo =crearNodo(numero);
		arbol= nuevo_nodo;
    
		}else{
		int valor = arbol->dato;
		if(numero < valor ){
			insertar(arbol->izq, numero);
		
		}else{
			insertar(arbol->dere, numero);
		}
		}
			
}


