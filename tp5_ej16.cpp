// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

/*
Una empresa registró las ventas que efectuó durante un día y para cada venta
registró los siguientes datos:
●Número de Artículo Vendido (1 a 3)
●Cantidad de Unidades Vendidas
●Importe de la Venta
El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0.
Se pide determinar e informar:
a) La recaudación total para cada uno de los 3 artículos. Se informan 3 resultados
al final.
b) El número de artículo con mayor cantidad TOTAL de unidades vendidas. Se
informa 1 resultado al final.
*/

# include<iostream>

using namespace std;

int main() {
    int articulo, unidades1=0, unidades2=0, unidades3=0, unidades=0;
    float importe, recaudacion1=0, recaudacion2=0, recaudacion3 = 0;

    cout << "INGRESE ARTICULO, CANTIDAD, IMPORTE ";
    cin >> articulo >> unidades >> importe;

    while (articulo != 0) {
        switch (articulo) {
            case 1: recaudacion1 += importe;
                unidades1 += unidades;
                break;
            case 2: recaudacion2 += importe;
                unidades2 += unidades;
                break;
            case 3: recaudacion3 += importe;
                unidades3 += unidades;
                break;
        }

        if (articulo !=0) {
            cout << "INGRESE ARTICULO, CANTIDAD, IMPORTE ";
            cin >> articulo >> unidades >> importe;
        }
    }
    cout << "RECAUDACION 1 " << recaudacion1 << endl;
    cout << "RECAUDACION 2 " << recaudacion2 << endl;
    cout << "RECAUDACION 3 " << recaudacion3 << endl;
    if (unidades1> unidades2 && unidades1 > unidades3) {
        cout << "ARTICULO MAS VENDIDO -UNIDADES ES 1 CON "<< unidades1 << endl;
    } else if (unidades2 > unidades3) {
        cout << "ARTICULO MAS VENDIDO -UNIDADES ES 2 CON "<< unidades2 << endl;
    } else {
        cout << "ARTICULO MAS VENDIDO -UNIDADES ES 3 CON "<< unidades3 << endl;
    }

	return 0;
}
