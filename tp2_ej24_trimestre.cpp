// Ejercicio TP2 Ej24
// Autor: MB
// Fecha: 24-3-2024
// Comentario

# include<iostream>

using namespace std;

int main() {

    int mes;
    int trimestre;
    int cociente;
    float resto;
    float resultado;

    cout << "Ingrese el mes: ";
    cin >> mes;
    cociente = mes / 12;
    resto = ((float)mes/12 - cociente ) * 12;
    if (resto == 0) {
        trimestre = 4;
    } else if (resto < 4) {
        trimestre = 1;
    } else if (resto < 7) {
        trimestre = 2;
    } else if (resto < 10) {
        trimestre = 3;
    } else {
        trimestre = 4;
    }
    cout << "El mes " << mes << " se corresponde con el trimestre: " << trimestre << endl;

	return 0;
}
