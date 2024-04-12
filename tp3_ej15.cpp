// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    bool ordenado = true;
    int ingreso;
    cout << "1) Ingresar un numero: ";
    cin >> ingreso;
    int numeroAnterior;
    for (int i=2 ; i <= 8; i++) {
        numeroAnterior = ingreso;
        cout << i << ") Ingresar un numero: ";
        cin >> ingreso;
        if( numeroAnterior > ingreso ) {
            ordenado=false;
        }
    }
    if ( ordenado == true ) {
        cout << "Conjunto ordenado";
    } else {
        cout << "Conjunto desordenado";
    }




	return 0;
}
