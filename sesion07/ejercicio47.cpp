/*
Este ejercicio es lo mismo que el anterior solo que hay que usar 1 solo bucle
*/
#include <iostream>						//Inclusi�n de recursos de E/S
#include <cmath>						//Inclusi�n de recursos matem�ticos

using namespace std;

int main(){		//Clase principal
//Inicializaci�n de variables
	int t, multiplicador, suma;
	
	suma = 0;
	multiplicador = 1;
	
//Entrada de datos
	cout << "Introduzca un numero: ";
	cin >> t;
	
	/*
	Esto se debe de poner en un unico bucle
	while( t != 0 ){
		multiplicando = t;
		multiplicador = 1;
		while ( multiplicando != 0 ){
			multiplicador *= multiplicando;
			multiplicando--;
		}
		suma += multiplicador;
		t--;
	}
	*/
//C�MPUTOS
	for ( int i = t; t != 0; i-- ){
		multiplicador *= i;
		
		if ( i <= 1 ){
			suma += multiplicador;
			i = t;
			t--;
			multiplicador = 1;
		}
	}
	
//Salida de datos
	cout << "El resultado es: " << suma << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
