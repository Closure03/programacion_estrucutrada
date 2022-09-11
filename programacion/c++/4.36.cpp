/*Tarea #1

Desarrolle un software que permita calcular el pago mensual de salario para un empleado ingresando el número de horas diarias trabajadas por este y el pago por hora.
Se debe tener en cuenta el número total de días para cada mes (31, 30 o 28).
cada hora trabada por encima de las 8 horas de una Jornada laboral será pagada al doble.
Si el empleado ha trabajado domingos y festivos se liquidarán estas horas al triple ( tener en cuenta el calendario 2022 de Colombia para el manejo de días festivos)*/

#include <iostream>

using namespace std;

int main()
{
    float pago, mes, hora,dia, i;
    double salario=0;
    cout<<"\nintroduzca el mes a calcular\n"<<endl;
    cout<<"\n1.enero-----------2.febrero---------3.marzo-----------4.abril"<<endl;
    cout<<"\n5.mayo------------6.junio-----------7.julio-----------8.agosto"<<endl;
    cout<<"\n9.septiembre------10.octubre--------11.noviembre------12.diciembre"<<endl;
    cout<<"\n\n"<<endl;
    cout<<"que mes es?:";
    cin>>mes;
    cout<<"cuanto es el pago por hora?:";
    cin>>pago;
    if (mes == 1)//enero
    {
        for (i = 1; i<=31;i++)
        {
            cout<<"hoy es "<<i<<" cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==1 && i==2 && i==9 && i==10 && i==16 && i==23 && i==30)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 2)//febrero
    {
        for (i = 1; i<=28;i++)
        {
            cout<<"hoy es "<<i<<" cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==6 && i==13 && i==20 && i==27)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 3)//marzo
    {
        for (i = 1; i<=31;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==6 && i==13 && i==20 && i==21 && i==27)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 4)//abril
    {
        for (i = 1; i<=30;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==3 && i==10 && i==14 && i==15 && i==17 && i==24)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 5)//mayo
    {
        for (i = 1; i<=31;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==1 && i==8 && i==15 && i==22 && i==29 && i==30)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 6)//junio
    {
        for (i = 1; i<=30;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==5 && i==12 && i==20 && i==19 && i==27 && i==26)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 7)//julio
    {
        for (i = 1; i<=31;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==3 && i==4 && i==10 && i==17 && i==20 && i==24 && i==31)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 8)//agosto
    {
        for (i = 1; i<=31;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==7 && i==14 && i==15 && i==21 && i==28)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 9)//septiembre
    {
        for (i = 1; i<=30;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==4 && i==11 && i==18 && i==25)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 10)//octubre
    {
        for (i = 1; i<=31;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 0)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==2 && i==9 && i==16 && i==17 && i==23 && i==30)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 11)//noviembre
    {
        for (i = 1; i<=30;i++)
        {
            cout<<"hoy es "<<i<<"cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==6 && i==7 && i==13 && i==14 && i==20 && i==27)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    if (mes == 12)//diciembre
    {
        for (i = 1; i<=31;i++)
        {
            cout<<"hoy es "<<i<<" cuantas horas trabajo:";
            cin>>hora;
            if (hora > 8)
            {
                hora = ((hora- 8)*2)+ hora;
            }
            if (i==4 && i==8 && i==11 && i==18 && i==25 && i==31)
            {
                if(hora>0)
                {
                pago=pago*3;
                }
            }
            dia=pago*hora;
            salario=salario+ dia;
            
        }
    }
    cout<<"el salario del mes es: $"<<salario;

    return 0;
}
//https://onlinegdb.com/UsO0R5v5J


