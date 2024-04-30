// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario
/*
Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP.
Por cada registro de examen se conoce:
    • Legajo del estudiante (entero)
    • Código de materia (entero)
    • Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  Calcular e informar:
    • La nota promedio entre todos los estudiantes.
    • El legajo del estudiante con menor nota.
    • La cantidad de exámenes rendidos para la materia 10.
    • El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.



*/

# include<iostream>

using namespace std;

int main() {

    int legajo, materia, cantLegajos=0, legajoMinimaNota, cantLegajosMateria10=0, aprobados=0, noAprobados=0;
    float nota, promedio, sumaNotas, minimaNota;

    cout << "INGRESE LEGAJO MATERIA Y NOTA ";
    cin >> legajo >> materia >> nota;
    minimaNota = nota;
    legajoMinimaNota = legajo;

    while (legajo<30000) {
        cantLegajos++;
        sumaNotas += nota;
        promedio = sumaNotas / (float)cantLegajos;

        if (nota < minimaNota) {
            minimaNota = nota;
            legajoMinimaNota = legajo;
        }

        if (legajo == 10) {
            cantLegajosMateria10++;
        }

        if (nota >=6) {
            aprobados++;
        } else {
            noAprobados++;
        }

        if (legajo < 30000) {
            cout << "INGRESE LEGAJO MATERIA Y NOTA ";
            cin >> legajo >> materia >> nota;
        }

    }

    cout << "PROMEDIO " << promedio << endl;
    cout << "MINIMA NOTA " << minimaNota << endl;
    cout << "LEGAJO MINIMA NOTA " << legajoMinimaNota << endl;
    cout << "EXAMENES RENDIDOS MATERIA 10 " << cantLegajosMateria10 << endl;
    cout << "APROBADOS " << aprobados / (float)cantLegajos << endl;

	return 0;
}
