// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Un número Simonírico es un número positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6.
Hacer un programa que muestre los primeros 1000 números Simoníricos. El usuario no debe ingresar nada.
*/


# include<iostream>

using namespace std;

int main() {
    int n=1;
    int orden=1;
    int cuentaS=0;

    while (cuentaS<1000) {

        if (n%15==0 && n%3==0 && n%6!=0) {
            cuentaS++;
            cout << orden << ") " << n << " " << endl;
            orden++;
        }
        n++;
    }

	return 0;
}
