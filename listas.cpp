#include <iostream>
#include <conio.h>
using namespace std;


struct Nodo{
	int valor;
	Nodo *ptr;
};
void agregar( int);
void mostrar();
struct Nodo *lista=NULL;

int main(int argc, char** argv) {
	int opcion, add;
	while(opcion!=3){
	
	cout<<"MENU"<<endl;
	cout<<"1. Llenar los Nodos"<<endl;
	cout<<"2. Mostar Datos de los Nodos"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>opcion;
	switch (opcion){
        case 1:
        	cout<<"Llenado de los Nodos"<<endl;
        	cin>>add;
        	cout<<endl;
        	agregar(add);
        	
			break;
        case 2:
            cout<<"Mostrar los datos de los Nodos ";
            cout<<endl;
            mostrar();
            break;
        case 3:
        	cout<<"Salir";
        default:
            cout<<"Gracias"<<endl;
            break;
    }
}
	
	 return 0;
}
void agregar(int add)
{
	Nodo *nuevo= new Nodo;
	nuevo->ptr=NULL;
	nuevo->valor=add;
	if(lista==NULL)lista=nuevo;
	else{
		Nodo *aux=lista;
		while(aux->ptr!=NULL){
			aux=aux->ptr;
		}
		aux->ptr=nuevo;
		//lista->ptr=nuevo;
	}
	//cout<<lista->valor<<" "<<endl;
}
void mostrar(){
	Nodo *aux=lista;
	while(aux!=NULL){
		cout<<aux->valor<<" ";
		aux=aux->ptr;
	}
	cout<<endl;
}
