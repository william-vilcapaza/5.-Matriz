#include <iostream>

using namespace std;

int main()
{
    int numeros[100][100], filas, columnas;
    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //almacenando la matriz en forma de espejo
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] : ";
            cin>>numeros[j][i];//forma de espejo
        }
    }
    //mostrando matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }



    return 0;
}
