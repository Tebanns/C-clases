//llenado y vaciado de un vector
#include <iostream>
using namespace std;
int main(){
	string nombres[] = {"Juan","Pedro","Ana","Luis","Maria"};
	int i,puntajes[] = {20,18,19,17,15};
	cout << "Nombres     " << "Puntajes" << endl;
	for(i=0;i<=4;i++){//ciclo for de vaciado
		cout << nombres[i] << "  " << puntajes[i] << endl;
	}
}
