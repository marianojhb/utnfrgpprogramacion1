#include <iostream>

using namespace std;

void veczero(int vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        vec[i]=0;
    }
}

int buscaSucursalMasVendedora(int cvendidaPorSucursal[], int sucursales)
{
    int mayor = cvendidaPorSucursal[0];
    int respuesta;

    for (int i = 1; i < sucursales; i++ )
    {
        if (cvendidaPorSucursal[i] > mayor )
        {
            mayor = cvendidaPorSucursal[i];
            respuesta = i+1;
        }
    }
    return respuesta;
}

int main()
{

    // Variables

    int tam = 3; // tamaño del lote de carga

    int sucursales = 5; // cantidad de sucursales

    int articulo, sucursal, cvendida; // campos del lote de registro

    int rectotal = 0; // recaudacion total

    int pos; // posicion del indice del vector precio

    int sucursalMasVendedora;


    // Vectores

    int precio[tam]; // precio por articulo (codigo de articulo es el indice + 1)

    int cvendidaPorArticulo[tam]; // cantidad vendida por articulo

    int cvendidaPorSucursal[sucursales]; // Sucursal que mas cantidad de articulos vendio


    // Inicializacion de vectores a 0

    veczero(precio,tam);

    veczero(cvendidaPorArticulo, tam);

    veczero(cvendidaPorSucursal, sucursales);


    // Lote de carga de datos

    cout << "*** LOTE DE CARGA ***" << endl;

    for (int i=0; i<tam; i++)

    {
        cout << "ARTICULO ";

        cin >> pos;

        cout << "PRECIO UNITARIO ";

        cin >> precio[pos-1];
    }


    // Lote de registros

    cout << endl << "*** LOTE DE REGISTROS ***" << endl;

    cout << "ARTICULO ";

    cin >> articulo;

    cout << "SUCURSAL ";

    cin >> sucursal;

    cout << "UNIDADES VENDIDAS ";

    cin >> cvendida;

    cout << endl;


    while(articulo!=0)

    {

        // punto (a)

        cvendidaPorArticulo[articulo-1] += cvendida;

        // punto (b)

        rectotal += cvendida * precio[articulo-1];

        // punto (c)

        cvendidaPorSucursal[sucursal-1] += cvendida;


        cout << "ARTICULO ";

        cin >> articulo;

        if(articulo !=0)

        {

            cout << "SUCURSAL ";

            cin >> sucursal;

            cout << "UNIDADES VENDIDAS ";

            cin >> cvendida;

            cout << endl;

        }
    }

    // Punto (c)

    sucursalMasVendedora = buscaSucursalMasVendedora(cvendidaPorSucursal, sucursales);

    // Salida de datos

    cout << endl << "*** SALIDA ***" << endl;


    // Punto a

    cout << endl << "Punto (a) Cantidad total vendida por cada articulo." << endl;

    for(int i=0; i<tam; i++)

    {

        cout << "ARTICULO " << i+1 << "  CANT " << cvendidaPorArticulo[i] << endl;

    }


    // Punto b

    cout << endl << "Punto (b) Monto total recaudado por la empresa." << endl;

    cout << "Total recaudado = $" << rectotal << endl;


    // Punto c

    cout << endl;

    cout << endl << "Punto (c) Sucursal que vendio mayor cantidad de articulos." << endl;

    cout << "Sucursal = " << sucursalMasVendedora << endl;

    system("pause");

    return 0;
}
