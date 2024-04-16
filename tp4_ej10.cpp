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
    bool primero;
    while (ingreso != 0) {
        if (ingreso > maximo) {
            maximo = ingreso;
        } else if (ingreso < minimo){
            minimo = ingreso;
        }


        cout << "Ingrese un numero: ";
        cin >> ingreso;

        if (primero) {
            maximo = ingreso;
            minimo = ingreso;
            primero=false;
        }




        } // Fin While
    cout << "Maximo=" << maximo << endl;
    cout << "Minimo=" << minimo << endl;

	return 0;
}
