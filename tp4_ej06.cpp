// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int n;
    int cuentaPositivos=0;
    int cuentaNegativos=0;
    while (n!=0) {

        cout << "Ingrese un numero: ";

        cin >> n;

        if (n>0) {
            cuentaPositivos++;
            } else {
            cuentaNegativos++;
            }


        } // Fin while
    cout << "Positivos=" << cuentaPositivos << endl;
    cout << "Negativos=" << cuentaNegativos << endl;

	return 0;
}
