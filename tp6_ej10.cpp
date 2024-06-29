#include <iostream>

using namespace std;

void Codigo(int id, int &naipe, string &palo) {
    switch (id) {
    case 1 ... 7:
        naipe=id;
        palo="Espada";
             break;
    case 8 ... 10:
        naipe=id+2;
        palo="Espada";
             break;
    case 11 ... 17:
        naipe=id-10;
        palo="Basto";
             break;
    case 18 ... 20:
        naipe=id-10+2;
        palo="Basto";
        break;
    case 21 ... 27:
        naipe=id-20;
        palo="Copa";
        break;
    case 28 ... 30:
        naipe=id-20+2;
        palo="Copa";
        break;
    case 31 ... 37:
        naipe=id-30;
        palo="Oro";
        break;
    case 38 ... 40:
        naipe=id-30+2;
        palo="Oro";
        break;
    }

}

int main() {
    int id,naipe;
    string palo;
    cout << "INGRESE NAIPE# ";
    cin >> id;

    Codigo(id, naipe, palo);

    cout << "El naipe con codigo " << id << " es el " << naipe << " de " << palo << endl;
    cout << endl;
    return 0;
}
