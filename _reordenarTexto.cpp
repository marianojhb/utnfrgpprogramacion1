#include <iostream>

using namespace std;


void mostrarVectorString(string vec[],int tam ){
    int i;
    cout << endl;
    for (i=0;i<tam ;i++ ){
        cout << "           " <<  vec[i] <<  " " << endl;
    }
    cout << endl;
    system("pause");
}

int main() {
    string a = "000 Vacio";
    string b = "123 Mariano";
    string c = "124 Carlos";

    string vec[3] = {a,b,c};

    string aux;
    for (int j=0; j<3-1; j++)
    {

        for(int i=0; i<3-1; i++) // 0
        {
            if (vec[i]<vec[i+1])
            {
                aux=vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=aux;
            }
        }
    }

 mostrarVectorString(vec,3);

    system("pause");

    return 0;
}
