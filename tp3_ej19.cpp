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
    int divisores = 2;
    for (int i=2; i<ingreso; i++ ) {
        if (ingreso % i == 0 ) {
            divisores++;
        }
    }
    cout << divisores << " divisores.";
	return 0;
}
