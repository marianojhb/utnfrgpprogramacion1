// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Se define a un número como primo cuando tiene solamente dos divisores. Ejemplo 1: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo 2: 6 no es primo, pues tiene 4 divisores (1, 2 3 y 6)
Ejemplo 3: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)

Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el mismo es un número primo o es no es un número primo. Debe usar un ciclo inexacto para resolver este ejercicio.
*/
# include<iostream>

using namespace std;

int main() {
    int num;
    int cantDivisores = 0;
    int divisor=1;
    cout << "Ingrese un número: ";
    cin >> num;
    while(divisor<=num) {
        if (num%divisor==0) {
            cantDivisores++;
            }
        divisor++;
        }
    cout << endl;
    if (cantDivisores==2) {
        cout << "Primo" << endl;
    } else {
        cout << "No primo." << endl;
    }
	return 0;
}

