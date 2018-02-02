/*
El siguiente programa buscar� en la matriz de datos la asignaci�n de t�cnicos m�s barata posible
*/
#include <iostream>

using namespace std;

int main(){
   const int TAM = 500;
   int n, valor, x[TAM][TAM] = {0}, b[TAM][TAM], suma, min, imin, jmin, t;
   
   min = 101;
   suma = 0;
   
   cout << "Ingrese el n�mero de pedidos y t�cnicos: ";
   cin >> n;
   
   cout << "Ahora el precio de cada t�cnico: ";
   
   for(int j = 0; j < n; j++){
      for(int i = 0; i < n; i++){
         cin >> valor;
         b[i][j] = valor;
      }
   }
   
   for(int j = 0; j < n; j++){
      for(int i = 0; i < n; i++){
         t = j - 1;
         
         while( t >= 0 ){
            if( x[i][t] == 1 ){
               b[i][j] = 101;
            }
            t--;
         }
         
         if( b[i][j] < min ){
            imin = i;
            jmin= j;
            min = b[i][j];
         }
      }
      x[imin][jmin] = 1;
      suma += b[imin][jmin];
      min = 101;
   }
   
   cout << endl;
   
   for(int j = 0; j < n; j++){
      for(int i = 0; i < n; i++){
         cout << x[i][j] << " ";
      }
      cout << endl;
   }
   
   cout << endl;
   
   cout << "Coste de la asignaci�n: " << suma << endl;
   
   system("pause");
   return 0;
}
