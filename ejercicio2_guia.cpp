//Dise�e un programa que calcule el m�ximo de 10 n�meros enteros ingresados por teclado.
#include <iostream>
using namespace std;
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int i,n,max = 0;
	cout << "Ingrese 10 n�meros enteros:\n";
	for(i=1;i<=10;i++){
		cout << "num = ";
		cin >> n;
		if(n > max){
			max = n;
		}
	}
	cout << "El m�ximo es: " << max << endl;
}
