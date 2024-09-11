//estructura c�clica while
/* escriba un programa que realice la suma de los primeros N n�meros naturales */
#include <iostream>
using namespace std;

int main(){
	int i,n,suma;//declaraci�n de variables: i=contador, suma = acumulador, n = l�mite de cuenta
	cout << "Ingrese la cantidad de numeros naturales a sumar:\nnum = ";
	cin >> n;//lee la cantidad de n�meros a sumar
	suma = 0;//inicializa el acumulador
	i = 1;//inicializa el contador
	//ciclo repetitivo que calcula la suma de los primeros N n�mero naturales
	while(i <= n){//verifica que i es menor o igual al valor de n para continuar sumando
		suma = suma + i;//suma los n�mero naturales
		i++;//incrementa el contador
	}
	cout << "La suma de los primeros " << n << " numeros naturales es: " << suma << endl;
}
