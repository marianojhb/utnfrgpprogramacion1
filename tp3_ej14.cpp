// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {

    int primerImpar;
    int segundoImpar;
    int anteUltimoImpar;

    int ultimoImpar;
    int ingreso;
    int cantImpar =0;

    for (int i=1;i<=7;i++) {
        cout << i << ") Ingresar un numero: ";
        cin >> ingreso;
        if(ingreso%2!=0){
            cantImpar++;
            if(cantImpar==1){
                primerImpar = ingreso;
                ultimoImpar = ingreso;
            } else if (cantImpar == 2) {
                segundoImpar = ingreso;
                anteUltimoImpar=ultimoImpar;
                ultimoImpar = ingreso;

            } else {
                anteUltimoImpar = ultimoImpar;
                ultimoImpar=ingreso;
            }
        }
    }

    cout << "Primer impar=" << primerImpar << endl;
    cout << "Segundo impar=" << segundoImpar << endl;
    cout << "Anteultimo impar=" << anteUltimoImpar << endl;
    cout << "Ultimo impar=" << ultimoImpar << endl;







	return 0;
}
