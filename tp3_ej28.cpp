// Ejercicio TP 3 Ej 28
// Autor:
// Fecha:
// Comentario
/*
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
    • Número de movimiento
    • Día
    • Tipo ('E' - Extracción / 'D' - Depósito)
    • Importe
Existe un registro por movimiento. Se desea calcular e informar:
    • El saldo final de la cuenta.
    • El porcentaje de movimientos de extracción y el porcentaje de depósito.
    • El depósito de mayor importe indicando también día y número de movimiento.
    • La cantidad de movimientos del día 10.
*/

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

    int movimientosTotales = 14;


    float mayorDeposito = 0;
    int diaMayorDeposito;
    int numeroMayorDeposito;
    int cantidadMovimientosDia10 = 0;

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
