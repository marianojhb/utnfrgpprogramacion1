#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int lanzamiento (int &puntaje)
{
    int maximo=0;
    for(int i=0; i<3; i++)
    {
        srand(time(NULL));
        system("cls");
        puntaje=rand()%20+1;
        cout << "Lanzamiento " << i+1 << endl;
        // reglas del puntaje de los dados
        // ...
        // ...

        cout << "Puntaje del lanzamiento " << puntaje << endl;

        if (puntaje>maximo)
        {
            maximo = puntaje;
        }

        cout <<endl;
        system("pause");
    }
    system("cls");
    cout << "Puntaje maximo de los 3 lanzamientos: " << maximo << endl;
    cout <<endl;
    system("pause");
    return maximo;
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
        puntaje=0;
        cout <<endl;
        system("pause");
        for (int i = 0; i<2; i++ )
        {
            if (i==0)
            {
                system("cls");
                cout << "Turno de " << nombre1 << endl;
                cout <<endl;
                system("pause");
                int maximo=lanzamiento(puntaje);
                puntajeTotal_1 += maximo;
                system("cls");
                cout << "Puntaje Total de "<< nombre1 << " es "  << puntajeTotal_1 << endl;
                cout <<endl;
                system("pause");
            }
            else if (i==1)
            {
                system("cls");
                cout << "Turno de " << nombre2 << endl;
                cout <<endl;
                system("pause");
                int maximo=lanzamiento(puntaje);
                puntajeTotal_2 += maximo;
                system("cls");
                cout << "Puntaje Total de "<< nombre2 << " es "  << puntajeTotal_2 << endl;
                cout <<endl;
                system("pause");
            }
        }
        ronda++;
    }
    if(puntajeTotal_1>puntajeTotal_2)
    {
        cout << "Gano " << nombre1 << " con " << puntajeTotal_1 << endl;
        cout << "Perdio " << nombre2 << " con " << puntajeTotal_2 << endl;
    }
    else
    {
        cout << "Gano " << nombre2 << " con " << puntajeTotal_2 << endl;
        cout << "Perdio " << nombre1 << " con " << puntajeTotal_1 << endl;

    }

    return 0;
}
