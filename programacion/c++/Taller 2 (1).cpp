//Yoshu Steban Daza González 

//Incluir librerías 
#include <iostream>
#include <math.h>

//Incluir la librería estandar 
using namespace std;

float AreaCirculo (float A){
	float Resultado;
	
	Resultado = (3.14 * pow(A / 2 , 2));
	return Resultado;
}

float AreaCuadrado (float A, float B){
	float Resultado; 
	
	Resultado = pow((A * B) , 2);
	return Resultado; 
}
float AreaRectangulo (float A, float B){
	float Resultado;
	
	Resultado = A * B;
	
	return Resultado; 
}
float AreaTriangulo (float A, float B){
	float Resultado;
	
	Resultado = (A * B) / 2;
}

int Exponente(int Base, int Potencia){
	int Resultado = 1;
	for(int i=1; i<=Potencia; i++){
		Resultado *= Base;
		}
	return Resultado;
}

int MCM(int A, int B){
	int Resultado; 
	
	//Resultado = ;
	
	return Resultado;
	}

int MCD(int A, int B){
	int Resultado;
	
	//Resultado = ;
	return Resultado;
}

float Promedio(float A, float B, float C, float D, float E, float F, float G, float H, float I, float J){
	float Resultado;
	
	Resultado = (A + B + C + D + E + F + G + H + I + J) / 10;
	return Resultado;
}

int NotaFaltante(int A){
	int Resultado; 
	
	Resultado = ((A * 60) / 100) ; 
}

//Inciciar la función main 
int main(){
	//Definir variables dentro de la funcion inicial 
	int Opcion, MenuReset;
	int Opcion_Area, Ac, Base, Altura;
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10; 
	
	cout<<"					Taller de funciones " <<endl; 
	cout<<"\nElija segun la opcion que desee ejecutar: \n1). Calcular el area		\n2). Potencia de un numero   	\n3). Minimo comun multiplo		\n4). Maximo comun divisor	\n5). Promedio de notas		\n6). Nota crrespondeinte	\n7). Convertidor kilometros a metos 	\n8). Convertior de Kilometros a pies	\n9). Convertidor de kilometros a pulgadas	\n10). Convertidor de celsius a farenheit	\n11). Convertidor de Frenheit a celsius 	\n12). Convertidor de grados celsius a kelvin 	\n13). Convertidor de kelvin a celsius 	\n14). Promedio de voltajes 	\n15). Convertidor de hora Colombia a España 	\n16). Convertidor de hora Colombia a Arabia Saudita 	\n17). Convertidor de hora Colombia a Beijin 	" <<endl <<endl; cipcion;n>>O 

	
	switch(Opcion){
		case 1: cout<<"Elija el area que desea conocer: ";
				cout<<"\n1). Circulo \n2). Cuadrado \n3). Rectangulo \n4). Triangulo" <<endl; cin>>Opcion_Area;
				
					if(Opcion_Area == 1){
						cout<<"Ingrese el diametro del circulo: " <<endl; cin>>Ac; 
						
						cout<<"El area del cirulo equivale a :" <<AreaCirculo(Ac);
					}
					if(Opcion_Area == 2){
						cout<<"Ingrese la base y la altura (En el orden mensionado) " <<endl; cin>>Base; cin>>Altura;
						
						cout<<"El area del cuadrado equivale a: " <<AreaCuadrado(Base, Altura);
					}
					if(Opcion_Area == 3){
						cout<<"Ingrese la base y la altura (En el orden mensinado): " <<endl; cin>>Base; cin>>Altura;
						
						cout<<"El area del rectangulo equivale a: " <<AreaRectangulo (Base , Altura); 
					}
					if(Opcion_Area == 4){
						cout<<"Ingrese el valor de la base y la altua (En el orden mensionado): "<<endl; cin>>Base; cin>>Altura;
						
						cout<<"El area del triangulo equivale a: " <<AreaTriangulo (Base , Altura);
					}
		break; 
		case 2: cout<<"Digite un numero: "; cin>>n1;
				cout<<"Digite el exponente: "; cin>>n2;
				
				cout<<"El resultado es: " <<Exponente(n1 , n2);
		break;
		case 3: cout<<"Ingrese el primer valor: " ; cin>>n1;
				cout<<"Ingrese el segundo valor: " ; cin>>n2;
				
				cout<<"El minimo comun multiplo entre "<<n1<<" y "<<n2<<"es: " <<MCM(n1 , n2);	
		break;
		case 4: cout<<"Ingrese el primer valor: "; cin>>n1; 
				cout<<"Ingrese el segund valor: "; cin>>n2;
				
				cout<<"El maximo comun divisor entre "<<n1<<" y "<<n2<<" es: " <<MCD(n1 , n2);
		break;
		case 5: cout<<"Ingrese 10 notas entre 0 y 50: " <<endl; cin>>n1; cin>>n2; cin>>n3; cin>>n4; cin>>n5; cin>>n6; cin>>n7; cin>>n8; cin>>n9; cin>>n10;
		
				cout<<"El promedio de la nota es: " <<Promedio(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);	
		break;		
		case 6: cout<<"Ingrese la nota correspondiente al 60%: "; cin>>n1;
				
		
		break;
		 
	}
	
	//Se le da al usuario elegir si desea ejecutar más operaciones
	cout<<"\n\nDesea ejecutar otra operación? Digite (1) SI o (2) NO: "; cin>>MenuReset; 
	
	//Por medio de un whie se ejecuta la sentencia que permite reiniciar el programa desde la funcion "int main()"
	while(MenuReset == 1){
		main();
	}
	
	
	//Retornar 0 veces 
	return 0;
}
