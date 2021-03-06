/*
El siguiente programa realizar� unos c�culos estad�sticos usando la gaussiana
*/
#include <iostream>														//Inclusi�n de los recursos de E/S
#include <cmath>														//Inclusi�n de los recursos matem�ticos
#include <string>

using namespace std;

const double PI = 3.1416;

double LeerPositivo(string mensaje){
	double valor;
		do{
			cout << mensaje;
			cin >> valor;
		}
		while ( valor <= 0 );

	return valor;
}

double IntroduceDatos ( string mensaje){
	double valor;
	
	cout << mensaje;
	cin >> valor;
	
	return valor;
}

double LeerMayor(string mensaje, double num){
	double valor;
		do{
			cout << mensaje;
			cin >> valor;
		}
		while ( valor < num );

	return valor;
}

double Gaussiana( double esperanza, double desviacion, double abcisa, double maximo ){
	return 1/( desviacion * sqrt( 2 * PI ) ) * exp ( -0.5 * pow ( ( ( abcisa - esperanza ) / desviacion ), 2 ) );
}

double GaussianaCDF( double esperanza, double desviacion, double abcisa, double maximo ){
	const double B0 = 0.2316419;
	const double B1 = 0.319381530;
	const double B2 = -0.356563782;
	const double B3 = 1.781477937;
	const double B4 = -1.821255978;
	const double B5 = 1.330274429;
	
	double t = 1 / ( 1 + ( B0 * abcisa ) );
	
	return ( 1 - ( Gaussiana(esperanza, desviacion, abcisa, maximo) * ( (B1 * t) + (pow(t,2) * B2) + (pow(t,3) * B3) + (pow(t,4) * B4) + (pow(t,5) * B5) ) ) );
}

int Menu(string mensaje1, string mensaje2){
	int opcion;
	
	opcion = -1;
	
	cout << "--------------------Gaussiana---------------------" << endl;
	cout << mensaje1 << endl;
	cout << mensaje2 << endl;
	do{
		cout << "Elija una opcion: ";
		cin >> opcion;
	}while(opcion!=1 && opcion!=2);
	
	return opcion;
}

int main(){	
//se inicializan las variables
	int opcion;
	bool salir;
	double esperanza, desviacion, minimo, maximo, incremento;
	string mensaje1, mensaje2;
	
	salir = false;
	
	while ( !salir ){
		mensaje1 = "(1) Introducir parametros (esperanza y desviacion)";
		mensaje2 = "(2) Salir";
	
		opcion = Menu(mensaje1, mensaje2);
		
		if ( opcion == 1 ){
			mensaje1 = "Introduzca espezanza: ";
			esperanza = IntroduceDatos(mensaje1);
			mensaje2 = "Introduzca la desviacion (tiene que ser mayor que 0): ";
			desviacion = LeerPositivo(mensaje2);
			
			mensaje1 = "(1) Introducir rango de valores de abcisas";
			mensaje2 = "(2) Volver al menu principal";
			
			opcion = Menu(mensaje1,mensaje2);
			
			if( opcion == 1 ){
				mensaje1 = "Introduce el minimo: ";
				minimo = IntroduceDatos(mensaje1);
				mensaje2= "Introduce el maximo (debe ser mayor que el minimo): ";
				maximo = LeerMayor(mensaje2, minimo);
				mensaje1 = "Por ultimo, introduce el incremento (numero mayor que 0): ";
				incremento = LeerPositivo(mensaje1);
				
				while( minimo <= maximo ){
					cout << "f(" << minimo << ")=" << Gaussiana(esperanza, desviacion, minimo, maximo);
					cout << "\t\tCDF(" << minimo << ")=" << GaussianaCDF(esperanza, desviacion, minimo, maximo) << endl;
					minimo += incremento;
				}
			salir = true;
			}
		}
		else
			salir = true;
	}
	
	system("pause");
	return 0;
}
