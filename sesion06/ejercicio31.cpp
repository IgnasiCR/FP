/*
El siguiente programa resolvera una multiplicaci�n sin usar la funci�n * usando el algoritmo de la multiplicaci�n rusa
*/
#include <iostream>										//Inclusi�n de recursos de E/S
#include <cmath>										//Inclusi�n de recursos matem�ticos

using namespace std;

int main(){												//Clase principal
//inicializaci�n de variables
	int multiplicando, multiplicador, suma;
	
	suma = 0;
	
//entrada de datos
	cout << "Introduce el multiplicando y el multiplicador (en el mismo orden y con espacios): ";
	cin >> multiplicando >> multiplicador;

//Se aplica el algoritmo de la multiplicaci�n rusa
	while( multiplicando >= 1 ){
		if ( multiplicando%2 != 0 ){
			suma = suma + multiplicador;
		}
		multiplicando /= 2;
		multiplicador += multiplicador;
	}
	
//salida de datos
	cout << "El resultado de la multiplicacion es: " << suma << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
