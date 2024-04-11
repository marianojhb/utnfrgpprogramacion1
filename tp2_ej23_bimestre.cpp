// Ejercicio TP2 Ej23
// Autor: MB
// Fecha: 25-3-24
// Comentario: Ingresar un mes y devuelve el bimestre correspondiente. El mes puede excederse de 12.

# include<iostream>

using namespace std;

int main() {
    int mes, bimestre;
    float resto;

    cout << "Ingrese el mes: ";
    cin >> mes;
    resto = ((float)mes / 12 - mes/12)*12;
    if (resto == 0) {
        bimestre = 6;
    } else if (resto<=2) {
        bimestre=1;
    } else if (resto<=4) {
        bimestre=2;
    } else if (resto<=6) {
        bimestre=3;
    } else if (resto<=8) {
        bimestre=4;
    } else if (resto<=10){
        bimestre=5;
    } else {
        bimestre=6;
    }
    cout << "Mes="<< mes << " Bimestre=" << bimestre << endl;
	return 0;
}
