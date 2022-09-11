#include <istream>
#include<conio.h>

using namespace std;
int main (){
int [10][2], filas,columnas;

cout<<"digite el numero de filas: ";
cin>>filas;
cout<<"digite el numero de columnas: ";
cin>>columnas;
}
//almacenando elementos en la matriz

for(int i=0;i<filas;i++)// se define ciclo for mpara filas y columnas//
for(int j=0;j<columnas;j++){
cout<<"digite un numero: ["<<i<<"]["<<j<<"]: ";//[0][1] posicion//se organizan los numero de a cuerdo a la fila y columna// 
cin>>numeros[i][j];
}
//mostrando la matriz
for(int i=0;i<filas;i++)
for(int j=0;j<columnas;j++){
cout<<numeros[i][j];
}
cout<<"\n";
}
return 0;
}
}            
