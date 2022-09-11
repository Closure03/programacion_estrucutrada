#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numeros[100][100], filas,columnas;
    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

        //ALmancenando elementos en la matriz
for (int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        cout<<"Digite un numero ["<<i<<"]["<<j<<"]";
        cin>>numeros[i][j];
    }
}
//Mostrando La matriz
for(int i=0;i<filas;i++)
    for (int j=0;j<columnas;j++){
        cout<<numeros[i][j];
    cout<<"\n";}
    return 0 ;
}
