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
    cout << "Es divisible por: 1";
    int divisores = 2;
    for (int i=2; i<ingreso; i++ ) {
        if (ingreso % i == 0 ) {
            cout << ", " << i;
            divisores++;
        }
    }

    cout << ", y " << ingreso << endl;
    if (divisores > 2) {
        cout << "No es primo";
    } else {
        cout << "Es primo";
    }
	return 0;
}
