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
    int sumaDivisores = 0;
    for (int i=1; i<ingreso; i++ ) {
        if (ingreso % i == 0 ) {
            sumaDivisores = sumaDivisores + i;
        }
    }
    cout << "Suma divisores: " << sumaDivisores << endl;

    if (sumaDivisores == ingreso) {
     cout << "Es un numero perfecto. " << endl;
    } else {
     cout << "No es un numero perfecto. " << endl;

    }

	return 0;
}
