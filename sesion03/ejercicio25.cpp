/*
El siguiente programa transforma las letras may�sculas en min�sculas
*/
#include <iostream>															//Inclusi�n de los recursos de E/S
#include <cmath>															//Inclusi�n de los recursos matem�ticos

using namespace std;

int main(){																	//Clase principal
	char caracter;																//Se inicializa la variable que guardar� el car�cter
	
//entrada de datos
	cout << "Introduzca un caracter en mayuscula: ";
	cin >> caracter;
	
//Se le suma 32 porque las minusculas se diferencian 32 posiciones en la tabla ASCII
	caracter = caracter + 32;
	
//salida de datos
	cout << "El caracter en mayuscula: " << caracter << endl;

//finaliza el programa	
	system("pause");
	return 0;
}
