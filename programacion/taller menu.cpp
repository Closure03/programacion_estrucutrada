//Tester

// Plantilla de un Menú de Opciones

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
#include <conio.h>
#include <stdio.h>

using namespace std;

int triangulo(float num1=0,float num2=0) {  //area de un triangulo
int resultado = (num1*num2)/2;
return resultado;
}

int cuadrado(float num1=0) { //area de un cuadrado
float resultado = (num1*num1);
return resultado;
}

int rectangulo(float num1=0,float num2=0) {//area de un rectangulo
float resultado = (num1*num2);
return resultado;
}

float circulo(int num1=0) {//area de un circulo
float resultado = 3.1416*(num1^2);
return resultado;
}

int potencia(int num1,int num2){//potenciacion de un numero
float resultado = (num1)^(num2);
return resultado;
}

int mcm(int div, int x, int y)//minimo comun multiplo
{int aux=1;
while(x%div==0 || y%div==0)
{aux*=div;
 if(x%div==0)
  {x/=div;
  }
 if(y%div==0)
 {y/=div;
 }
}
if(div<=x||div<=y)
 {aux*=mcm(div+1,x,y);
 }
  return aux;
}

using namespace std;
void MCD(int a, int b){ 
    bool bandera;
    int m, n, c, r, aux;//declaracion de variables
    m=a;
    n=b;
    bandera=true;
    while(bandera){
         if (m<n){
        aux=m;
        m=n;
        n=aux;
         }else if(m == n){
                   cout << "El M.C.D entre " <<a<< " y " <<b<< "es: "<<n<<endl;
                   bandera=false;
                }else{
                       c=m/n;
                       r=m%n;
                      if(r ==0){
                       cout << "El M.C.D entre: " << a << " y " <<b<< " es "<<n<<endl;                                          
                       bandera=false;
                       }else{
                        m=n;
                        n=r;
                        }
                 }
             }
         }

int porcentaje(float num1){//60% de la nota y buscar el 40% para pasar
float nota,resultado;
resultado=((nota*0.60)-5)*(-1);//se multiplica para determinar el 60%, luego se resta el 100% que seria equivalente a 5.0, el residuo es el 40% necesario para pasar
return resultado;
}

int kmam(int num1){
	float resultado;
resultado = (num1*1000);//se multiplica la cantidad de km para convertir, por 1000, el resultado son los mts 
return resultado;
	
}

int kmaft(int num1){
	float resultado;
	resultado= (num1*1000)*3.28; //la distancia se multiplica por 100, es el equivalente a 1000 mts, luego se multiplica por 3.28, equivalente a foot, pies
return resultado;	
	
}

int kmainch(int num1){
	float resultado;
	resultado= (num1*1000)*39.37; //la distancia se multiplica por 100, es el equivalente a 1000 mts, luego se multiplica por 39.37, equivalente a inch, pulgadas
return resultado;	
	
}

fac(float num1){
	float resultado;
	resultado=(num1*9/5)+32;//los grados farenheit se les suman 32 para conseguir los centigrados, luego se multiplica por
return resultado;
}

cak(float num1){
	float resultado;
	resultado=(num1+273.15);//la conversion de celsius a kelvin es c + 273.15 
return resultado;
}

kac(float num1){
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

hora_colombia_arabia(float hora){
	float hora_arabia;
hora_arabia=hora+8.0;

return hora_arabia;
	
}

hora_colombia_beijing(float hora){
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
        cout << "1. calcula el area de las fuguaras geometricas" << endl;
        cout << "2. calcula la potencia de un numero" << endl;
        cout << "3. calcula es minimo numero que se pude multiplicar a dicho numero." << endl;
        cout << "4. calcula el maximo numero divisor comun" << endl;
        cout << "5. calcula el promedio de la nota entre 10 notas" << endl;
        cout << "6. calcula el valor de la nota del siguiente corte para pasar la materia" << endl;
        cout << "7. convierte distancia de kilometros a metros" << endl;
        cout << "8. convierte distancia de kilometros a pies" << endl;
        cout << "9. convierte distancia de kilometros a pulgadas" << endl;
        cout << "10. convierte temperatura de   celsius a Farenheit" << endl;
        cout << "11. convierte temperatura de   Farenheit a celsius" << endl;
        cout << "12. convierte  temperatura de  celsius a kelvin" << endl;
        cout << "13. convierte  temperatura de   kelvin celsius" << endl;
        cout << "14. Determina voltaje correcto, alto o peligro." << endl;
        cout << "15. la hora en españa teniendo la hora en colombia" << endl;
        cout << "16. la hora en arabia saudita teniendo la hora en colombia" << endl;
        cout << "17. la hora en beijin teniendo la hora en colombia" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
            cout <<"Que area deasea calcular: "<<endl;
            cout <<"1. Triangulo\t 2.Cuadrado\t 3.Rectangulo\t 4.circulo"<<endl;
            
            cin>>sub1;
            
                switch (sub1){
                case 1:
                	int base,altura;
                	cout<< "introduzca los datos del triangulo, base y altura\n";cout<<"Ingrese la base\n "<<endl;
                	cin>>base;
                	cout<<"Ingrese la altura\n"<<endl;
                	cin>>altura;
                	cout<<"El area del Triangulo es: "<<triangulo(base,altura)<<endl;
                	getch();
                	break;

                case 2:
                    int lado;
                    cout<< "introduzca la medida de uno de sus lados\n";
                    cout<<"medida: "<<endl;
                    cin>>lado;
                    cout<<"El area del cuadrado es: "<<cuadrado(lado)<<endl;
                    getch();
                    break;
            
                
                case 3:
                	
                    int base1,altura1;
                    cout<< "introduzca los datos del rectangulo, base y altura\n";
                    cout<<"Ingrese la base\n "<<endl;
                    cin>>base1;
                    cout<<"Ingrese la altura\n"<<endl;
                    cin>>altura1;
                    cout<<"El area del rectangulo es: "<<rectangulo(base1,altura1)<<endl;
                    getch();
                    break;
                
                
                case 4:
                    int radio;
                    cout<< "introduzca el radio del circulo\n";
                    cout<<"Radio: \n";
                    cin>>radio; 
                    cout<<"El area del circulo es:\n "<<circulo(radio)<<endl;
                    getch();
                   break;
               }
                               
            case 2:
                //potencia de un numero
               int base,exponente;
               cout<<"introduzca dos numeros para encontrar su potencia"<<endl;
               cout<<"introduzca la base"<<endl;
                cin>>base;
                cout<<"introduzca la potencia"<<endl;
                cin>>exponente;
                cout<<"Su potencia es :\n "<<potencia(base,exponente)<<endl;
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 3:
                // minimo comun multiplo entre dos numero
					
					int mcm(int div, int x, int y);
					int x, y, resultado;
					cout<<"Valores 1: ";
					cin>>x;
					cout<<"valor 2: ";
					cin>>y;
					resultado=mcm(2,x,y);
					cout<<"mcm es: "<<resultado<<"\n";
					system("pause>nul"); // Pausa
					getch();
					break;
            case 4:
                // maximo comun divisor entre dos numero 
				
				int a, b;
				cout << "Favor ingresar primer numero:";
				cin >> a;
				cout << "Favor ingresar segundo numero: ";
				cin >> b;
				MCD (a, b); //se llama la funcion minimo comun divisor
                system("pause>nul"); // Pausa
                getch();
                break;
                               
            case 5:
                // promedio de 10 notas entre 0 y 5 dadas por el usuario     
				
				int i;//cantidad de notas, notas
				float notas,promedio ;
				for(i=0;i<10;i++){
					cout<< "ingrese la nota numero: "<<i<< "\t recuerde usar decimales"<<endl; 
					cin>>notas;
					if (notas>5){
						cout<< "\tpor favor ingrese una nota valida\t";
						getch();
				}
			}
				promedio=(notas/10);
				cout<<"el promedio de notas del estudiante es: "<<promedio<<endl;
				
				if (promedio<=3){// declaracion de condicional en caso de que necesite recuperar
					cout<<"Debes recuperar la materia";
				}
					else if (promedio>=3.1){// declaracion de condicional en caso de que no necesite recuperar
					cout<<"Felicitaciones, vas pasando";
				}
			
		
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 6:
                //nota requerida para aprobar, dato entrada 60%, restante 40%     
				int nota;
				cout<<"ingrese la nota que representa su 60% para validar cuanto necesita para pasar"<<endl;   
				cin>>nota;
				cout<<"usted necesitara: "<<porcentaje(nota)<<endl;     
                system("pause>nul"); // Pausa  
				getch();          
                break;
                
            case 7:
                // conversion KM a m              
                	int km;
                	cout<<"ingrese la cantidad de kilometros que desea convertir"<<endl;
                	cin>>km;
                	cout<<"la conversion de "<<km<< " km a metros es de "<<kmam(km)<<endl;
					                
                system("pause>nul"); // Pausa 
				getch();               
                break;
            
            case 8:
                // conversion KM a Ft    
				int km1;
				cout<<"ingrese la cantidad de Kilometros a convertir" <<endl;
				cin>>km1;
				cout<<"la conversion de "<<km<<" km a pies es de "<<kmaft(km1)<<endl;         
                
                system("pause>nul"); // Pausa
                getch();
                break;
                               
            case 9:
                // conversion KM a inch     
			int km2;
				cout<<"ingrese la cantidad de Kilometros a convertir" <<endl;
				cin>>km2;
				cout<<"la conversion de "<<km2<<" km a pulgadas es de "<<kmainch(km2)<<endl; 
				
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 10:
                //conversion grados celsius a farenheit    
                
                int grados_celsius;
				cout<<"ingrese la cantidad de grados celsius a convertir" <<endl;
				cin>>grados_celsius;
				cout<<"la conversion de "<<grados_celsius<<" grados celsius a farenheit es de "<<fac(grados_celsius)<<endl; 
				
                system("pause>nul"); // Pausa     
				getch();       
                break;
                
            case 11:
                //farenheit a celsius     
				int grados_farenheit;
				cout<<"ingrese la cantidad de grados farenheit"<<endl;
				cin>>grados_farenheit;
				cout<<"la conversion de "<<grados_farenheit<<" grados farenheit a celsius es de "<<fac(grados_farenheit)<<endl; 
                
                system("pause>nul"); // Pausa
                getch();
                break;
                               
            case 12:
                // celsius a kelvin   
				int grados_celsius1;
				cout<<"ingrese la cantidad de grados celsius"<<endl;
				cin>>grados_celsius1;
				cout<<"la conversion de "<<grados_celsius1<<" grados celsius a kelvin es de "<<cak(grados_celsius1)<<endl;            
                
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 13:
                // kelvin a celsius 
				int grados_kelvin;
				cout<<"ingrese la cantidad de grados kelvin"<<endl;
				cin>>grados_kelvin;
				cout<<"la conversion de "<<grados_kelvin<<" grados celsius a kelvin es de "<<kac(grados_kelvin)<<endl;               
                
                system("pause>nul"); // Pausa 
				getch();           
                break;
                
            case 14:
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
            
            case 15:
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
                
            case 16:
                // Colombia-Arabia Saudita  
				
				float hora1;
				cout<<"ingrese la hora de colombia: "<<endl;cout<<"Recuerde usar el formato 24 horas y separar el tiempo en horas y minutos con un punto '.' \n";
				cin>>hora1;
				cout<<"la hora en colombia es: "<<hora1<<" mientras que en Arabia Saudita es: "<<hora_colombia_arabia(hora1)<<endl;          
                
                system("pause>nul"); // Pausa 
				getch();               
                break;

             case 17:
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



