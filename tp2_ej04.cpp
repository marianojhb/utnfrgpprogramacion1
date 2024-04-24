// Ejercicio TP2 Ej4
// Autor: Mariano Belgrano
// Fecha: 5/4/2024
// Comentario: Tomo 2 numeros y calculo el módulo.

# include<iostream>

using namespace std;

int main() {
    int n1, n2;
    int r;
    cout << "ingrese 2 numeros" << endl;
    cin >> n1 >> n2;

    cout << n1 << "-" << n2 << endl;
    r = n1 - n2;
    if(r<0) {
    r = r*(-1);
    }
    cout << "El módulo da "<< r << endl;

	return 0;
}
