// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe ingresar nada en este programa.

# include<iostream>

using namespace std;

int main() {
    int divisores = 0;
    int cuentaPrimos=0;
    for (int i=2 ; i<=10000; i++) { // el 1 no cuenta como primo y comenzamos con el 2
        divisores = 0;
        for (int j=1; j<i; j++){
            if (i%j == 0) {
                divisores++;
            }
        }
        if (divisores < 2) {
            cuentaPrimos++;
            cout << " " << i;
        }
    }
    cout << endl << "Cuenta primos=" << cuentaPrimos << endl;


	return 0;
}
