//Tester

// Plantilla de un Menú de Opciones

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
#include <conio.h>

using namespace std;

int triangulo(float num1=0,float num2=0) {
int resultado = (num1*num2)/2;
return resultado;
}

int cuadrado(float num1=0) {
float resultado = (num1*num1);
return resultado;
}

int rectangulo(float num1=0,float num2=0) {
float resultado = (num1*num2);
return resultado;
}

float circulo(int num1=0) {
float resultado = 3.1416*(num1^2);
return resultado;
}

float potencia(float num1,float num2){
float resultado = (num1^num2);
return resultado;
}







int main()
{
    int opcion,sub1;
    bool repetir = true;
    
    do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. calcula el area de las figuras geometricas" << endl;
        cout << "2. calcula la potencia de un numero" << endl;
        cout << "3.calcula es minimo numero que se pude multiplicar a dicho numero." << endl;
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
        
        switch (opcion) {//menu principal
            case 1:
            cout <<"Que area deasea calcular: "<<endl;
            cout <<"1. Triangulo\t 2.Cuadrado\t 3.Rectangulo\t 4.circulo"<<endl;
            
            cin>>sub1;
            
                switch (sub1){//submenu para eleccion de datos
                case 1://se solicita la informacion necesria para desarrollar la operacion
                	int base,altura;
                	cout<< "introduzca los datos del triangulo, base y altura\n";cout<<"Ingrese la base\n "<<endl;
                	cin>>base;
                	cout<<"Ingrese la altura\n"<<endl;
                	cin>>altura;
                	cout<<"El area del Triangulo es: "<<triangulo(base,altura)<<endl;
                	getch();
                	break;

                case 2://se solicita la informacion necesria para desarrollar la operacion
                    int lado;
                    cout<< "introduzca la medida de uno de sus lados\n";
                    cout<<"medida: "<<endl;
                    cin>>lado;
                    cout<<"El area del cuadrado es: "<<cuadrado(lado)<<endl;
                    getch();
                    break;
            
                
                case 3://se solicita la informacion necesria para desarrollar la operacion
                    int base1,altura1;
                    cout<< "introduzca los datos del rectangulo, base y altura\n";
                    cout<<"Ingrese la base\n "<<endl;
                    cin>>base1;
                    cout<<"Ingrese la altura\n"<<endl;
                    cin>>altura1;
                    cout<<"El area del rectangulo es: "<<rectangulo(base1,altura1)<<endl;
                    getch();
                    break;
                case 4://se solicita la informacion necesria para desarrollar la operacion
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
                cout<<"El area del circulo es:\n "<<potencia(base,exponente)<<endl;
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 3:
                // minimo comun multiplo entre dos numero           
                
                system("pause>nul"); // Pausa
				getch();          
                break;
                
            case 4:
                // maximo comun divisor entre dos numero            
                
                system("pause>nul"); // Pausa
                getch();
                break;
                               
            case 5:
                // promedio de 10 notas entre 0 y 5 dadas por el usuario      
                
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 6:
                // Lnota requerida para aprobar, dato entrada 60%, restante 40%                
                
                system("pause>nul"); // Pausa  
				getch();          
                break;
                
            case 7:
                // conversion KM a m              
                
                system("pause>nul"); // Pausa 
				getch();               
                break;
            
            case 8:
                // conversion KM a Ft              
                
                system("pause>nul"); // Pausa
                getch();
                break;
                               
            case 9:
                // conversion KM a inch               
                
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 10:
                //conversion grados celsius a farenheit              
                
                system("pause>nul"); // Pausa     
				getch();       
                break;
                
            case 11:
                //farenheit a celsius           
                
                system("pause>nul"); // Pausa
                getch();
                break;
                               
            case 12:
                // celsius a kelvin              
                
                system("pause>nul"); // Pausa
                getch();
                break;
                
            case 13:
                // kelvin a celsius               
                
                system("pause>nul"); // Pausa 
				getch();           
                break;
                
            case 14:
                // tres voltajes, promedio de voltajes (PV)<115="Voltaje correcto"   (PV)>115 & (PV)<220="Alto voltaje" (PV)>220="peligro"               
                
                system("pause>nul"); // Pausa 
				getch();               
                break;
            
            case 15:
                // conversion horaria Colombia-España              
                
                system("pause>nul"); // Pausa  
				getch();          
                break;
                
            case 16:
                // Colombia-Arabia Saudita            
                
                system("pause>nul"); // Pausa 
				getch();               
                break;

             case 17:
                // Colombia-Beijin              
                
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

