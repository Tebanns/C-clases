//estructura cíclica for
/* escriba un programa que realice la suma de los primeros 10 números naturales */
#include <iostream>
using namespace std;

int main(){
	int i,suma;//declaración de variables: i=contador, suma=acumulador
	suma = 0;//el acumulador sumativo se inicializa en 0
	for(i=1;i<=10;i++){//i++ equivale a i = i+1
		suma = suma + i;
	}
	cout << "La suma de los primeros 10 numeros naturales es: " << suma << endl;
}
