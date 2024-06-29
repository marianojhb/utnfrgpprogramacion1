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

int validarFecha(int dia, int mes, int anio) {
    int validez=false;

    if (dia<=28 && mes<=12) {
        validez=true;
    } else {
        if (mes==1==3==5==7==8==10==12) {
            validez=true;
        } else {
            if (dia<=30) {
                if (mes !=2) {
                    validez=true;
                } else {
                    if (dia==29 && EsBisiesto(anio)) {
                        validez=true;
                    }
                }
            }
        }
    }
    return validez;
}



int main() {
    int dia;
    int mes;
    int anio;

    cout << "INGRESE DIA MES ANIO ";
    cin >> dia >> mes >> anio;

    if (validarFecha(dia,mes,anio)) {
        cout << "Fecha valida"<< endl;

    } else {
        cout << "Fecha invalida" << endl;
    }

    cout << endl;
    return 0;
}
