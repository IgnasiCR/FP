#include <iostream>				//Inclusi�n de recursos matem�tcicos
#include <cmath>				//Inclusi�n de recursos de E/S

using namespace std;

int main(){		//Clase principal
//inicializaci�n de variables
	const int ASCII = 255;
	int freq[ASCII], mayor_freq;
	char caracter;
	
	mayor_freq = 0;
	
//este bucle iguala todo el vector freq a 0
	for ( int t = 0; t <= ASCII; t++ ){
		freq[t] = 0;
	}
	
//entrada de datos
	cout << "Inserte un texto: ";
	caracter = cin.get();
	
//este bucle sirve para contar cuantas veces se repite un car�cter
	while( caracter != '#' ){
		freq[caracter]++;
		caracter = cin.get();
	}
	
//este bucle ecuentra que car�cter se ha repetido m�s y cuantas veces
	for( int i = 0; i <= ASCII; i++ ){
		if ( freq[i] > mayor_freq ){
			mayor_freq = freq[i];
			caracter = i;
		}
	}
	
//salida de datos
	cout << "El caracter que mas se repite es: '" << caracter << "' con un total de " << mayor_freq << " apariciones" << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}


