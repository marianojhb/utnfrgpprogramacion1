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
    int ubicacion=1;
    int vuelta=1;
    int cantDivisores=0;
    int numPar;
    bool numParBool=false;
    int ultimoPrimo;

    //Comienzo a preguntar
    cout << "Ingrese un numero: ";
    cin >> num;
    while(num!=0) {
        // Encuentro el par
        if (num%2==0 && numParBool==false) {
            numPar=num;
            numParBool=true; // Bandera que fue el par encontrado
            ubicacion=vuelta; // marco la vuelta hecha
        }
        // Busco el ultimo primo. Arranco en 2 porque ya sabemos que cualquier numero divido 1 va a ser divisible
        // y nos ahorramos un proceso. Tambien dividimos el maximo porque sabemos que no hace falta llegar al maximo
        // cualquier numero es divisible por si mismo), y dividimos el maximo en 2 porque sabemos que solo llega hasta
        // la mitad del numero.
        for (int i=2; i<(num/2+1); i++) {
            if (num%i==0 && cantDivisores<3) {
                cantDivisores++;
            }
        }
        // si tiene 0 divisores es primo (solo tendria como divisor el 1 y y si mismo)
        if (cantDivisores == 0) {
            ultimoPrimo=num;
        }
        vuelta++;
        // reseteo los divisores.
        cantDivisores = 0;
        //vuelvo a preguntar
        cout << "Ingrese un numero: ";
        cin >> num;
    }

    cout << "Numero par=" << numPar << endl;
    cout << "Ubicacion=" << ubicacion << endl;
    cout << "Ultimo Primo=" << ultimoPrimo << endl;

	return 0;
}
