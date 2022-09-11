//programa trabajo final programacion estructurada

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
#include <conio.h>
#include <stdio.h>

using namespace std;

numerox(float a){
	//ingrese un numero
    return a;
}

//calcular fecha
void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;
 
    if ( fechAct < fechNac  )
    {   //En caso de ser menor la fecha actual que el nacimiento
        fechAct = fechAct + 30; // Se le suma los 30 días (1 mes) a la fecha actual
        mesAct = mesAct - 1; // Se le resta un mes (30 días) al mes actual
        respFech =  fechAct - fechNac; //Se le resta fecha nacimiento al actual
    }
    else //En caso de ser mayor la fecha actual que el nacimiento
        respFech =  fechAct - fechNac;  //Se le resta fecha nacimiento al actual
 
    if( mesAct < mesNac )
    {   //En caso de ser menor el mes actual que el nacimiento
        mesAct = mesAct + 12; // Se le suma los 12 meses (1 año) al mes actual
        anioAct = anioAct - 1 ; // Se le resta 1 año ( 12 meses) al año actual
        respMes = mesAct - mesNac; //Se le resta año nacimiento al actual
    }
    else //En caso de ser mayor el mes actual que el nacimiento
        respMes = mesAct - mesNac; //Se le resta año nacimiento al actual
 
    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<anioAct - anioNac << endl; //Muestra edad
    cout << " Mes: " << respMes << endl; //Muestra mes
    cout << " Dia: " << respFech << endl; //Muestra dia
}

//conversor segundos a horas y minutos
float conversorsamh(float segundos)
{
float minutos,horas;	

	minutos=segundos/60;//segundos se divide para hallar los minutos iniciales
	horas=minutos/60;// minutos se dividen sobre 60 para ver cuantas horas son
	
	cout<<"Los "<<segundos<<" segundos equivalen a "<<minutos<<" minutos y "<<horas<<" horas"<<endl;
	return minutos,horas;
}
//descuentos
float descuentof(float precio,float descuento){
	float preciof;
	preciof=precio*descuento/100;
	preciof=precio-preciof;	
	return preciof;
}

//conversion
float conversionUSDEUR(float usd){
	float eur;
	eur=usd*1.33250;
	return eur;
}

//conversion
float conversionUSDCOP(float usd){
	float cop;
	cop=usd*3923.96;
	return cop;
}

//conversion
float conversionCOPUSD(float cop){
	float usd;
	usd=cop*3923.96;
	return cop;
}

// convertidos de dias horas y minutos a segundos
float conversionDHM(int dias,float horas,int minutos){
	 float ftime;
	dias=dias*86400;
	horas=horas*3600;
	minutos=minutos*60;
	ftime=dias+horas+minutos;
	return ftime;
}

Resistenciaparalelo(float resistencia1,float resistencia2){
	float Req;
	Req=(resistencia1*resistencia2)/(resistencia1+resistencia2);
	return Req;	
}

int may_mer(int n1, int n2, int n3) {
    int may, may2, mer;
    if (n1 > n2 and n1> n3){
        may=n1;
    }else if(n2 > n1 and n2> n3){
        may=n2;
    }else if(n3 > n1 and n3 > n2){
        may=n3;
    }
    if ((n1 < n2 and n1 > n3) or(n1 > n2 and n1 < n3) ){
        may2= n1;
    } else if ((n2 < n1 and n2 > n3) or(n2 > n1 and n2 < n3) ){
        may2= n2;
    }else if ((n3 < n1 and n3 > n2) or(n3 > n1 and n3 < n2) ){
        may2= n3;
    }
    if (n1 < n2 and n1< n3){
        mer=n1;
    }else if(n2 < n1 and n2< n3){
        mer=n2;
    }else if(n3 < n1 and n3 < n2){
        mer=n3;
    }
    cout<<"El numero mayor es: "<<may<<endl;
    cout<<"El segundo numero mayor es: "<<may2<<endl;
    cout<<"El numero menor es: "<<mer<<endl;
    return n1, n2, n3;
}

int ejer12(){
	int a,b, i,p;    
char  opcion;
cout<<"INGRESE PRIMER NUMERO: ";
cin>>a;
cout<<"INGRESE SEGUNDO NUMERO: ";
cin>>b;
cout<<"INGRESE letra PAR (p) o IMPAR (i) : ";
cin>>opcion;


if (opcion == 'i' ){

while (a<=b) {
		    	if (a%2>0) {
			    	cout <<endl<< a<< endl;
		    	}
		    	a++;
		    }
}

else if  (opcion == 'p' ){
    
while (a<=b) {
		    	if (a%2==0) {
			    	cout <<endl<< a<< endl;
		    	}
		    	a++;
		    }
}

else {
    cout<<"No ingreso la letra indicada"<<endl;
}
}













int kac(float num1){
	float resultado;
	resultado=(num1-273.15);//la conversion de kelvin a celsius es c - 273.15 
return resultado;
}

voltaje(float voltaje1,float voltaje2,float voltaje3){
	float resultado;
resultado=(voltaje1+voltaje2+voltaje3)/3;
	return resultado; 
}

hora_colombia_espana(float hora){
	float hora_espana;
hora_espana=hora+7.0;

return hora_espana;
	
}

int hora_colombia_arabia(float hora){
	float hora_arabia;
hora_arabia=hora+8.0;

return hora_arabia;
	
}

int hora_colombia_beijing(float hora){
	float hora_beijing;
hora_beijing=hora+1.0;

return hora_beijing;
	
}


int main()
{
    int opcion,sub1;
    bool repetir = true;
    
    do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. pida un número entero, y conteste al usuario: “Has introducido el numero (x), gracias." << endl;
        cout << "2. Indique su fecha de nacimiento" << endl;
        cout << "3. conversor segundos a minutos y horas. " << endl;
        cout << "4. calcular descuentos." << endl; 
        cout << "5. conversor dolar (USD) a Euros (EUR)." << endl;
        cout << "6. conversor dolar (USD) a pesos colombianos (COP)." << endl;
        cout << "7. Conversor peso (COP) a dolares (USD). " << endl;
        cout << "8. Conversion dias/horas/minutos a segundos. " << endl;
        cout << "9. Resistencias equivalentes en paralelo. " << endl;
        cout << "10. convierte temperatura de   celsius a Farenheit. " << endl;
        cout << "11. organizador de 3 numeros. " << endl;
        cout << "12. organizador de datos. " << endl;
        cout << "13. notas de 40 alumnos. " << endl;
        cout << "14. Determina voltaje correcto, alto o peligro." << endl;
        cout << "15. la hora en españa teniendo la hora en colombia" << endl;
        cout << "16. la hora en arabia saudita teniendo la hora en colombia" << endl;
        cout << "17. la hora en beijin teniendo la hora en colombia" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
     // ingrese un dato
				int dato;
				cout<<"ingrese un dato"<<endl;
				cin>>dato;
				cout<<"Has introducido el numero "<<numerox(dato)<<" gracias."<<endl;               
				
                system("pause>nul"); // Pausa 
				getch();           
                break;
                               
            case 2:
            	
            	int anioAct,mesAct,fechAct;  //Año Actual, Mes actual, Fecha actual
    int anioNac, mesNac, fechNac; //Año nacimiento, Mes nacimiento, Fecha nacimiento
    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";
    cout << "Ingrese Año Actual: "<<endl;   cin >> anioAct;
    cout << "Ingrese Mes Actual: "<<endl;   cin >> mesAct;
    cout << "Ingrese Fecha Actual: "<<endl;  cin >> fechAct;
 
    cout << "\nIngrese Año Nacimiento: "<<endl;  cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: "<<endl;  cin >> mesNac;
    cout << "Ingrese Fecha de Nacimiento: "<<endl;  cin >> fechNac;
 
    calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
    
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 3:
            	float segundos;
            	cout<<"ingrese los segundos a convertir: "<<endl; cin>>segundos;
            cout<<conversorsamh(segundos)<<endl;
               system("pause>nul"); // Pausa
				getch();
				break;
				
            case 4:
            	float precio,descuento;
	cout<<"ingrese el precio del articulo"<<endl;cin>>precio;
	cout<<"ingrese el precio del descuento"<<endl;
	cin>>descuento;
    cout<<"el valor neto del articulo sera de: "<<descuentof(precio,descuento)<<endl;    
        
              system("pause>nul"); // Pausa 
                getch();
                break;
                             
            case 5:
               float dolar;
               cout<<"ingrese el monto a convertir en dolares: ";cin>>dolar;
               cout<<"sus "<<dolar<<" equivalen a: "<<conversionUSDEUR(dolar)<<" euros."<<endl;
               
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 6:
               long double dolar2;
               cout<<"ingrese el monto a convertir en pesos: ";cin>>dolar;
               cout<<"sus "<<dolar<<" dolares equivalen a: "<<conversionUSDCOP(dolar)<<"%d pesos."<<endl;

                system("pause>nul"); // Pausa
				getch();          
                break;
                
            case 7:
               float pesos;
               cout<<"ingrese el monto a convertir en pesos: ";cin>>pesos;
               cout<<"sus "<<pesos<<" pesos equivalen a: "<<conversionCOPUSD(pesos)<<" pesos."<<endl;
               
                system("pause>nul"); // Pausa 
				getch();
                break;
            
            case 8:
            	//Conversion dias/horas/minutosras 
            	int minutos2,horas2,dias2;
			    cout<<"ingrese los dias ";cin>>dias2;
			    cout<<"ingrese las horas ";cin>>horas2;
			    cout<<"ingrese los minutos ";cin>>minutos2;
			    cout<<conversionDHM(dias2,horas2,minutos2)<<endl;
                system("pause>nul"); // Pausa
                getch();
                break;
                               
            case 9:
            	float resistencia1, resistencia2, Req;
			    cout<<"ingrese la primera resistencia ";cin>>resistencia1;
			    cout<<"ingrese la segunda resistencia ";cin>>resistencia2;
			    cout<<"La resistencia equivalente en paralelo es de: "<<Resistenciaparalelo(resistencia1,resistencia2)<<endl;
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 10:
            	int j;
               cout<<"Hay 2 opciones de hacerlo"<<endl;
               cout<<"ingrese 1 para WHILE y 2 para FOR "<<endl;
               cin>>j;
               switch (j){
               	case 1:
               		
               	float x;
	             cout<<"Ingrese un numero: "<<endl;cin>>x;
		         for (int w=1;w<=x;w++){
	          	cout<<"Los numeros son: "<<w<<endl;
	          }
	          	getch();
	          	break;
	          	
               	case 2:
               		float v,u;
	                 cout<<"Ingrese un numero: "<<endl;cin>>v;
	                 u=1;
                 	while(u<=v){
		             cout<<"Los numeros son: "<<u<<endl;
	              	u++;
           	}
				getch();       
                break;
			   }
                system("pause>nul"); // Pausa     
				getch();       
                break;
                
            case 11:
            	int dato1,dato2,dato3;
            	cout<<"ingrese el primer dato: "<<endl;cin>>dato1;
            	cout<<"ingrese el segundo dato: "<<endl;cin>>dato2;
            	cout<<"ingrese el tercer dato: "<<endl;cin>>dato3;
            	
            	cout<<may_mer(dato1,dato2,dato3);
            	
                system("pause>nul"); // Pausa
                getch();
                break;
                               
            case 12: ejer12();
                           
                
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 13:
            	
                
                system("pause>nul"); // Pausa
                getch();
                break;
                
             case 14:
                           
                
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 15:
                // kelvin a celsius 
				int grados_kelvin;
				cout<<"ingrese la cantidad de grados kelvin"<<endl;
				cin>>grados_kelvin;
				cout<<"la conversion de "<<grados_kelvin<<" grados celsius a kelvin es de "<<kac(grados_kelvin)<<endl;               
                
                system("pause>nul"); // Pausa 
				getch();           
                break;
                
            case 16:
                // tres voltajes, promedio de voltajes (PV)<115="Voltaje correcto"   (PV)>115 & (PV)<220="Alto voltaje" (PV)>220="peligro"               
            
			int voltaje1,voltaje2,voltaje3,Resultado;
			cout<<"Ingrese  3 voltajes \n";
			cout<<"primer voltaje:\n  ";
			cin>>voltaje1;
			cout<<"segundo voltaje:\n ";
			cin>>voltaje2;
			cout<<"tercer voltaje:\n  ";
			cin>>voltaje3;
			cout<<"el voltaje es "<<voltaje(voltaje1,voltaje2,voltaje3)<<endl;
			
			Resultado = voltaje(voltaje1,voltaje2,voltaje3);
			if (Resultado<=115){
			cout<<"Voltaje correcto\n";
		}
			if (Resultado>115 && Resultado<=220){
			cout<<"Alto voltaje\n";
		}
		if (Resultado>220){
		cout<<"Peligro\n";
		}
                system("pause>nul"); // Pausa 
				getch();               
                break;
            
            case 17:
                // conversion horaria Colombia-España    
				float hora,t;
				cout<<"ingrese la hora de colombia: "<<endl;cout<<"Recuerde usar el formato 24 horas y separar el tiempo en horas y minutos con un punto '.' \n";
				cin>>hora;
				cout<<"la hora en colombia es: "<<hora<<" mientras que en España es: "<<hora_colombia_espana(hora)<<endl;
				t=hora_colombia_espana(hora);
				if (t>=24){
					t=t-24;
				}
                system("pause>nul"); // Pausa  
				getch();          
                break;
                
            case 18:
                // Colombia-Arabia Saudita  
				
				float hora1;
				cout<<"ingrese la hora de colombia: "<<endl;cout<<"Recuerde usar el formato 24 horas y separar el tiempo en horas y minutos con un punto '.' \n";
				cin>>hora1;
				cout<<"la hora en colombia es: "<<hora1<<" mientras que en Arabia Saudita es: "<<hora_colombia_arabia(hora1)<<endl;          
                
                system("pause>nul"); // Pausa 
				getch();               
                break;

             case 19:
                // Colombia-Beijin     
				
				float hora2;
				cout<<"ingrese la hora de colombia: "<<endl; cout<<"Recuerde usar el formato 24 horas y separar el tiempo en horas y minutos con un punto '.' \n";
				cin>>hora2;
				cout<<"la hora en colombia es: "<<hora2<<" mientras que en Beijing es: "<<hora_colombia_beijing(hora2)<<endl;          
                         
                system("pause>nul"); // Pausa   
				getch();             
                break;


            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}


