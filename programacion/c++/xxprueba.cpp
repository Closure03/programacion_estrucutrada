#include <iostream>
#include <ctime>
#include <stdio.h>
using namespace std;
int main()
{
/*Desarrolle un software que permita calcular el pago mensual de salario para un empleado ingresando el número de horas diarias trabajadas por este y el pago por hora.
Se debe tener en cuenta el número total de días para cada mes (31, 30 o 28), cada hora trabada por encima de las 8 horas de una Jornada laboral será pagada al doble.
Si el empleado ha trabajado domingos y festivos se liquidarán estas horas al triple ( tener en cuenta el calendario 2022 de Colombia para el manejo de días festivos)*/

float horas_diarias_trabajadas, horas_trabajadas_mes, pago, pago_mensual, pf, pt;
string domingos_festivos, mes;
int i;
 cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"---------------------Programa para calcular salario-----------------------------"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Ingrese el nombre del mes a calcular: "<<endl;
    cout<<"1. Enero ----- 2. Febrero ----- 3. Marzo "<<endl;
    cout<<"4. Abril ----- 5. Mayo -------- 6. Junio "<<endl;
    cout<<"7. Julio ----- 8. Agosto ------ 9. Septiembre "<<endl;
    cout<<"10. octubre ----- 11. noviembre ----- 12. diciembre "<<endl;
cin>>mes;

if (mes=="enero")
for (i=0;i=28;i++){

cout<<"Ingrese la cantidad de horas diarias trabajadas: ";
cin>>horas_diarias_trabajadas;
cout<<"Ingrese el pago por hora: ";
cin>>pago;
cout<<"¿Trabajo domingos y/o festivos durante el mes?: ";
cin>>domingos_festivos;


if (horas_diarias_trabajadas > 8)
{
pago = ((horas_diarias_trabajadas - 8) * 2);
}




if (mes == "enero")
horas_trabajadas_mes = horas_diarias_trabajadas * 26;
pago_mensual = horas_trabajadas_mes * pago;
cout<<"El pago de este mes es: "<<pago_mensual<<endl;
}
if (domingos_festivos == "Si")
{
horas_trabajadas_mes = horas_diarias_trabajadas * 26;
pf = ((horas_diarias_trabajadas * 5) * (pago * 3));
pago_mensual = ((horas_trabajadas_mes * pago) + pf);
cout<<"El pago de este mes es: "<<pago_mensual<<endl;
}
}

return 0;
}
