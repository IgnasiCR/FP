#include <iostream>									//Inclsi�n de los recursos de E/S
#include <cmath>									//Inclusi�n de los recursos matem�ticos

using namespace std;

int main(){											//Clase principal
//inicializacion de variables
	int dias, horas, minutos, segundos, suma, aux, aux2;
	
//entrada de datos
	cout << "Introduce un numero de horas: ";
	cin >> horas;
	cout << "Introduce un numero de minutos: ";
	cin >> minutos;
	cout << "Introduce el numero de segundos: ";
	cin >> segundos;

//Calculos
	suma = horas * 3600 + minutos * 60 + segundos;
	dias = suma/86400;
	aux = suma%86400;
	horas = aux/3600;
	aux2 = aux%3600;
	minutos = aux2/60;
	segundos = aux2%60;
	
//Impresi�n de la soluci�n
	cout << "Dias: " << dias << endl;
	cout << "Horas: " << horas << endl;
	cout << "Minutos: " << minutos << endl;
	cout << "Segundos: " << segundos << endl;
	
//finaliza el programa
	system("pause");
	return 0;
}
