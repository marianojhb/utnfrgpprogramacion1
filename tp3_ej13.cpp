// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int mp;
    int ingreso ;
    float resto ;
    bool basura = true;
    cout << "1) Ingrese un numero: " ;
    cin >> ingreso;
    resto = (float)ingreso/2 - ingreso/2;
    if ( resto == 0 ) {
        mp = ingreso;
        basura = false;
    }
    for (int i = 2; i <= 3; i++) {
        cout << i << ") Ingrese un numero: ";
        cin >> ingreso ;
        resto = (float)ingreso/2 - ingreso/2;
        if (resto == 0 && basura == true) {
            mp = ingreso ;
            basura = false;
        } else if (resto == 0 && ingreso>mp ){
            mp = ingreso;
            basura = false;
        }
    }
    if (basura == true ) {
        cout << "Ningun numero es par." ;
    } else {
        cout << "El numero par mas alto es el " << mp ;
    }
	return 0 ;
}
