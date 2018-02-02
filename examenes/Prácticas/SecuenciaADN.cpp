/*
Apellidos: N��ez Ruiz
Nombre: Manuel Jes�s
DNI: 31027610N
Pertenezco al D3
*/
/*
El siguiente programa averiguar� cu�l es el caracter m�s repetido de una cadena ADN introducida desde teclado.
Adem�s averiguar� si la secuencia es pal�ndromo o no
*/
#include <iostream>												//Inclusi�n de recursos de E/S

using namespace std;

class SecuenciaADN{												//Clase secuencia ADN
	private:													//Datos miembros privados
		static const int TAMANIO = 1000;
		char secuencia[TAMANIO];
		int utils;
		
	public:
		SecuenciaADN(){											//Constructor para inicializar utils a 0
			utils = 0;
		}
      		
		void Aniade( char letra ){								//M�todo para a�adir los caracteres al vector privado caracteres
			if( (letra == 'A') || (letra == 'C') || (letra == 'G') || (letra == 'T') ){
				secuencia[utils] = letra;
				utils++;
			}
		}
		
		void MasRepetido(char& carrepetido, int& masrepetido){	//M�todo para averiguar el car�cter que m�s se repite consecutivamente
			int repetido;
				
			repetido = 1;
			carrepetido = 0;
				
			for( int i = 1; i < utils; i++ ){
				if( secuencia[i] == secuencia[i-1] ){
					repetido++;
					
				   if( repetido > masrepetido ){
				     	masrepetido = repetido;
					   carrepetido = secuencia[i];
				}
				}else{
					repetido = 1;
         		}
			}
		}
		
		bool Palindromo(int maxfallos){								//M�todo para averiguar si es pal�ndromo
			int fallos;
			
			fallos = 0;
		
			for( int t = 0; t <= utils / 2; t++ ){
				if( secuencia[t] != secuencia[(utils-1)-t] ){
					fallos++;
				}
			}
			   
			return (fallos <= maxfallos);
		}
		
};

int main(){		//clase principal
//Declaraci�n de variables y objeto adn
	SecuenciaADN adn;
	const char CENTINELA = '#';
	char caracter;
	int masrep, k;
	
	masrep = 0;
	
//entrada de datos
	cout << "Inserte la secuencia ADN: ";
	caracter = cin.get();
	
//Este bucle inserta los caracteres en el vector privado secuencia a trav�s del metodo Aniade
	while( caracter != CENTINELA ){
		adn.Aniade( caracter );
		cin >> caracter;
	}
	
//llamada al m�todo MasRepetido para conocer la soluci�n
	adn.MasRepetido(caracter, masrep);
	
//salida de datos
	cout << "El caracter mas repetido es: " << caracter << " con " << masrep << " repeticiones" << endl;
	
//entrada de datos
	cout << "Vamos a averiguar si es palindromo o no, inserte un numero maximo de fallos: ";
	cin >> k;
	
//esta estructura condicional sirve para saber si el m�todo Palindromo devuelve true o false
	if( adn.Palindromo(k) )
		cout << "Es palindromo";
	else
		cout << "No es palindromo";
	
	cout << endl;
	
//finaliza el programa
	return 0;
}
