#include "iostream"
using namespace std;

int main()
{
    int matriz[4][3][3];
int i,j,k;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)//Ciclo interno
        {
        for(int k = 0; k < 10; k++){
            //Llenamos la matríz con los números del 1 al 100
            matriz[i][j][k] = (i+1)*(j+1)*(k+1);
            //(i+1)*(j+1) va desde 1x1 hasta 10x10 (aunque en desorden)
        }
    }
    }
cout<<matriz[i][j][k]<<endl;

    system("pause");
    return 0;
}




