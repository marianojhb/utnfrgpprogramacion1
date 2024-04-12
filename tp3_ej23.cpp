// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int cuentaDuplas = 0;
    int ultimo;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    ultimo=ingreso;
    for (int i=2; i<=10;i++) {
        cout << "Ingrese un numero: ";
        cin >> ingreso;
        if (ingreso %2 != 0 && ultimo %2 != 0) {
         cuentaDuplas++;
        }
        ultimo = ingreso;

    }
    cout << "Duplas=" << cuentaDuplas;
	return 0;
}
