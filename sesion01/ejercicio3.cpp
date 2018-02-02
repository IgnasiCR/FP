#include <iostream>													//inclusi�n de los recursos de E/S
#include <cmath>														//inclusi�n de los recursos matem�ticos

using namespace std;

int main(){																//Programa principal
	double radio;														//inicializa la variable radio
	double area; 														//inicializa la variable area
	double longitud;													//inicializa la variable longitud
	const double PI = 3.1416;										//establece la constante PI
	
	cout << "Indique el radio del c�rculo (en cm): ";		//pregunta al usuario el radio del c�rculo
	cin >> radio;														//introduce el radio en la variable
	
	area = PI*radio*radio;											//calcula el area del circulo
	longitud = 2*PI*radio;											//calcula la longitud del circulo
	
	cout << "\nEl area de la circunferencia seria " << area;
	cout << " cm y su longitud de " << longitud;
	cout << " cm\n";														//dice al usuario la longitud y area del circulo

	system("pause");
	return 0;																//se cierra el programa con esta orden
}

