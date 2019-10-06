#include <bits/stdc++.h>
using namespace std;

struct nodo{
    int entero;
    nodo *snodo;
    nodo(int newvalor){
    	entero=newvalor;
    	snodo=NULL;
	}
	void ingresar(int newvalor){
    nodo *current=snodo;
    nodo *newnodo=new nodo(newvalor);
    if(current!=NULL) while(current->snodo!=NULL) current=current->snodo;
    if(current==NULL) snodo=newnodo;
    else current->snodo=newnodo;
    }
    void ordenar(int newvalor){
	nodo *current=snodo;
    nodo *newnodo=new nodo(newvalor);
    nodo *before=this;
	if(current==NULL){
	before->snodo=newnodo;
    return;
    }else while(current!=NULL && newvalor>current->entero){
        before=current;
        current=current->snodo;
    }
    newnodo->snodo=before->snodo;
	before->snodo=newnodo;
    }
    void mostrar(){
    nodo *current=snodo;
    while(current!=NULL){
    cout<<current->entero<<endl;
    current=current->snodo;
        }
    }
};
nodo l1(3);

int main()
{
	int opcion;
	do{
		system("cls");
		cout<<"Ingresa la opcion que deseas realizar"<<endl;
		cout<<"1.- Ingresar datos"<<endl;
		cout<<"2.- Mostrar datos"<<endl;
		cout<<"3.- Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		switch(opcion){
		
		case 1:	
		int newvalor;
		cout<<"Ingresar datos\n";
		cin>>newvalor;
		l1.ordenar(newvalor);
		break;
		case 2:
		cout<<"Los valores son: "<<endl;
		l1.mostrar();
		system("pause");	
		break;
		case 3:
		cout<<"Gracias por usar el programa"<<endl;
		break;	
	    }
	}while(opcion!=4);
	
	 return 0;
}


