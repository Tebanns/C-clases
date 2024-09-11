/*Repita el problema anterior haciendo uso de un vector que almacene los datos
y adem�s los ordene de mayor a menor en un nuevo vector.*/
#include <iostream>
using namespace std;
#include <locale.h>//biblioteca que permite definir el idioma a usar en los mensajes

int main(){
	setlocale(LC_CTYPE,"Spanish");//se configura el idioma espa�ol para los mensajes
	int inicio[10],fin[10],i,j,aux,max;//declaraci�n de variables
	cout << "Ingrese 10 valores enteros:" << endl;//mensaje solicitando el ingresos de los valores a ordemar
	for(i=0;i<10;i++){//ciclo for de lectura de datos
		cout << "Valor(" << i + 1 << ") = ";//mensaje solicitando el ingreso de cada dato
		cin >> inicio[i];//lectura de los datos
		fin[i] = inicio[i];//copia los datos del vector inicio[] al vector fin[]
	}
	//ciclo de ordenamiento de mayor a menor
	for(i=0;i<10;i++){//ciclo externo que recupera el m�ximo de cada ciclo interno
		max = fin[i];//el valor i del vector se coloca en la variable max
		for(j=i+1;j<10;j++){//ciclo interno que busca el m�ximo valor (en cada vuelta el vector se reduce de tama�o)
			if(max < fin[j]){//consulta si el valor en la variable max es menor que el de la posici�n j del vector fin
				aux = fin[j];//si es as�, el valor de la posici�n j del vector fin se copia en la variable aux
				fin[j] = max;//el valor de la variable max se copia en la posici�n j del vector fin
				max = aux;//el valor de la variable aux se copia en la variable max
			}
			fin[i] = max;//al final del ciclo interno se obtiene el m�ximo valor del vector fin reducido y se almacena en fin[i]
		}
		
	}
	cout << "\nEl m�ximo es: " << fin[0] << "\n" << endl;//mustra el m�ximo valor que se encuentra en la primera posici�n del vector fin
	cout << "Salida ordenada de mayor a menor: \n\n";
	for(i=0;i<10;i++){//ciclo que muestra el vector de salida (datos en orden de mayor a menor)
		cout << "fin(" << i + 1 << ") = " << fin[i] << endl;
	}	
}

