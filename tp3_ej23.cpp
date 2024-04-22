// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario Dada una lista de 10 números informar la cantidad de duplas de números impares que se hayan ingresado consecutivamente.

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int cuentaDuplas = 0;
    int ultimo;

    for (int i=1; i<=10; i++) {
        cout << "Ingrese un numero: ";
        cin >> ingreso;
        if ( i==1 ) {
            ultimo=ingreso;
        } else if (ingreso %2 != 0 && ultimo %2 != 0) {
         cuentaDuplas++;
        }
        ultimo = ingreso;

    }
    cout << "Duplas=" << cuentaDuplas;
	return 0;
}
