/*Elabore un programa en lenguaje C++ que calcule el �rea y el per�metro de
figuras geom�tricas como tri�ngulo, cuadrado, rect�ngulo y c�rculo.
El programa debe presentar un men� de selecci�n y debe crear una funci�n
para el c�lculo de cada una de las figuras. El men� tambi�n debe ser una
funci�n.*/
#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
#define PI 3.1415926536
int main(){
	setlocale(LC_CTYPE,"Spanish");
	int flag,op,a,b,c,area,perimetro;
	float r,areac,perimetroc;
	cout << "Este programa le permite calcular el �rea y el per�metro de las figuras geom�tricas que se detallan a continuaci�n:" << endl;
	cout << "\n\n1. Cuadrado\n2. Rect�ngulo\n3. Tri�ngulo\n4. C�rculo\nOtro. Salir" << endl;
	cout << "\nIngrese su opci�n: ";
	
	cin >> op;
	while(op > 0){
		//if(op == 5){
		//	break;
		//}
		if(op > 5){
			cout << "Opci�n no v�lida, ingrese nuevamente su elecci�n:";
			cin >> op;
			}
		switch(op){
			case 1:
				cout << "Ingrese el valor del lado del cuadrado:\na = ";
				cin >> a;
				area = a * a;
				perimetro = 4 * a;
				cout << "El �rea del cuadrado es: " << area << " y su per�metro es: " << perimetro << endl;
				break;
			case 2:
				cout << "Ingrese el valor de los lados del rect�ngulo:\na = ";
				cin >> a;
				cout << "b = ";
				cin >> b;
				area = a * b;
				perimetro = 2 * a + 2 * b;
				cout << "El �rea del rect�ngulo es: " << area << " y su per�metro es: " << perimetro << endl;
				break;
			case 3:
				cout << "Ingrese el valor de los lados del tri�ngulo:\na = ";
				cin >> a;
				cout << "b = ";
				cin >> b;
				cout << "c = ";
				cin >> c;
				perimetro = a +b +c;
				area = sqrt(perimetro / 2 * (perimetro / 2 - a) * (perimetro / 2 - b) * (perimetro / 2 - c));
				cout << "El �rea del tri�ngulo es: " << area << " y su per�metro es: " << perimetro << endl;
				break;
			case 4:
				cout << "Ingrese el valor del radio del c�rculo:\nr = ";
				cin >> r;
				areac = PI * r * r;
				perimetroc = 2* PI * r;
				cout << "El �rea del cuadrado es: " << areac << " y su per�metro es: " << perimetroc << endl;
				break;
			default:
				break;		
			}
			cout << "\n\n1. Cuadrado\n2. Rect�ngulo\n3. Tri�ngulo\n4. C�rculo\nOtro. Salir" << endl;
			cout << "\nPara comtinuar ingrese su opci�n: ";
			cin >> op;
	}
	cout << "Gracias por utilizar nuestro programa.\n\t   �Hasta pronto!\n\n" << endl;
	
	cout << "\nPresione cualquier tecla para salir\n";
	flag = getc(stdin);
}
