//estructura cíclica while
/* escriba un programa que realice la suma de los primeros N números naturales */
#include <iostream>
using namespace std;

int main(){
	int i,n,suma;//declaración de variables: i=contador, suma = acumulador, n = límite de cuenta
	cout << "Ingrese la cantidad de numeros naturales a sumar:\nnum = ";
	cin >> n;//lee la cantidad de números a sumar
	suma = 0;//inicializa el acumulador
	i = 1;//inicializa el contador
	//ciclo repetitivo que calcula la suma de los primeros N número naturales
	while(i <= n){//verifica que i es menor o igual al valor de n para continuar sumando
		suma = suma + i;//suma los número naturales
		i++;//incrementa el contador
	}
	cout << "La suma de los primeros " << n << " numeros naturales es: " << suma << endl;
}
