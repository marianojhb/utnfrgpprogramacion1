// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    cout << "Ingrese un número: ";
    cin >> ingreso;
    cout << "Los divisores son: ";
    for (int i=1; i<=ingreso; i++ ) {
        if (ingreso % i == 0 ) {
            cout << i << " ";
        }
    }

	return 0;
}
