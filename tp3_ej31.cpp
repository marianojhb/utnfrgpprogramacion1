// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {

    int maximo;
    int ingreso;
    int segundoMaximo;

    for (int i=1; i<=5; i++) {
        cout << i << ")Ingrese un numero: ";
        cin >> ingreso;

        if (i==1) {
            maximo = ingreso;
        }

        if (ingreso>maximo) {
            segundoMaximo = maximo;
            maximo = ingreso;
        } else if (ingreso>segundoMaximo && ingreso != maximo) {
            segundoMaximo = ingreso;
        }
    }
    cout << "El mas alto es: " << maximo << endl;
    cout << "El segundo mas alto es: " << segundoMaximo << endl;


	return 0;
}
