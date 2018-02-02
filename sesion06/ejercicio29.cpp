/*
El siguiente programa leer� una secuencia de numeros y averiguar� la longitud de la secuencia m�s larga y la posici�n donde empieza
*/
#include <iostream>																//Inclusi�n de recursos de E/S
#include <cmath>																//Inclusi�n de recursos matem�ticos

using namespace std;

int main(){																		//Clase principal
//inicializaci�n de variables
	double temp, aux, pos, longitud, maxlong, maxpos;
	
	pos = longitud = aux = maxlong = maxpos = 0;
	
//entrada de datos
	cout << "Introduzca una secuencia de temperaturas (terminala con -1): ";
	cin >> temp;
	
	while( temp != -1 ){														//El while sigue funcionando hasta que se introduzca el -1 (valor centinela)
			if( temp >= aux ){
				longitud++;
				if( longitud > maxlong ){
					maxpos = pos - maxlong;
					maxlong = longitud;
				}
			}else{
				longitud = 1;
			}
		aux = temp;																//Se mete el numero en una variable auxiliar para poder compararlo con el siguiente numero introducido
		cin >> temp;
		pos++;
	}	//while
	
//salida de datos
	cout << "La mayor secuencia mide " << maxlong << " y empieza en la posicion: " << maxpos << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
