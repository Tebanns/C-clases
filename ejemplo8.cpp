//estructura c�clica do
/* escriba un programa que realice la suma de los primeros N n�meros naturales */
#include <iostream>
#include <locale.h>//biblioteca que incorpora caracteres especiales

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");//funci�n de setlocale que habilita los caracteres especiales del espa�ol
	int i,n,suma;//declaraci�n de variables: i=contador, suma = acumulador, n = l�mite de cuenta
	cout << "Ingrese la cantidad de n�meros naturales a sumar:\nnum = ";
	cin >> n;//lee la cantidad de n�meros a sumar
	suma = 0;//inicializa el acumulador
	i = 1;//inicializa el contador
	//ciclo repetitivo que calcula la suma de los primeros N n�mero naturales
	do{//verifica que i es menor o igual al valor de n para continuar sumando
		suma = suma + i;//suma los n�mero naturales
		i++;//incrementa el contador
	}while(i <= n);
	cout << "La suma de los primeros " << n << " n�meros naturales es: " << suma << endl;
}
