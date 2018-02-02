/*
El siguiente programa realizar� unos c�culos estad�sticos usando la gaussiana
*/
#include <iostream>														//Inclusi�n de los recursos de E/S
#include <cmath>															//Inclusi�n de los recursos matem�ticos

using namespace std;

int main(){																		//clase principal
//se inicializan las variables
	double esperanza, desviacion_tipica, abcisa, gaussiana;
	const double PI = 3.1416;
	
//se introducen los datos
	cout << "Introduzca la esperanza: ";
	cin >> esperanza;
	cout << "Introduzca la desviacion tipica: ";
	cin >> desviacion_tipica;
	cout << "Introduzca la abcisa: ";
	cin >> abcisa;
	
//se resuelve la ecuaci�n
	gaussiana = 1/( desviacion_tipica * sqrt( 2 * PI ) ) * exp ( -0.5 * pow ( ( ( abcisa - esperanza )/desviacion_tipica ), 2 ) );

//se imprime el resultado
	cout << "El resultado es: " << gaussiana << "\n";
	
	system("pause");																//con estas variables se finaliza el programa
	return 0;
}

/*
Sin usar la funci�n pow quedar�a as�:
gaussiana = 1/( desviacion_tipica * sqrt( 2 * PI ) ) * exp ( -0.5 * ( ( abcisa - esperanza )/desviacion_tipica ) * ( abcisa - esperanza )/desviacion_tipica );
*/
