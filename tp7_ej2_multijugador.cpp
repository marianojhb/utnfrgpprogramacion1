#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void lanzamiento (int &puntaje)
{
    int maximo=0;
    for(int i=0; i<3; i++)
    {
        system("cls");
//        puntaje=rand()%6+1;
        puntaje=17;
        cout << "Lanzamiento " << i+1 << endl;
        // reglas del puntaje de los dados
        // ...
        // ...

        cout << "Puntaje del lanzamiento " << puntaje << endl;

        if (puntaje>maximo)
        {
            maximo = puntaje;
        }
        system("pause");
    }
}

int main()
{
    srand(time(NULL));
    string nombre1;
    string nombre2;

    cout << "INGRESE JUGADOR1 ";
    cin >> nombre1;
    cout << "INGRESE JUGADOR2 ";
    cin >> nombre2;

    int puntajeTotal_1=0;
    int puntajeTotal_2=0;
    int puntaje=0;

    int ronda = 1 ;
    while ( puntajeTotal_1 < 50 && puntajeTotal_2 < 50)
    {

        system("cls");
        cout << "Ronda " << ronda << endl;
        system("pause");
        for (int i = 0; i<2; i++ )
        {
            if (i==0)
            {
                system("cls");
                cout << "Turno de " << nombre1 << endl;
                system("pause");
                lanzamiento(puntaje);
                puntajeTotal_1 += puntaje;
                system("cls");
                cout << "Puntaje de "<< nombre1 << " es "  << puntajeTotal_1 << endl;
                system("pause");
            }
            else if (i==1)
            {
                system("cls");
                cout << "Turno de " << nombre2 << endl;
                system("pause");
                lanzamiento(puntaje);
                puntajeTotal_2 += puntaje;
                system("cls");
                cout << "Puntaje de "<< nombre2 << " es "  << puntajeTotal_2 << endl;
                system("pause");
            }
        }
        ronda++;
    }

    return 0;
}
