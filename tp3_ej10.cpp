// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso, maximo, posicion;
    cout << "1) Ingrese un numero: ";
    cin >> ingreso;
    maximo = ingreso;
    posicion = 1;
    for (int i=2; i<=10; i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;
        if (ingreso > maximo) {
            maximo = ingreso;
            posicion = i;
        }
    }
    cout << "El maximo es " << maximo << ", en la posicion " << posicion;
	return 0;
}
