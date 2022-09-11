#include <iostream>

using namespace std;

int main() {
float primera,segunda,tercera,cuarta,total;
float porcentaje_primera,porcentaje_segunda,porcentaje_tercera,porcentaje_cuarta;
double porcentaje_total;
	
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"---------------             CALCULO DE NOTAS             ------------------"<<endl;
cout<<"---------------------------------------------------------------------------"<<endl;
	
cout<<"ingrese notas de 1.0 a 5.0 con decimales:      "<<endl;	
cout<<"ingrese la primera nota: ";
cin>>primera;
cout<<"ingrese la segunda nota: ";
cin>>segunda;
cout<<"ingrese la tercera nota: ";
cin>>tercera;
cout<<"ingrese la cuarta nota: ";
cin>>cuarta;

cout<<"----------Tabla de equivalencias-------------"<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"-------nota parcial----------porcentaje------"<<endl;
cout<<"       primera                  15%          "<<endl;
cout<<"       segunda                  15%          "<<endl;
cout<<"       tercera                  30%          "<<endl;
cout<<"       cuarta                   40%          "<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"---------------------------------------------"<<endl;

porcentaje_primera=primera*0.15;
porcentaje_segunda=segunda*0.15;
porcentaje_tercera=tercera*0.30;
porcentaje_cuarta=cuarta*0.40;
porcentaje_total=porcentaje_primera+porcentaje_segunda+porcentaje_tercera+porcentaje_cuarta;


total=primera*segunda*tercera*cuarta/4;


cout<<"el resultado total de cada una de las notas es: "<<endl;
cout<<"  "<<primera<<"     "<<porcentaje_primera<<"   "<<endl;
cout<<"  "<<segunda<<"     "<<porcentaje_segunda<<"   "<<endl;
cout<<"  "<<tercera<<"     "<<porcentaje_tercera<<"   "<<endl;
cout<<"  "<<cuarta<<"      "<<porcentaje_cuarta<<"    "<<endl;
cout<<"el promedio de notas es: "<<total<<" su equivalente en porcentaje es: "<<porcentaje_total<<"    "<<endl;


return 0;	
}
