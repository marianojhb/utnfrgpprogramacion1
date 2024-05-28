// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;


void cargarVector(int v[], int cant){
    for (int i=0; i<cant;i++) {
        cout << "INGRESE NUM #" << i+1 << ": ";
        cin >> v[i];
    }
}

float calcularPromedio(int v[], int cant) {
    int promedio;
    int suma=0;
    for (int i=0; i<cant; i++)
    {
        suma += v[i];
    }
    promedio = (float)suma/cant;
    return promedio;
}

int cantMayores(int v[], int cant, int valorComparacion) {
    int cantMayores=0;
    cout << "cantMayores=" << cantMayores << endl;
    for (int i=0; i<cant; i++) {
        if (v[i]>valorComparacion)
        {
            cantMayores++;
            cout << "cantMayores=" << cantMayores << endl;
        }
    }
    return cantMayores;
}

int main()
{
    const int TAM=3;
    int valorComparacion;
    int promedio;
    int respuesta;


    // vector

    int vEdad[TAM];
    int menu=0;
    cout << "INGRESAR VALOR COMPARACION " << endl;
    cout << "1. PROMEDIO" << endl;
    cout << "2. INGRESO MANUAL" << endl;
    cin >> menu;

    // ingresar los datos
    cout << "INGRESAR LAS EDADES: " << endl;
    cargarVector(vEdad,TAM);
    cout << endl;



    switch (menu) {
        case 1:
            promedio=calcularPromedio(vEdad, TAM);
            valorComparacion=promedio;
            respuesta=cantMayores(vEdad, TAM, valorComparacion);
            cout << "CANTIDAD DE ALUMNOS CON EDADES MAYORES AL PROMEDIO " << respuesta;
            break;

        case 2:
            cout << "INGRESE VALOR A COMPARAR: ";
            cin >> valorComparacion;
            respuesta = cantMayores(vEdad, TAM, valorComparacion);
            cout << "CANTIDAD DE ALUMNOS CON EDADES MAYORES AL INGRESO " << respuesta;
            break;
    }



    return 0;
}
