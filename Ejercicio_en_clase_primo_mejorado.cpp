// Ejercicio en clase
// Autor: Mariano Belgrano
// Fecha: 22/4/2024
// Comentario. Dada una cantidad de numeros ingresados, calcular y mostrar la cantidad de pares ingresados


# include<iostream>

using namespace std;


int main() {
    int num, cuentaDiv=0, i=2;
    cout << "NUMERO ";
    cin >> num;
    while(i<num && cuentaDiv==0) {
        if(num%i==0) {
            cuentaDiv++;
        }
    i++;
    }
    if (cuentaDiv==0 && num>1) {
        cout <<num<<" ES PRIMO ";
    }
    return 0;
}

