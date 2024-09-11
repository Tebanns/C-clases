//Diseñe un programa que calcule el máximo de 10 números enteros ingresados por teclado.
#include <iostream>
using namespace std;
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int i,n,max = 0;
	cout << "Ingrese 10 números enteros:\n";
	for(i=1;i<=10;i++){
		cout << "num = ";
		cin >> n;
		if(n > max){
			max = n;
		}
	}
	cout << "El máximo es: " << max << endl;
}
