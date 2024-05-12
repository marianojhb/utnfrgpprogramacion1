// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Hacer un programa para ingresar los consumos de electricidad de los clientes de una empresa. Cada registro
contiene los siguientes datos:
- Número de cliente
- Localidad del cliente (1, 2 o 3)
- Kilovatios consumidos

El lote finaliza con un registro con número de cliente igual a cero. El precio es escalonado según la siguiente
escala:
$ 10 por kilovatio por los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo de 201 kilovatios en adelante.

Además hay un cargo fijo de $ 100.
Ejemplo A: Consumo de 55 kilovatios, se calculará: $ 10 x 55 + $ 100= $ 650 Ejemplo B: Consumo de 125 kilovatios,
se calculará: $ 10 x 100 + $ 12 x 25 + $ 100=$ 1400
Ejemplo C: Consumo de 250 kilovatios, se calculará: $10 x 100+ $12 x 100 + $15 x 50 + $100= $ 3050
Ejemplo D: Consumo de 0 kilovatios, se calculará: $ 10 x 0 + $ 100= $ 100

Se pide determinar e informar:
a) El número de cliente que tuvo la mayor cantidad de Kilovatios consumidos para cada una de las 3 localidades.
Se listan 3 resultados, uno para cada una de las 3 localidades
b) El total de recaudación para cada una de las 3 localidades. Se listan 3 resultados, uno para cada una de las 3
localidades
c) El número de cliente que tuvo la menor cantidad de Kilovatios consumidos excluyendo a los clientes que tuvieron
 Kilovatios consumidos con valor cero. Se lista 1 resultado.
*/



# include<iostream>

using namespace std;

int main() {
    int cliente, localidad, kilovatios;

    // Variables punto a):
    int clienteMayorConsumo1, kilovatiosMayorConsumo1, localidadMayorConsumo1;
    int clienteMayorConsumo2, kilovatiosMayorConsumo2, localidadMayorConsumo2;
    int clienteMayorConsumo3, kilovatiosMayorConsumo3, localidadMayorConsumo3;
    bool localidad1bool = false;
    bool localidad2bool = false;
    bool localidad3bool = false;

    cout << "Ingrese cliente, localidad (1,2,3) y kilovatios ";
    cin >> cliente >> localidad >> kilovatios;
    switch (localidad) {
        case 1:
            clienteMayorConsumo1 = cliente;
            kilovatiosMayorConsumo1 = kilovatios;
            localidadMayorConsumo1 = localidad;
            break;
        case 2:
            clienteMayorConsumo2 = cliente;
            kilovatiosMayorConsumo2 = kilovatios;
            localidadMayorConsumo2 = localidad;
        break;
        case 3:
            clienteMayorConsumo3 = cliente;
            kilovatiosMayorConsumo3 = kilovatios;
            localidadMayorConsumo3 = localidad;
        break;
    }
    while (cliente!=0) {
//        if (kilovatios > kilovatiosMayorConsumo) {
//            clienteMayorConsumo = cliente;
//            kilovatiosMayorConsumo = kilovatios;
//            localidadMayorConsumo = localidad;
//        }

        if (cliente !=0) {
            cout << "Ingrese cliente, localidad (1,2,3) y kilovatios ";
            cin >> cliente >> localidad >> kilovatios;
        }
    }
	return 0;
}
