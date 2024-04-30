// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
*/

# include<iostream>
//#include <cstdlib>

using namespace std;

int main() {
    int n=1;
    float medida;
    bool medidabool = false;
    float resultado;

    while (n!=0) {
        cout << " Menú principal" << endl;
        cout << " -----------------------------" << endl;
        cout << " 1 - Ingresar medidas en metros: ";
        if (medidabool) {
            cout << medida << " metros" << endl;
        } else {
            cout << endl;
        }
        cout << " 2 - Convertir a centímetros" << endl;
        cout << " 3 - Convertir a kilómetros" << endl;
        cout << " 4 - Convertir a pulgadas" << endl;
        cout << " 5 - Convertir a pies" << endl;
        cout << " -----------------------------" << endl;
        cout << " 0 - Salir del programa" << endl;
        cout << endl;
        cout << " Ingrese opción: ";
        cin >> n;
        system("clear");
        switch (n) {
            case 1:
                cout << "Ingresar medidas en metros: " ;
                cin >> medida;
                medidabool = true;
                break;
            case 2:
                resultado = medida * 100;
                cout << "El resultado es " << resultado << " centímetros" << endl;
                cin.ignore().get();
                break;
            case 3:
                resultado = medida / 1000;
                cout << "El resultado es " << resultado << " kilometros" << endl;
                cin.ignore().get();
                break;
            case 4:
                resultado = medida * 100 / 2.54;
                cout << "El resultado es " << resultado << " pulgadas" << endl;
                cin.ignore().get();
                break;
            case 5:
                resultado = medida * 3.28084 ;
                cout << "El resultado es " << resultado << " pies" << endl;
                cin.ignore().get();
                break;

        }
        system("clear");
    }
	return 0;
}
