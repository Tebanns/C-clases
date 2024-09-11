/*Escriba un programa en c++ que sume dos valores ingresados por teclado siempre y cuando el primer
valor sea mayor que el segundo en caso contrario que los multiplique */
#include <iostream>
using namespace std;

int main(){
	int valor1, valor2, resultado;//define tres variables enteras valor1, valor2 y resultado
	cout << "Ingrese dos valores" << endl;//mensaje que solicita el ingreso de los valores a sumar
	cout << "valor 1 = ";
	cin >> valor1;//lee valor1 del teclado
	cout << "valor 2 = ";
	cin >> valor2;//lee valor2 del teclado
	/* Dado que hay dos acciones dependiendo de si la condición es verdadera o falsa, 
	la estructura condicional es de tipo doble. */
	if(valor1 > valor2){
		resultado = valor1 + valor2;
		cout << "La suma es: " << resultado << endl;
	} else {
		resultado = valor1 * valor2;
		cout << "El producto es: " << resultado << endl;
	}
}
