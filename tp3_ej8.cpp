// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int cp=0; // contador positivos
    int c0=0; // contador negativos
    int cn=0; // contador positivos
    int total; // cantidad total de la lista de numeros
    int ingreso; // cada numero ingresado
    int i; // contador del bucle for
    cout << "Ingrese la cantidad de numeros: ";
    cin >> total;
    for (i=1;i<=total;i++) {
        cout << i << ") Ingrese un numero: " ;
        cin >> ingreso;
        if (ingreso<0) {
            cn++;
        } else if (ingreso==0) {
            c0++;
        } else {
            cp++;
        }

    }
//    cout << "Se ingresaron " << cp << " de ingresos positivos, " << c0 << " de ceros, y " <<  cn  << " de ingresos negativos." << endl;
    cout << "Se ingresaron " << cp*100/total << "% de ingresos positivos, " << c0*100/total << "% de ceros, y " << cn*100/total << "% de ingresos negativos.";





	return 0;
}
