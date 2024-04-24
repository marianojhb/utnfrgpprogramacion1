// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Dada una lista de 10 números informar cual es el máximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8
*/

# include<iostream>

using namespace std;

int main() {
    int maxpar;
    int cp = 0; // contador de pares
    int ingreso;
    for (int i=1; i<=10; i++) {
        if (ingreso%2==0) {
            if (cp == 0) {
                maxpar=ingreso;
            } else {
                if (ingreso>maxpar) {
                    maxpar=ingreso;
                }
            }
            cp++;

        }

    }

    if (cp==0 ) {
        cout << "Ningun numero es par." ;
    } else {
        cout << "El numero par mas alto es el " << maxpar ;
    }
	return 0 ;
}
