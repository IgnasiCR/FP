/*
No funciona por lo siguiente:
caja_izda = caja_dcha;          <-Aqu� de iguala caja izquierda a la caja derecha
caja_dcha = caja_izda;			<-La caja derecha vale lo mismo que la caja izquierda debido a la orden de antes, por lo que la caja izquierda seguir� valiendo lo mismo que antes
La soluci�n es emplear 1 variable auxiliar
*/

#include <iostream>														//Inclusi�n de los recursos de E/S
#include <cmath>														//Inclusi�n de los recursos matem�ticos

using namespace std;

int main(){																//Programa principal
	double caja_izda, caja_dcha, auxiliar;								//Declara las variables
	
	cout << "Inserte la cantidad de la caja izquierda: ";				//Pregunta la cantidad de la caja izquierda y la introduce en la variable
	cin >> caja_izda;
	
	cout << "Inserte la cantidad de la caja derecha: ";					//Pregunta la cantidad de la caja derecha y la introduce en la variable
	cin >> caja_dcha;
	
	auxiliar = caja_izda;
	caja_izda = caja_dcha;
	caja_dcha = auxiliar;
	
	cout << "La caja de la izquierda vale: " << caja_izda << "\n";		//Imprime las cantidades de las cajas
	cout << "La caja de la derecha vale: " << caja_dcha << "\n";
	
	system("pause");
	return 0;															//Finaliza el programa
}


