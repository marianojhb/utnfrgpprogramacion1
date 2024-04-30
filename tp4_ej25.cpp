// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
El festival Larapalooza, el mejor festival musical del mundo, brindará una serie de conciertos distribuidos
en tres jornadas distintas. Se desea un programa que registre los artistas que participarán.
Por cada artista se registró:
    • Número de artista (entero)
    • Integrantes (entero)
    • Jornada (1, 2 o 3)
    • Duración del show en minutos (entero)

La información no se encuentra ordenada bajo ningún criterio. La carga de datos se finaliza con un número
de artista igual a cero. Calcular e informar:
    • El número de artista que realice el show más largo de la jornada 1.
    • La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas.
    (se muestran tres resultados).
    • La jornada más extensa (en minutos totales).
    • Duración promedio de show por artista (se muestra un resultado).

*/


# include<iostream>

using namespace std;

int main() {
    int artista, integrantes, jornada, duracion;
    int maximaDuracionJornada1, artistaMaximaDuracionJornada1;
    int solistas1=0, solistas2=0, solistas3=0;
    int jornadaduracion1=0, jornadaduracion2=0, jornadaduracion3=0;
    int cantArtistas=0;

    cout << "INGRESE ARTISTA, INTEGRANTES, JORNADA  (1, 2 o 3), DURACION ";
    cin >> artista >> integrantes >> jornada >> duracion;
    if (jornada == 1) {
        artistaMaximaDuracionJornada1 = artista;
        maximaDuracionJornada1 = duracion;
    }
    while(artista!=0) {
        cantArtistas++;
        if (jornada==1) {
            if (duracion > maximaDuracionJornada1) {
                artistaMaximaDuracionJornada1 = artista;
                maximaDuracionJornada1 = duracion;
            }

        }

        if (integrantes==1) {
            switch (jornada) {
                case 1: solistas1++;
                    break;
                case 2: solistas2++;
                    break;
                case 3: solistas3++;
                    break;
            }


        }

        switch (jornada) {
            case 1: jornadaduracion1 += duracion;
                break;
            case 2: jornadaduracion2 += duracion;
                break;
            case 3: jornadaduracion3 += duracion;
                break;

        }

        if(artista!=0) {
            cout << "INGRESE ARTISTA, INTEGRANTES, JORNADA, DURACION ";
            cin >> artista >> integrantes >> jornada >> duracion;

        }
    }

    cout << "ARTISTA MAXIMA DURACION JORNADA1 " << artistaMaximaDuracionJornada1 << endl;
    cout << "DURACION DE ARTISTA MAXIMA DURACION JORNADA1 " << maximaDuracionJornada1 << endl;
    cout << "SOLISTAS JORNADA 1 " << solistas1 << endl;
    cout << "SOLISTAS JORNADA 2 " << solistas2 << endl;
    cout << "SOLISTAS JORNADA 3 " << solistas3 << endl;


    if (jornadaduracion1 > jornadaduracion2 && jornadaduracion1 > jornadaduracion3) {
        cout << "JORNADA 1 FUE LA MAS EXTENSA" << endl;
    } else if (jornadaduracion2 > jornadaduracion3) {
        cout << "JORNADA 2 FUE LA MAS EXTENSA" << endl;
    } else {
        cout << "JORNADA 3 FUE LA MAS EXTENSA" << endl;
    }
    cout << "CANTIDAD DE ARTISTAS " << cantArtistas << endl;
    cout << "DURACION JORNADA 1 " << jornadaduracion1 << endl;
    cout << "DURACION JORNADA 2 " << jornadaduracion2 << endl;
    cout << "DURACION JORNADA 3 " << jornadaduracion3 << endl;

    cout << "EL PROMEDIO DE DURACIÓN DE SHOW POR ARTISTA ES DE " << (float)(jornadaduracion1+jornadaduracion2+jornadaduracion3)/cantArtistas << endl;
	return 0;
}
