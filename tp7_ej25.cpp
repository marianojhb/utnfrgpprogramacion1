#include <iostream>

using namespace std;

void vectora0(int vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        vec[i]=0;
    }
}

int buscaPlanMasVendido(int ventasPorPlan[], int tam)
{
    int maximo = ventasPorPlan[0];
    int planMasVendido;

    for(int i=1; i<tam; i++)
    {
        if (ventasPorPlan[i] > maximo)
        {
            maximo = ventasPorPlan[i];
            planMasVendido = i+1;
        }
    }
    return planMasVendido;
}


int main()
{
    int tam=3; // cantidad de planes
    int plan;
    int rectotal = 0; // recaudación total
    int planMasVendido;

    // vectores:
    int pcont[tam]; // precio contado por plan (el nro plan es el indice)
    int ptarj[tam]; // precio tarjea por plan (el nro plan es el indice)
    int ventasPorPlan[tam]; // sumo pasajeros por plan vendido

    // inicializo los vectores:
    vectora0(pcont, tam);
    vectora0(ptarj, tam);
    vectora0(ventasPorPlan, tam);


    cout << "*** LOTE DE CARGA ***" << endl << endl;

    for(int i=0; i<tam; i++)
    {
        cout << "PLAN ";
        cin >> plan;
        cout << "PRECIO CONTADO ";
        cin >> pcont[plan-1];
        cout << "PRECIO TARJETA ";
        cin >> ptarj[plan-1];
        cout << endl;
    }

    cout << endl << "*** LOTE DE REGISTROS ***" << endl << endl;

    int local, pax, cpago, precio, nroventa=1;

    cout << "VENTA 1 " << endl;
    cout << "LOCAL ";
    cin >> local;
    cout << "PLAN ";
    cin >> plan;
    cout << "PERSONAS ";
    cin >> pax;
    cout << "CODIGO DE PAGO ";
    cin >> cpago;
    cout << endl;

    while(local!=9)
    {

        if (cpago ==  1)
        {
            precio = pcont[plan-1];
        }
        else
        {
            precio = ptarj[plan-1];
        }

        ventasPorPlan[plan-1] += pax;

        // Respuesta (a)
        rectotal = rectotal + pax * precio;



        // REINICIO LOOP WHILE
        nroventa++;
        cout << "VENTA " << nroventa << endl;
        cout << "LOCAL ";
        cin >> local;
        if (local!=9)
        {
            cout << "PLAN ";
            cin >> plan;
            cout << "PERSONAS ";
            cin >> pax;
            cout << "CODIGO DE PAGO ";
            cin >> cpago;
            cout << endl;
        }
    }
    cout << endl << endl << "*** SALIDAS ***" << endl << endl;

    // Salida punto (a)
    cout << "Punta (a). Recaudacion Total = $" << rectotal << endl << endl;

    // Salida punto (b)
    planMasVendido = buscaPlanMasVendido (ventasPorPlan, tam);
    cout << "Punto (b). Plan mas vendido = " << planMasVendido << endl << endl;

    system("pause");

    return 0;
}
