// Ejercicio TP Ej 30
// Autor:
// Fecha:
// Comentario
/*
Dada una lista de 7 números todos distintos entre sí determinar e informar con un cartel aclaratorio si los números primos ingresados en la misma están ordenados de menor a mayor. Los números primos pueden no ser consecutivos, pero sí estar ordenados.
Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que los números primos están ordenados: 5, 7, 13, 19.
Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya que los números primos no están ordenados: 3, 5, 11, 7.
*/

# include<iostream>

using namespace std;

int main() {

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
