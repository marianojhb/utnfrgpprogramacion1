// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int minimoPositivo; // minimo de los positivos
    int maximoNegativo; // maximo de los negativos
    int ingreso;
    bool primerPositivo=true;
    bool primerNegativo=true;

    for (int i=1; i <= 10; i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso;

        if (ingreso < 0) {
            if (primerNegativo) {
            maximoNegativo = ingreso;
            primerNegativo = false;
            }
            if (ingreso>maximoNegativo) {
                maximoNegativo=ingreso;
            }
        }

        if (ingreso>0) {
            if (primerPositivo) {
                minimoPositivo = ingreso;
                primerPositivo = false;
            }
            if (ingreso<minimoPositivo) {
                minimoPositivo = ingreso;
            }
        }

    }
    cout << "El minimo de los positivos es " << minimoPositivo << " y el maximo de los negativos es " << maximoNegativo;
	return 0;
}
