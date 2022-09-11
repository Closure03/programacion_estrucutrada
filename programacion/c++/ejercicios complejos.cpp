#include <iostream>
using namespace std;
#include <ctime>

int main() {    // ==================
  struct tm myt;
  myt.tm_sec = 1;   myt.tm_min = 30; myt.tm_hour = 9;
  myt.tm_mday = 22; myt.tm_mon = 11; myt.tm_year = 56;
  myt.tm_wday = 4;  myt.tm_yday = 0; myt.tm_isdst = 0;

  char* cTim = asctime(&myt);
  cout << "Fecha resultante: " << cTim;
   
    float horas,dias,festivos,festivos_condicional_final, i,i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;// se declaran variables con el fin de identificar cada una de las operaciones, por otro lado las ¨i1,i2...¨ hacen referencia a la conversion de char a float
    string i_conti;//contador de i
    int mes,mes_cont;
    float enero,febrero,marzo,abril,mayo,junio,julio,agosto,septiembre,octubre,noviembre,diciembre;
    string festivos_condicional;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"---------------------Programa para calcular salario-----------------------------"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Ingrese el mes a calcular: ";cin>>mes;
    
    enero=i1,febrero=i2,marzo=i3,abril=i4,mayo=i5,junio=i6,julio=i7,agosto=i8,septiembre=i9,octubre=i10,noviembre=i11,diciembre=i12;
    i1=28,i2=28,i3=31,i4=30,i5=30,i6=30,i7=31,i8=31,i9=31,i10=31,i11=30,i12=31;
    mes_cont=i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
    
    for(i=0;i=mes_cont;i++){
    cout<<"ingrese cuantas horas trabajo el dia"  " trabajo durante el mes: ";
    cin>>horas;
    if (horas>=mes) {
    cout<<"trabajo horas festivas? si   no "<<endl;
    cin>>festivos_condicional;
}
    else if (festivos_condicional=="si")
    {
        cout<<"cuantas horas festivas trabajo?: ";
        cin>>festivos;
        festivos_condicional_final=festivos*3;
    }}
    
	
  return 0;
}
