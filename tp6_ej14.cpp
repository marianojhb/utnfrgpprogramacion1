#include <iostream>

using namespace std;

int CalcularPotencia(int a, int b) {
    int acumulador=1;
    for(int i=1; i<=b; i++) {
        if (b==0) {
            acumulador=1;
        } else {
            acumulador*=a;
        }
    }
    return acumulador;
}

int ContarDigitos(int a) {
    int divisor=1;
    int digitos=0;
    while ((float)a/divisor >=1 ) {
        digitos++;
        divisor*=10;
    }
    return digitos;
}

bool esNumeroArmstrong(int a) {
    int digitos; // Cantidad de digitos totales (ejemplo de 371 = 3)
    int numerador,denominador,division,divisor;
    int acumulador = 0; // acumula la suma de las potencias, 3^3 + 7^3 + 1^3
    digitos = divisor = ContarDigitos(a); // 3
    numerador = a; // 371 el numero que se va a estar diviendo en cada vuelta
    for (int i=0; i < digitos; i++) {
        denominador = CalcularPotencia(10,divisor-1); // 100
        division = (int) numerador/denominador; // 371/100 = 3
        acumulador = acumulador + CalcularPotencia(division,digitos); // 3,3
        numerador = numerador - (division * denominador);
        divisor--;
    }
    if (a == acumulador) {
        return true;
    } else {
        return false;
    }

}

int main() {
    int num,res;
//    cout << "INGRESE UN VALOR ";
//    cin >> num;
//        res=esNumeroArmstrong(num);
//
//        if (res) {
//            cout << "Es Numero Armstrong." << endl;
//
//        } else  {
//            cout << "No es Numero Armstrong." << endl;
//        }

    for (int j=10; j<100000000; j++) {
        if (esNumeroArmstrong(j))
            cout << j << " ";
    }

    cout << endl;
    return 0;
}
