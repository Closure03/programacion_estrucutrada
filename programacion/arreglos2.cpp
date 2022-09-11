#include <iostream>

using namespace std;

int main(){
int arreglo[10],arreglo2[10],arregloT[10];

for(int i=0;i<10;i++){
	cout<<"------ingrese el numero :"<< i <<"\n  ";
	cin>> arreglo[i];
}

cout<<"------Segundo Arreglo: \n ";

for(int b=0;b<10;b++){
	cout<<"------ingrese el numero :"<< b <<"\n  ";
	cin>> arreglo2[b];
}
for(int a=0;a<10;a++){
cout<<"\n";
arregloT[a]=arreglo[a]+arreglo2[a];
}
for (int i=9;i>=0;i--){
cout<<arregloT[i]<<endl;
}
return 0;
}

