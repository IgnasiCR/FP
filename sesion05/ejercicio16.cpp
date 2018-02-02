/*
En el siguiente programa hay que introducir 3 numeros. El programa los analiza para ver si estan ordenados de menor a mayor o de mayor de menor. Si no estan ordenados se imprime
"No estan ordenados".
*/
#include <iostream>								//inclusi�n de recursos de E/S
#include <cmath>								//Inclusi�n de recursos matematicos

using namespace std;

int main(){										//clase principal
//inicializacion de variables
	int num1, num2, num3;
	bool ascendente, descendente = false;
	
//introduccion de datos
	cout << "Introduce un numero: ";
	cin >> num1;
	cout << "Introduce otro: ";
	cin >> num2;
	cout << "Introduce el ultimo: ";
	cin >> num3;
	
	if(num1 > num2 ){
		if (num2 > num3){						//si el numero 1 es mayor que el 2 y el 2 mayor que el 3 entonces estan ordenados
			ascendente = true;
		}
	}
	else if(num3 > num2){
		if(num2 > num1){						//si el numero 3 es mayor que el 2 y el 2 mayor que el 1 entonces estan ordenados
			descendente = true;
		}	
	}
	
	if( !ascendente ){
		cout << "Ordenados de forma ascendente" << endl;
	}
	else if ( !descendente ){
		cout << "Ordenados de forma descendente" << endl;	
	}
	else {
		cout << "No estan ordenados" << endl;
	}
	
//finaliza el programa
	system("pause");
	return 0;	
}
