// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int cp = 0; // contador positivo
    int cn = 0; // contador negativo
    int c0 = 0; // contador 0;
    int ingreso; // ingreso de numeros a la lista
    int total; // cantidad de numeros de la lista;
    int i; // contador del bucle for;

    cout << "Ingrese la cantidad de números de la lista: " ;
    cin >> total;

    for (i=1; i<=total;i++) {
    cout << i << ") Ingrese un numero: ";
    cin >> ingreso;
    if (ingreso < 0) {
        cn++;
        } else if (ingreso == 0) {
        c0++;
        } else {
        cp++;
        }
    }
    cout << "Se contaron " << cp << " numero(s) positivo(s), "<< c0 << " cero(s)" << ", y "<< cn << " negativo(s)";
	return 0;
}
