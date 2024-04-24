// Ejercicio TP4 Ej20
// Autor:
// Fecha:
// Comentario
/*
Dada una lista de números que finaliza cuando se ingresa un cero,
informar el primer número par ingresado y su ubicación en la lista
y el último de los números primos y su ubicación en la lista.

Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa
Primer número par: 4 ubicación 2.
Último primo: 13 ubicación 6.

Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa
Primer número par: 6 ubicación 7.
Último primo: 13 ubicación 5.
*/

# include<iostream>

using namespace std;

int main() {

    int num;
    int ubicacion;
    int divisor=1;
    int numPar;
    bool numParBool=false;
    cout << "Ingrese un numero: ";
    cin >> num;
    while(num!=0) {
        if (num%2==0 && numParBool==false) {
            numPar=num;
            numParBool=true;
            ubicacion=divisor;
        }
        divisor++;
        cout << "Ingrese un numero: ";
        cin >> num;
    }

    cout << "Numero par=" << numPar << endl;
    cout << "Ubicacion=" << ubicacion << endl;


	return 0;
}
