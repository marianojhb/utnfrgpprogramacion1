#include <iostream>

using namespace std;

void mostrarVector(int vec[],int tam )
{
    int i;
    for (i=0; i<tam ; i++ )
    {
        cout << vec[i] <<  " ";
    }
    cout << endl;
}

void reordenarVector(int vec[], int tam)
{
    int aux;
    for(int i=0; i<tam; i++)
    {
        while (i<tam)
        {

            if (vec[i]<vec[i+1])
            {
                aux=vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=aux;
            }
        }
    }


}

int main()
{
    int tam = 5;
    int vec[tam]= {4,2,6,1,7};


    int aux;
    for (int j=0; j<tam-1; j++)
    {

        for(int i=0; i<tam-1; i++) // 0
        {
            if (vec[i]<vec[i+1])
            {
                aux=vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=aux;
            }
        }
    }


    mostrarVector(vec,tam);


    system("pause");

    return 0;
}
