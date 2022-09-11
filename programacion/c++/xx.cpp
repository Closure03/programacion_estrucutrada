#include <iostream>
#include <ctime>
#include <stdio.h>
using namespace std;


int main() {    // ==================
  struct tm myt;
  myt.tm_sec = 0;   myt.tm_min = 16; myt.tm_hour = 11;
  myt.tm_mday = 11; myt.tm_mon = 04; myt.tm_year = 22;
  myt.tm_wday = 0;  myt.tm_yday = 0; myt.tm_isdst = 0;

  char* cTim = asctime(&myt);
  cout << "Fecha resultante: " << cTim;
  	
    int mes_cont, horas_diarias, tarifa_pago, festivos, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12;
 int mes,i,i_conti,festivos_condicional;
    char enero,febrero,marzo,abril,mayo,junio,julio,agosto,septiembre,octubre,noviembre,diciembre;
    
    mes=enero,febrero,marzo,abril,mayo,junio,julio,agosto,septiembre,octubre,noviembre,diciembre;
  
    enero=i1,febrero=i2,marzo=i3,abril=i4,mayo=i5,junio=i6,julio=i7,agosto=i8,septiembre=i9,octubre=i10,noviembre=i11,diciembre=i12;
    
    i1=28,i2=28,i3=31,i4=30,i5=30,i6=30,i7=31,i8=31,i9=31,i10=31,i11=30,i12=31;
    
    mes_cont=i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12;
    //string enero=31;
    
    
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"---------------------Programa para calcular salario-----------------------------"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Ingrese el nombre del mes a calcular: "<<endl;
    cout<<"1. Enero ----- 2.Febrero ----- 3. Marzo "<<endl;
    cout<<"4. Abril ----- 5. Mayo ----- 6. Junio "<<endl;
    cout<<"7. Julio ----- 8. Agosto ----- 9. Septiembre "<<endl;
    cout<<"10. octubre ----- 11. noviembre ----- 12. diciembre "<<endl;
    cin>>mes;
    
    For(i=0;i=mes_cont;i++){
    	printf("escribe el dato %d",i);
    	scanf("%f",&horas_diarias);
	}
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    return 0;
}
    
