// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {

    // 4, 5, 7, 12, 13, 19, 20 ordenados 5, 7, 13, 19
    // 4, 10, 3, 5, 11, 7, 14 desordenados 3, 5, 11, 7


    int ingreso;
    float resto;
    int ultimo_ingreso;
    int divisores = 0;
    bool ordenado = true;
    bool primero = true;

    for (int i=1; i<=7; i++) {
        divisores = 0;
        cout << "Ingrese un numero (" << i << "): ";
        cin >> ingreso;
        for (int j=1; j<ingreso; j++) {
            resto = ingreso%j;
            if (resto==0) {
                divisores++;
            }
        }

        if (divisores == 1) {
            if (primero) {
                ultimo_ingreso = ingreso;
                primero = false;
            }
            if (ultimo_ingreso>ingreso) {
               ordenado = false;
            }
           ultimo_ingreso = ingreso;
        }
    }
    if (ordenado) {
        cout << "Ordenados" << endl;
    } else {
        cout << "Desordenados" << endl;
    }
	return 0;
}
