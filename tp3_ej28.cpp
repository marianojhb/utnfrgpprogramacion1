// Ejercicio TP 3 Ej 24
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

int main() {
    int numero;
    int dia;
    char tipo; // 'E' - Extracción / 'D' - Depósito
    float importe;

    float saldo = 0; // suma y resta el saldo de la cuenta con depositos y extracciones
    float cuentaDepositos = 0; // suma los depositos
    float cuentaExtracciones = 0; // suma las extracciones

    int movimientosTotales = 3;


    float mayorDeposito = 0;
    int diaMayorDeposito;
    int numeroMayorDeposito;
    int cantidadMovimientosDia10 = 0;

//    cout << "Movimiento 1: " << endl;
//    numero = 1;
//    cout << "Ingrese dia, tipo de movimiento (E: extraccion, D: deposito), importe: " ;
//    cin >> dia >> tipo >> importe;


    for (int i = 1; i <= movimientosTotales; i++) {
        cout << "Movimiento " << i << ": " << endl;
        numero = i;
        cout << "Ingrese dia, tipo de movimiento, importe: " ;
        cin >> dia >> tipo >> importe;

        if (tipo=='E' || tipo=='e') {
            saldo = saldo - importe;
            cuentaExtracciones++;
        } else if (tipo == 'D' || tipo == 'd') {
            saldo = saldo + importe;
            cuentaDepositos++;

            if (importe > mayorDeposito) {
                mayorDeposito = importe;
                diaMayorDeposito = dia;
                numeroMayorDeposito = i;


            }

        }

        if (dia == 10) {
            cantidadMovimientosDia10++;
        }
    }

    cout << "El saldo final de la cuenta es: " << saldo << endl;

    cout << "El porcentaje de movimientos de extracciones es " << cuentaExtracciones/movimientosTotales << "% " << endl;

    cout << "El porcentaje de movimientos de depositos es " << cuentaDepositos/movimientosTotales << "% " << endl;

    cout << "El mayor deposito es el movimiento " << numeroMayorDeposito << ", del día " << diaMayorDeposito << ", de importe " << mayorDeposito << endl;

    cout << "El dia 10 tuvo " << cantidadMovimientosDia10 << " movimientos." << endl;

	return 0;
}
