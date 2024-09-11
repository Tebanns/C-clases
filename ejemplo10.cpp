//Ejemplo de declaración, llenado y vaciado de vectores
#include<iostream>
using namespace std;

int main(){
	int vec1[5],i;//declaración de un vector vacío de 5 posiciones 
	int vec2[]={2,3,4,5,6};//declaración de un vector de 5 posiciones con datos incorporados
	for(i=0;i<=4;i++){//ciclo for que recorre almacena valores ingresados por teclado en el vector vec1
		cout << "V1[" << i+1 << "]= ";
		cin >> vec1[i];
	}
	
	for(i=0;i<=4;i++){//ciclo for que recorre y muestra los valores contenido en el vector vec2
		cout << "V2[" << i+1 << "]= " << vec2[i] << endl;
	}
}
