// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {

    int a;
    int b;
    int inicio;

    cout << "ingrese 2 valores: " << endl;
    cin >> a >> b;

    if ( a>b ) {
        inicio = b+1;
        b = a;
        }

    if ( a<b ) {
        inicio = a+1;
        }

    cout << endl;

    while (inicio<b) {
        cout << inicio << endl;
        inicio++;
        }




	return 0;
}
