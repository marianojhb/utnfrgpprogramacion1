// Ejercicio TP2 Ej10
// Autor: Mariano Belgrano
// Fecha: 5-4-2024
// Comentario

# include<iostream>

using namespace std;

int main() {
    int a,b,c,d,e,maximo,minimo;
    cout << "Ingrese 5 números: ";
    cin >> a >> b >> c >> d >> e;
    if (a>b && a>c && a>d && a>e) {
        maximo = a;
    } else if (b>c && b>d && b>e) {
        maximo = b;
    } else if (c>d && c>e) {
        maximo = c;
    } else if (d>e){
        maximo = d;
    } else {
        maximo = e;
    }
    if (a<b && a<c && a<d && a<e) {
        minimo = a;
    } else if (b<c && b<d && b<e) {
        minimo = b;
    } else if (c<d && c<e) {
        minimo = c;
    } else if (d<e){
        minimo = d;
    } else {
        minimo = e;
    }
    cout << "El máximo es: " << maximo << endl;
    cout << "El mínimo es: " << minimo << endl;

	return 0;
}
