//estructura cíclica do
/* escriba un programa que realice la suma de los primeros N números naturales */
#include <iostream>
#include <locale.h>//biblioteca que incorpora caracteres especiales

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");//función de setlocale que habilita los caracteres especiales del español
	int i,n,suma;//declaración de variables: i=contador, suma = acumulador, n = límite de cuenta
	cout << "Ingrese la cantidad de números naturales a sumar:\nnum = ";
	cin >> n;//lee la cantidad de números a sumar
	suma = 0;//inicializa el acumulador
	i = 1;//inicializa el contador
	//ciclo repetitivo que calcula la suma de los primeros N número naturales
	do{//verifica que i es menor o igual al valor de n para continuar sumando
		suma = suma + i;//suma los número naturales
		i++;//incrementa el contador
	}while(i <= n);
	cout << "La suma de los primeros " << n << " números naturales es: " << suma << endl;
}
