// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario SIN TERMINAR!
/*
Dada una lista de números compuesta por grupos donde cada grupo está
separado del siguiente por un cero, y la lista de números finaliza cuando se
ingresan dos ceros consecutivos, se pide determinar e informar:
a) La cantidad de grupos en los que se detecten un total de 4 o más números
primos consecutivos. Se informa 1 resultado al final.
b) Para cada uno de los grupos en los que se haya detectado números negativos,
el mayor y el segundo mayor de los mismos y en qué posición estaban dentro del
subgrupo. En los grupos sin negativos, informar “Grupo sin negativos”. Se
informan 4 resultados por cada grupo.
c) El mayor número primo de todos los grupos, informando además en cual grupo
y en qué posición del mismo fue detectado. Se informan 3 resultados al final.
Ejemplo de una posible lista: 5, 4, 3, 0, 18, -5, 20, 0, 7, 11, 25, 4, 0, 0.
*/


# include<iostream>

using namespace std;

int main() {
//    VERSION CON CONSECUTIVOS NORMALES
//    int num;
//    int corte;
//    int ultimo;
//    int cuentaConsecutivo=0;
//
//    cout << "INGRESE NUMERO ";
//    cin >> num;
//
//    while(num!=0) {
//        while(num!=0) {
//            if (num-ultimo==1) {
//                cuentaConsecutivo++;
//                cout << "Se agrego un consecutivo" << endl << endl;
//            }
//            if (num!=0) {
//                cout << "INGRESE NUMERO ";
//                ultimo = num;
//                cin >> num;
//            }
//        }
//        cout << "INGRESE NUMERO ";
//        cin >> num;
//    }
//
//    cout << "TOTAL CONSECUTIVOS " << cuentaConsecutivo << endl;


    int num;
    int corte;
    int ultimo;
    int CPC=0; // Contador de Primos Consecutivos
    int divisores=0;
    int cuentaGruposPrimos = 0;

    cout << "INGRESE NUMERO ";
    cin >> num;
    if (num%2!=0 && num%3!=0 && num%5!=0) {
        cuentaConsecutivoPrimo++;
    }

        if (num%2==0 && num%3==0 && num%5==0){
            cuentaConsecutivoPrimo++;
            cout << "Se agrego un primo. " << cuentaConsecutivoPrimo++ << " primo" << endl << endl;
        } else {
            cout << "nada" << endl;
        }


    while(num!=0) {
        while(num!=0) {
                if (num%2!=0 && num%3!=0 && num%5!=0){
                    cuentaConsecutivoPrimo++;
                    cout << "Se agrego un divisor. " << divisores << " divisores" << endl << endl;
                }

            }



            if (num!=0) {
                cout << "INGRESE NUMERO ";
                ultimo = num;
                cin >> num;
            }
            divisores = 0;
            cuentaConsecutivoPrimo = 0;

        cout << "INGRESE NUMERO ";
        cin >> num;
    }

    cout << "TOTAL GRUPOS DE PRIMOS " << num << endl;


	return 0;
}
