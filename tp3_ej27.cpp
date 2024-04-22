// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Una estación meteorológica registró una muestra climática de los últimos 15 días. Por cada día registró:
- Número de día (entero)
- Temperatura (float)
- Milímetros de lluvia (float)
- Visibilidad en km (float)
Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
- El número del día que se haya registrado la temperatura máxima.
- La amplitud térmica de todo el período.
- La cantidad de días con neblina.
- Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
- Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días. De lo contrario mostrar "Quincena seca".
NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
NOTA: Se considera neblina a una visibilidad menor a 2 km

*/
# include<iostream>

using namespace std;

int main() {
    int dia;
    float temperatura;
    float lluvia;
    float visibilidad;

    float diaTempMax;
    float minTemp;
    float maxTemp;

    int contarDiasNeblina = 0;
    int contarDiasLluvia = 0;

    // recorro los dias
    for (int i = 1; i<=15; i++) {
        cout << "ingresar dia " << i << ": temperatura lluvia visibilidad: " ;
        cin >> temperatura >> lluvia >> visibilidad;

        // seteos iniciales con el dia 1
        if (i==1){
            diaTempMax = dia;
            minTemp = temperatura;
            maxTemp = temperatura;
        }
        // comparaciones
        if (temperatura > maxTemp) {
            diaTempMax = i;
            maxTemp = temperatura;
        }
        if (temperatura < minTemp) {
            minTemp = temperatura;
        }
        if (visibilidad<=2) {
            contarDiasNeblina++;
        }
        if (lluvia > 0) {
            contarDiasLluvia++;
        }
    }

    // Informe del ejercicio
    cout << "Dia de máxima temperatura=" << diaTempMax << endl;
    cout << "Amplitud termica del período=" << maxTemp - minTemp << endl;
    cout << "Dias con neblina=" << contarDiasNeblina << endl;
    if (contarDiasLluvia>7) {
        cout << "Quincena lluviosa" << endl;
    } else if (contarDiasLluvia >= 5) {
        cout << "Quincena húmeda" << endl;
    } else {
        cout << "Quincena seca" << endl;
    }


	return 0;
}
