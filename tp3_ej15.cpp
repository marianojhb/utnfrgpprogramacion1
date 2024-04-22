// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    bool ordenado = true;
    int ingreso;
    int numeroAnterior;

    for (int i=1 ; i <= 8; i++) {
        cout << i << ") Ingresar un numero: ";
        cin >> ingreso;
        if (i == 1) {
            numeroAnterior = ingreso;
        } else {
            if( numeroAnterior > ingreso ) {
                ordenado=false;
            }
        }
        numeroAnterior=ingreso;
    }

    if ( ordenado == true ) {
        cout << "Conjunto ordenado";
    } else {
        cout << "Conjunto desordenado";
    }
	return 0;
}
