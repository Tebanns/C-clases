/* Diseñe un programa que realice las cuatro operaciones aritméticas básicas con dos valores ingresados 
por teclado. La elección de la operación a realizar debe ser seleccionada por el usuario mediante un 
menú de opciones */
#include<iostream>
using namespace std;

int main(){
	//declaración de variables
	float num1,num2,resultado;
	int opcion;
	cout << "Este programa es una calculadora basica" << endl;
	cout << "Elija la operacion a realizar: " << endl;
	cout << "1: Suma \n2: Resta \n3: Multiplicacion \n4: Division \nOtro: Salir\nOpcion: ";
	cin >> opcion;
	switch(opcion){
		case 1:
			cout << "Ingrese los valores a operar:\nN1 = ";
			cin >> num1;
			cout << "N2 = ";
			cin >> num2;
			resultado = num1 + num2;
			cout << "La suma es: " << resultado << endl;
			break;
		case 2:
			cout << "Ingrese los valores a operar:\nN1 = ";
			cin >> num1;
			cout << "N2 = ";
			cin >> num2;
			resultado = num1 - num2;
			cout << "La resta es: " << resultado << endl;
			break;
		case 3:
			cout << "Ingrese los valores a operar:\nN1 = ";
			cin >> num1;
			cout << "N2 = ";
			cin >> num2;
			resultado = num1 * num2;
			cout << "El producto es: " << resultado << endl;
			break;
		case 4:
			cout << "Ingrese los valores a operar:\nN1 = ";
			cin >> num1;
			cout << "N2 = ";
			cin >> num2;
			resultado = num1 / num2;
			cout << "El cociente es: " << resultado << endl;
			break;
		default:
			cout << "Gracias por utilizar nuestro programa." << endl;
			break;
	}
}
