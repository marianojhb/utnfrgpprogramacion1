// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;

// FUNCIONES:

// 1) Carga el vector en sistema
void cargarVector(int v[], int cant) {
    for (int i=0; i<cant; i++) {
        cout << "INGRESE NUM #" << i+1 << ": ";
        cin >> v[i];
    }
}

// 2) Calcula el promedio de un vector
float calcularPromedio(int v[], int cant) {
    int promedio;
    int acumulador=0;
    for (int i=0; i<cant; i++) {
        acumulador += v[i];
    }
    promedio = (float)acumulador/cant;
    return promedio;
}

// (A) Cuenta los numeros mayores a un valor de comparación dado
int cantMayores(int v[], int cant, int valorComparacion) {
    int contador=0;
    for (int i=0; i<cant; i++) {
        if (v[i]>valorComparacion) {
            contador++;
        }
    }
    return contador;
}

// (B) Cuenta los numeros menores a un valor de comparación dado
int cantMenores(int v[], int cant, int valorComparacion) {
    int contador=0;
    for (int i=0; i<cant; i++) {
        if (v[i]<valorComparacion) {
            contador++;
        }
    }
    return contador;
}

// (C) Cuenta los numeros iguales a un valor de comparación dado
int cantIgual(int v[], int cant, int valorComparacion) {
    int contador=0;
    for (int i=0; i<cant; i++) {
        if (v[i]==valorComparacion) {
            contador++;
        }
    }
    return contador;
}

// (D) Busca el máximo
int maximo (int v[], int cant) {
    int maximo;
    for (int i=0; i<cant; i++) {
        if (i==0) {
            maximo=v[i];
        } else {
            if(v[i] > maximo) {
                maximo=v[i];
            }
        }

    }
    return maximo;
}

// (E) Busca el minimo
int minimo (int v[], int cant) {
    int minimo;
    for (int i=0; i<cant; i++) {
        if (i==0) {
            minimo=v[i];
        } else {
            if(v[i] < minimo) {
                minimo=v[i];
            }
        }

    }
    return minimo;
}

// (F) Busca la cantidad que se repite el maximo
int repeticionesMaximo (int v[], int cant) {
    int maximo;
    int repeticionesMaximo=0;
    for (int i=0; i<cant; i++) {
        if (i==0) {
            maximo=v[i];
        } else {
            if(v[i] > maximo) {
                maximo=v[i];
            } else if (v[i]== maximo) {
                repeticionesMaximo++;
            }
        }

    }
    return repeticionesMaximo;
}

// (G) Busca la cantidad que se repite el maximo
int repeticionesMinimo (int v[], int cant) {
    int minimo;
    int repeticionesMinimo=0;
    for (int i=0; i<cant; i++) {
        if (i==0) {
            minimo=v[i];
        } else {
            if(v[i] < minimo) {
                minimo=v[i];
            } else if (v[i]== minimo) {
                repeticionesMinimo++;
            }
        }

    }
    return repeticionesMinimo;
}


// FUNCION MAIN
int main() {
    // TAMAÑO DEL VECTOR
    int TAM;

    // MENU
    int menu=0;
    cout << "INGRESAR DIMENSION DEL VECTOR: ";
    cin >> TAM;
    system("cls");
    cout << "INGRESAR COMPARADOR:" << endl;
    cout << "1. PROMEDIO" << endl;
    cout << "2. INGRESO MANUAL" << endl;
    cout << endl;
    cin >> menu;
    system("cls");

    // VARIABLES NECESARIAS
    int valorComparacion;
    int respuesta;
    int vEdad[TAM];

    switch (menu) {

    case 1:
        // INGRESO DE DATOS
        cout << "INGRESAR LAS EDADES: " << endl;
        cargarVector(vEdad,TAM);
        cout << endl;
        valorComparacion = calcularPromedio(vEdad, TAM);
        respuesta = cantMayores(vEdad, TAM, valorComparacion);
        cout << "(1) CANTIDAD DE ALUMNOS CON EDADES MAYORES AL PROMEDIO: " << respuesta << endl;
        cout << endl;
        break;

    case 2:
        // INGRESO MANUAL DE VALOR A COMPARAR
        cout << "INGRESE VALOR A COMPARAR: ";
        cin >> valorComparacion;
        cout << endl;
        // INGRESO DE DATOS
        cout << "INGRESAR LAS EDADES: " << endl;
        cargarVector(vEdad,TAM);
        cout << endl;
        // RESPUESTA A
        respuesta = cantMayores(vEdad, TAM, valorComparacion);
        cout << "(A) CANTIDAD DE ALUMNOS CON EDADES MAYORES AL VALOR INGRESADO " << respuesta << endl;
        // RESPUESTA B
        respuesta = cantMenores(vEdad, TAM, valorComparacion);
        cout << "(B) CANTIDAD DE ALUMNOS CON EDADES MENORES AL VALOR INGRESADO " << respuesta << endl;
        // RESPUESTA C
        respuesta = cantIgual(vEdad, TAM, valorComparacion);
        cout << "(C) CANTIDAD DE ALUMNOS CON EDADES IGUAL AL VALOR INGRESADO " << respuesta << endl;
        cout << endl;
        break;
    }
    respuesta = maximo(vEdad, TAM);
    cout << "(D) VALOR MAXIMO INGRESADO " << respuesta << endl;
    cout << endl;
    respuesta = minimo(vEdad, TAM);
    cout << "(E) VALOR MINIMO INGRESADO " << respuesta << endl;
    cout << endl;
    respuesta = repeticionesMaximo(vEdad, TAM);
    cout << "(F) REPETICIONES DEL VALOR MAXIMO " << respuesta << endl;
    cout << endl;
    respuesta = repeticionesMinimo(vEdad, TAM);
    cout << "(G) REPETICIONES DEL VALOR MINIMO " << respuesta << endl;
    cout << endl;
    return 0;
}
