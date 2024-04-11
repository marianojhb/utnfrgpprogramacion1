#include <iostream>

using namespace std;

int main()
{
        char operador;
        int num1;
        int num2;
        float resultado;
        string operador_descripcion;
        bool continua = true;
        char opcion;
        int error = 0;
        cout << "Uso de while, do while, if" << endl << endl;
        while(continua) {

            cout << "Ingrese la expresion: ";
            cin >> num1 >> operador >> num2;

            if (operador == '+') {
                resultado = num1 + num2;
                operador_descripcion = " mas ";
            } else if (operador == '-') {
                resultado = num1 - num2;
                operador_descripcion = " menos ";
            } else if (operador =='*') {
                resultado = num1 * num2;
                operador_descripcion = " por ";
            } else if (operador == '/') {
                if (num2 !=0) {
                    resultado = num1 / num2;
                    operador_descripcion = " dividido ";
                } else {
                error = 1 ;
                cout << "No se puede dividir por 0." << endl;
                }
            } else {
                error = 1;
                cout << "El operador no es valido. " << endl;

            }

            if (error == 0) {
                cout << "El resultado de " << num1 << operador_descripcion << num2 << " da como resultado " << resultado << endl;
            } else {
                cout << "No se puede hacer la cuenta" << endl;
            }


            opcion = 's';
            error = 0;
            do {
            cout << "\n¿Quiere continuar? s/n: " ;
            cin >> opcion;
            cout << endl;
            }
            while (opcion != 's' && opcion != 'n');


            if (opcion == 'n') {
                continua = false;
            }
        }




    return 0;
}
