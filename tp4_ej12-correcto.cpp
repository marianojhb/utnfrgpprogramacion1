// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/* Dada una lista de números que finaliza cuando se ingresa un cero,
informar cual es el primer y segundo número impar ingresado.
Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9
*/

# include<iostream>

using namespace std;

int main() {
    int ci=0; // contador de impares
    int n;
    int pImp;
    int sImp;
    cout << "Ingrese un numero: ";
    cin >> n;
    while (n!=0) {
        if (n%2!=0) {
            ci++;
            if (ci==1){
                pImp=n;
            } else if (ci==2) {
                sImp = n;
            }
        }
        cout << "Ingrese un numero: ";
        cin >> n;
    }

    cout << "Primer impar=" << sImp << endl;
    cout << "Segundo impar=" << pImp << endl;

	return 0;
}
