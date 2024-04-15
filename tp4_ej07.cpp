// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int n;
    bool primero;
    int maximo;
    while(n!=0) {
        cout << "Ingrese un numero: ";
        cin >> n;
        if (primero) {
            maximo=n;
            primero=false;
            }
        if (n>maximo) {
            maximo=n;
            }
        } // Fin while
    cout << "El maximo es: " << maximo << endl;

	return 0;
}
