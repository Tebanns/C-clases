//Ejemplo de declaración, llenado y vaciado de matrices
#include<iostream>
using namespace std;

int main(){
	int Mat1[2][2],i,j;//declaración de un vector vacío de 5 posiciones 
	int Mat2[][2]={{2,3},{4,5}};//declaración de un vector de 5 posiciones con datos incorporados
	//ciclo for que recorre y almacena valores ingresados por teclado en la matriz Mat1
	for(i=0;i<=1;i++){//recorrido de filas
		for(j=0;j<=1;j++){//recorrido de columnas
			cout << "M1[" << i+1 << "][ " << j+1 << "]= ";
			cin >> Mat1[i][j];
		}
	}
	//ciclo for que recorre y muestra los valores contenidos en la matriz Mat2
	for(i=0;i<=1;i++){//recorrido de filas
		for(j=0;j<=1;j++){//recorrido de columnas
			cout << "M2[" << i+1 << "][ " << j+1 << "]= " << Mat2[i][j] << endl;
		
		}
	}

}
