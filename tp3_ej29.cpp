// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona. Por cada partido se registró:
    • Número de partido
    • Minutos jugados
    • Tarjetas amarillas
    • Tarjetas rojas
    • Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
    • La cantidad de partidos que no jugó (partidos con minutos igual a cero)
    • La cantidad de partidos que jugó por completo (minutos >= 90)
    • El promedio de tarjetas recibidas por partido.
    • El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
    • La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.
    */

# include<iostream>

using namespace std;

int main() {

    int numero; // numero de partido
    int minutos;
    int amarillas;
    int rojas;
    int goles;

    int partidosTotales = 6;

    // buscar
    int partidosSinJugar = 0;
    int partidosCompletados = 0;
    int tarjetas = 0;
    int partidoConMasGoles = -1;
    int partidoConMasGolesGoles = -1;
    int racha = 0;
    bool marcoUltimo;
    int mejorRacha = 0;


    // cantidad de partidos = 19
    for (int i=1; i<=partidosTotales; i++) {
        cout << "Partido " << i << ": min jugados, amarillas, rojas, y goles: ";
        numero = i;
        cin >> minutos >> amarillas >> rojas >> goles;

        if (minutos == 0) {
            partidosSinJugar++;
        } else if (minutos >= 90) {
            partidosCompletados++;
        }

        tarjetas += rojas;
        tarjetas += amarillas;

        if (goles > partidoConMasGolesGoles) {
            partidoConMasGoles = i;
            partidoConMasGolesGoles = goles;
        }

        // racha
        if (goles > 0) {
            racha++;
            marcoUltimo = true;
            if (racha > mejorRacha) {
            mejorRacha = racha;
            }
        } else {
            marcoUltimo = false;
            racha = 0;
        }
    }

    cout << "Partidos que no jugó: " << partidosSinJugar << endl;
    cout << "Partidos completados: " << partidosCompletados << endl;
    cout << "Promedio de tarjetas por partido: " << (float)tarjetas/partidosTotales*100 << "% " << endl;
    cout << "Partido con mas goles fue el " << partidoConMasGoles << ", con " << partidoConMasGolesGoles << " goles." << endl;
    cout << "Mejor racha: " << mejorRacha << endl;

	return 0;
}
