#include <iostream>

using namespace std;

void Dia(int dia, string &nombre) {
    switch (dia) {
    case 0:
        nombre="Domingo";
        break;
    case 1:
        nombre="Lunes";
        break;
    case 2:
        nombre="Martes";
        break;    case 3:
        nombre="Miércoles";
        break;
    case 4:
        nombre="Jueves";
        break;
    case 5:
        nombre="Viernes";
        break;
    case 6:
        nombre="Sabado";
        break;
    }
}

int main() {
    int num;
    string dia;

    cout << "INGRESE NUM ";
    cin >> num;
    cout << endl;

    Dia(num, dia);

    cout << num << "-> " << dia << endl;

    cout << endl;
    return 0;
}
