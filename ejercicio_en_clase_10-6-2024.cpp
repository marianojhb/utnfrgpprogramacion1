// Ejercicio TP Ej
// Autor:
// Fecha:
// Comentario

# include<iostream>

using namespace std;




int main() {
    int libro=3;
    int reg=5;
    int field=4;

    int vec[libro][reg][field];
    for (int l=0;l<libro;l++) {
      for (int i=0; i < reg; i++) {
        for (int j=0 ; j < field; j++)
          vec[l][i][j]=j;
      }
    }

   for (int l=0; l<libro;l++) {
      for (int i=0;i<reg;i++) {
        cout <<  "| " ;
        for (int j=0; j<field; j++) {
          cout << "L" << l+1 <<  " R" << i+1 << " C" << j+1 << " | ";
        }
        cout << endl;
        cout << "---------------------------------------------" << endl;

      }
      cout << endl << endl;
    }


    return 0;
}
