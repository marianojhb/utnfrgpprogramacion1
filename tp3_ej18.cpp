// Ejercicio TP EJ
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    cout << "Los divisores pares son: ";
    for (int i=2; i<ingreso; i++ ) {
        if (ingreso%i == 0 ) {
            if (i%2==0) {
                cout << i << " ";
            }
        }
    }

	return 0;
}
