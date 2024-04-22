// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    int cantDivisores = 0;
    for (int i=1; i<=ingreso; i++ ) {
        if (ingreso % i == 0 ) {
            cantDivisores++;
        }
    }

    if (cantDivisores == 2) {
        cout << "Es primo";
    } else {
        cout << "No es primo";
    }
	return 0;
}
