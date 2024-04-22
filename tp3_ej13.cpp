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
    int maxPar;
    int ingreso;
    int contarPar=0;
    for (int i=1;i<=10;i++) {
        cout << i <<") Ingrese: ";
        cin >> ingreso;
        if (ingreso%2==0) {
            contarPar++;
            if (contarPar==1) {
                maxPar=ingreso;
            } else if (ingreso>maxPar) {
                maxPar=ingreso;
            }
        } // prueba par
    } // cierro for
    if (contarPar==0){
        cout << "Ningun numero es par." ;
    } else {
        cout << "El numero par mas alto es el " << maxPar ;
    }
	return 0 ;
}
