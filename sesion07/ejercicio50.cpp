/*
El siguiente programa contar� las veces que aparece un n�mero en un rango especificado por los valores le�dos desde teclado
*/
#include <iostream>					//Inclusi�n de recursos de E/S
#include <cmath>					//Inclusi�n de recursos matem�ticos

using namespace std;

int main(){		//Clase principal
//Inicializaci�n de variables
	int cifra, min, max, aux, apariciones;
	
	apariciones = 0;
	
//Entrada de datos
	cout << "Introduzca la cifra que quiera buscar: ";
	cin >> cifra;
	cout << "Ahora el rango donde quiera buscar esa cifra separados por espacio: ";
	cin >> min >> max;
	
//C�MPUTOS
	for ( int i = min; i <= max; i++ ){
		aux = i;
		while( aux > 0 ){
			if ( aux % 10 == cifra ){
				apariciones++;				//Esta variable cuenta el numero de apariciones del numero
			}
			aux = aux / 10;					//Se divide entre 10 para ir comprobando las cifras m�s a la izquierda del n�mero
		}
	}
	
//Salida de datos
	cout << "La cifra aparece " << apariciones << " veces en el intervalo mencionado" << endl;
	
//Finaliza el programa
	system("pause");
	return 0;	
}
