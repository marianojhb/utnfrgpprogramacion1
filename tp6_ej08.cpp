#include <iostream>

using namespace std;

int EsBisiesto(int a) {
    int res;
    if (a%4 == 0) {
        res=true;
        if (a%100 == 0) {
            res=false;
            if (a%400 == 0) {
                res=true;
            }
        }
    }
    return res;
}

int main() {
    int anio;
    int res;
    int contarBisiesto = 0;
    for(int i = 0; i<4; i++) {
        cout << "INGRESE ANO ";
        cin >> anio;
        if (EsBisiesto(anio))
            contarBisiesto++;
    }
    cout << endl;
    cout << "Cantidad de anios bisiestos " << contarBisiesto << endl;
    cout << endl;
    return 0;
}
