// Ejercicio en clase
// Autor: Mariano Belgrano
// Fecha: 22/4/2024
// Comentario. Hacer un programa que termine cuando se ingresa el tercer numero primo.
//  El programa debe informar la suma de todos los numeros ingresados.


# include<iostream>

using namespace std;

int main() {

    int num=0;
    int cantPrimos=0;
    int divisor=1;
    int cantDivisores=0;
    int sumaNum=0;
    //ingredo de dato
    //while()

    //proveso
    //preguntas
    do {

        cout << "Ingrese un numero: ";
        cin >> num;

        // Suma los numeros ingresados
        sumaNum+=num;

        while(divisor<=num) {
            if (num%divisor==0) {
                cantDivisores++;
            }
            // Cuento los divisores
            divisor++;
        }

        // Reseteo los comprobadores de primos
        cantDivisores=0;
        divisor=1;

        if (cantDivisores==2) {
            cantPrimos++;
        }
   } while(cantPrimos!=3);

   cout << "La suma de los numeros ingresados es=" << sumaNum << endl;


	return 0;
}
