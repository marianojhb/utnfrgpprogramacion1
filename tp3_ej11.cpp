// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int maximo;
    int minimo;
    int ingreso;
    int i;
    cout << "1) Ingrese un numero: ";
    cin >> ingreso;
    maximo = ingreso;
    minimo = ingreso;
    for (i=2;i<=10;i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;
        if (ingreso > maximo) {
            maximo = ingreso;
        }
        if (ingreso < minimo) {
            minimo = ingreso;
        }
    }
    cout << "El maximo es " << maximo << " y el minimo es " << minimo;
	return 0;
}
