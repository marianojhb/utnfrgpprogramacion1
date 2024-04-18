// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int ingreso;
    int maximo;
    int minimo;
    bool primero = true;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    while (ingreso != 0) {
        if (primero) {
            maximo = ingreso;
            minimo = ingreso;
            primero=false;
        }
        if (ingreso > maximo) {
            maximo = ingreso;
        }

        if (ingreso < minimo){
            minimo = ingreso;
        }


        cout << "Ingrese un numero: ";
        cin >> ingreso;

        } // Fin While
    cout << "Maximo=" << maximo << endl;
    cout << "Minimo=" << minimo << endl;

	return 0;
}
