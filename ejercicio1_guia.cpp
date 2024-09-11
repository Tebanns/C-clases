/*Elabore un programa en lenguaje C++ que calcule el área y el perímetro de
figuras geométricas como triángulo, cuadrado, rectángulo y círculo.
El programa debe presentar un menú de selección y debe crear una función
para el cálculo de cada una de las figuras. El menú también debe ser una
función.*/
#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
#define PI 3.1415926536
int main(){
	setlocale(LC_CTYPE,"Spanish");
	int flag,op,a,b,c,area,perimetro;
	float r,areac,perimetroc;
	cout << "Este programa le permite calcular el área y el perímetro de las figuras geométricas que se detallan a continuación:" << endl;
	cout << "\n\n1. Cuadrado\n2. Rectángulo\n3. Triángulo\n4. Círculo\nOtro. Salir" << endl;
	cout << "\nIngrese su opción: ";
	
	cin >> op;
	while(op > 0){
		//if(op == 5){
		//	break;
		//}
		if(op > 5){
			cout << "Opción no válida, ingrese nuevamente su elección:";
			cin >> op;
			}
		switch(op){
			case 1:
				cout << "Ingrese el valor del lado del cuadrado:\na = ";
				cin >> a;
				area = a * a;
				perimetro = 4 * a;
				cout << "El área del cuadrado es: " << area << " y su perímetro es: " << perimetro << endl;
				break;
			case 2:
				cout << "Ingrese el valor de los lados del rectángulo:\na = ";
				cin >> a;
				cout << "b = ";
				cin >> b;
				area = a * b;
				perimetro = 2 * a + 2 * b;
				cout << "El área del rectángulo es: " << area << " y su perímetro es: " << perimetro << endl;
				break;
			case 3:
				cout << "Ingrese el valor de los lados del triángulo:\na = ";
				cin >> a;
				cout << "b = ";
				cin >> b;
				cout << "c = ";
				cin >> c;
				perimetro = a +b +c;
				area = sqrt(perimetro / 2 * (perimetro / 2 - a) * (perimetro / 2 - b) * (perimetro / 2 - c));
				cout << "El área del triángulo es: " << area << " y su perímetro es: " << perimetro << endl;
				break;
			case 4:
				cout << "Ingrese el valor del radio del círculo:\nr = ";
				cin >> r;
				areac = PI * r * r;
				perimetroc = 2* PI * r;
				cout << "El área del cuadrado es: " << areac << " y su perímetro es: " << perimetroc << endl;
				break;
			default:
				break;		
			}
			cout << "\n\n1. Cuadrado\n2. Rectángulo\n3. Triángulo\n4. Círculo\nOtro. Salir" << endl;
			cout << "\nPara comtinuar ingrese su opción: ";
			cin >> op;
	}
	cout << "Gracias por utilizar nuestro programa.\n\t   ¡Hasta pronto!\n\n" << endl;
	
	cout << "\nPresione cualquier tecla para salir\n";
	flag = getc(stdin);
}
