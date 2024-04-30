// Ejercicio TP4 Ej20
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    for (int i=2; i<=10000; i++) {
        if (i%2!=0 && i%3!=0 && i%5!=0) {
            cout << i << " ";
        }
    }


	return 0;
}
