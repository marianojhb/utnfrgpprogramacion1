// Ejercicio en clase
// Autor: Mariano Belgrano
// Fecha: 22/4/2024
// Comentario. Dada una cantidad de numeros ingresados, calcular y mostrar la cantidad de pares ingresados


# include<iostream>

using namespace std;

int main() {

    int num;
    int cantPares=0;
    bool bandera=true;

    cout << "Ingrese un numero: ";
    cin >> num;
    while(bandera){
        if (num%2==0 && num!=0) {
            cantPares++;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num==0) {
            bandera=false;
        }
    }

    cout << "Pares=" << cantPares << endl;


	return 0;
}
