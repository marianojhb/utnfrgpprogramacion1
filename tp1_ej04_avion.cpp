// Ejercicio TP 1 Ej 4
// Autor: DEK
// Fecha:
// Comentario

# include<iostream>

/*
DATOS DE ENTRADA: cantidad de asientos totales, cantidad de pasajes vendidos
SALIDA: porcentaje de ocupación y el porcentaje de no ocupación
PROCESO PARA CONVERTIR LA ENTRADA EN SALIDA

cálculo de porcentaje
    porOcupación=parcial*100/total
*/

using namespace std;

int main() {

    //declaracion de variables
    int pasajes,asientos;
    float porOcupacion;

    cout<<"Ingrese la cantidad de asientos totales: ";
    cin >> asientos;
    cout <<endl;
    cout<<"Ingrese la cantidad de asientos ocupados: ";
    cin >> pasajes;

    porOcupacion=100.0*pasajes/asientos;
    cout << "El porcentaje de ocupación del avion es: " << porOcupacion << "%" << endl;
    cout << "El porcentaje de no ocupación del avion es: " << 100-porOcupacion << "%" << endl;

	return 0;
}
