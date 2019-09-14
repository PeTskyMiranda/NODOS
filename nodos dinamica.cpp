#include <bits/stdc++.h>
using namespace std;

struct nodo{
    int entero;
    nodo *snodo;
    nodo(int valor1){
    	entero=valor1;
    	snodo=NULL;
	}

};

int main(int argc, char ** argv){
	nodo *inicio;
	nodo *aux;
	inicio=NULL;
	aux=new nodo(0);
	
	cout<<"Valores en los nodos"<<endl;
	aux->entero=3;
	aux->snodo=NULL;
	cout<<aux->entero<<endl;
	inicio=aux;
	
	aux= new nodo(0);
	aux->entero=5;
	aux->snodo=NULL;
	cout<<aux->entero<<endl;
	inicio->snodo=aux;
	
	aux=new nodo(0);
	aux->entero=12;
	aux->snodo=NULL;
	cout<<aux->entero<<endl;
	inicio->snodo->snodo=aux;
	
	aux=new nodo(0);
	aux->entero=35;
	aux->snodo=NULL;
	cout<<aux->entero<<endl;
	inicio->snodo->snodo->snodo=aux;
	
	aux=new nodo(0);
	aux->entero=64;
	aux->snodo=NULL;
	cout<<aux->entero<<endl;
	inicio->snodo->snodo->snodo->snodo=aux;
	
	aux=new nodo(0);
	aux->entero=89;
	aux->snodo=NULL;
	cout<<aux->entero<<endl;
	inicio->snodo->snodo->snodo->snodo->snodo=aux;
	
	cout<<"Enlaces"<<endl;
	cout<<inicio->entero<<endl;
	cout<<inicio->snodo->entero<<endl;
	cout<<inicio->snodo->snodo->entero<<endl;
	cout<<inicio->snodo->snodo->snodo->entero<<endl;
	cout<<inicio->snodo->snodo->snodo->snodo->entero<<endl;
	cout<<inicio->snodo->snodo->snodo->snodo->snodo->entero<<endl;
	
    return 0;

}
