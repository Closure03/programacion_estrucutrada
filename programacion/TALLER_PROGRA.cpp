#include <iostream> 
#include <conio.h>
using namespace std;

int ejer1(){
	float a;
	cout<<"Introduzca un numero: "<<endl;cin>>a;
	cout<<"Has introducido el numero "<<a<<" ,gracias"<<endl;
	return a;
}
int ejer2(){
	float n, N;
	cout<<"Ingrese su ano de nacimiento: "<<endl;cin>>n;
	N=2022-n;
	cout<<"Ahora se que tienes "<<N<<" anos, gracias"<<endl;
	return N;
}

int ejer3(){
	float m,h,s;
	cout<<"Ingrese los segundos que quiere saber en minutos y horas: "<<endl;cin>>s;
	m=s/60;
	h=m/60;
	cout<<"Los minutos son: "<<m<<endl;
	cout<<"Las horas son: "<<h<<endl;
	return h, m;
}
int ejer4(){
	float p,d,pf,t;
	cout<<"Ingrese el precio: "<<endl;cin>>p;
	cout<<"Ingrese el descuento: "<<endl;cin>>d;
	pf=p*d/100;
	t=p-pf;
	cout<<"El precio final es:  "<<t<<endl;
	return t;
}
int ejer5(){
	float r,e;
	cout<<"Ingrese cantidad de dolares que quiere cambiar: "<<endl;cin>>e;
	r=e/1.33250;
	cout<<"Su cambio de dolares es: "<<r<<" EUR"<<endl;
}
int ejer6(){
	float r,e;
	cout<<"Ingrese cantidad de dolares que quiere cambiar: "<<endl;cin>>e;
	r=3.888*e;
	cout<<"Su cambio de pesos es: "<<r<<" COP"<<endl;
}
int ejer7(){
	float USD, cop;
	cout<<"Ingrese cantidad de dolares que quiere cambiar: "<<endl;cin>>cop;
	USD=cop/3888;
	cout<<"Su numero de dolares: "<<USD<<" COP"<<endl;
}
int ejer8(){
	float d,h,m,a,b,c,t;
	cout<<"Ingrese el dia: "<<endl;cin>>d;
	cout<<"Ingrese las horas: "<<endl;cin>>h;
	cout<<"Ingrese el minutos: "<<endl;cin>>m;
	
	a=d*86400;
	b=h*3600;
	c=m*60;
	t=a+b+c;
	cout<<"Son "<<t<<"segundos totales"<<endl;
}
int ejer9(){
	float r1,r2,t;
	cout<<"Ingrese la primera resistencia: "<<endl;cin>>r1;
	cout<<"Ingrese la segunda resistencia: "<<endl;cin>>r2;
	t=(r1*r2)/(r1+r2);
	cout<<"La equivalencia es: "<<t<<endl;
}
int ejer10a(){
	float x;
	cout<<"Ingrese un numero: "<<endl;cin>>x;
		for (int i=1;i<=x;i++){
		cout<<"Los numeros son: "<<i<<endl;
	}
}
int ejer10b(){
	float x,i;
	cout<<"Ingrese un numero: "<<endl;cin>>x;
	i=1;
	while(i<=x){
		cout<<"Los numeros son: "<<i<<endl;
		i++;
	}
}
int ejer11(){
	    int R1, R2, R3;
    cout<<"Ingrese el primer numero: ";cin>>R1;
    cout<<"Ingrese el segundo numero: ";cin>>R2;
    cout<<"Ingrese el tercer numero: ";cin>>R3;
    
    if (R1 > R2 && R2 > R3){
        cout<<"El primer numero es el mayor, el cual es el: "<<R1<<endl;
        cout<<"El segundo numero es el valor intermedio, el cual es el: "<<R2<<endl;
        cout<<"El tercer numero es el menor, el cual es el: "<<R3<<endl;
    }
        
    if (R3 > R2 && R2 > R1){
        cout<<"El tercer numero es el mayor, el cual es el: "<<R3<<endl;
        cout<<"El segundo numero es el valor intermedio, el cual es el: "<<R2<<endl;
        cout<<"El primer numero es el menor, el cual es el: "<<R1<<endl;
    }
	if (R1 > R3 && R3 > R2){
        cout<<"El primer numero es el mayor, el cual es el: "<<R1<<endl;
        cout<<"El tercer numero es el valor intermedio, el cual es el: "<<R3<<endl;
        cout<<"El segundo numero es el menor, el cual es el: "<<R2<<endl;
    }
    if (R3 > R1 && R1 > R2 ){
        cout<<"El tercer numero es el mayor, el cual es el: "<<R3<<endl;
        cout<<"El primer numero es el valor intermedio, el cual es el: "<<R1<<endl;
        cout<<"El segundo numero es el menor, el cual es el: "<<R2<<endl;
    }
    if (R2 > R3 && R3 > R1){
        cout<<"El segundo numero es el mayor, el cual es el: "<<R2<<endl;
        cout<<"El tercer numero es el valor intermedio, el cual es el: "<<R3<<endl;
        cout<<"El primer numero es el menor, el cual es el: "<<R1<<endl;
    }
	if (R2 > R1 && R1 > R3){
        cout<<"El segundo numero es el mayor, el cual es el: "<<R2<<endl;
        cout<<"El primer numero es el valor intermedio, el cual es el: "<<R1<<endl;
        cout<<"El tercer numero es el menor, el cual es el: "<<R3<<endl;
    }
	    if (R1 == R2 && R2 == R3){
        cout<<"Todos los valores son iguales y son: "<<R1<<endl;
    }
	    if (R1 == R2 && R2 > R3){
        cout<<"El primero y el segundo numero son iguales: "<<R1<<endl;
        cout<<"El tercer numero es menor que los otros dos: "<<R3<<endl;
    }
	if (R1 == R2 && R2 < R3){
        cout<<"El primero y el segundo numero son iguales: "<<R1<<endl;
        cout<<"El tercer numero es mayor que los otros dos: "<<R3<<endl;
    }
	if (R1 == R3 && R3 > R2){
        cout<<"El primero y el tercer numero son iguales: "<<R1<<endl;
        cout<<"El segundo numero es menor que los otros dos: "<<R2<<endl;
    }
	    if (R1 == R3 && R3 < R2){
        cout<<"El primero y el tercer numero son iguales: "<<R1<<endl;
        cout<<"El segundo numero es mayor que los otros dos: "<<R2<<endl;
    }
	    if (R2 == R3 && R3 > R1){
        cout<<"El tercero y el segundo numero son iguales: "<<R2<<endl;
        cout<<"El primero numero es menor que los otros dos: "<<R1<<endl;
    }
	    if (R2 == R3 && R3 < R1){
        cout<<"El tercero y el segundo numero son iguales: "<<R2<<endl;
        cout<<"El primer numero es mayor que los otros dos: "<<R1<<endl;
    }  
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
int ejer13(){
 
}

int ejer14(){

int edificio [6][4], fil, col,f,c, mayor=0;
	

cout<<" CONTROLADOR DE HABITANTES "<<endl;
cout<<"\n";

cout<<"Ingrese numero de pisos: "<<endl;  cin>>fil;
cout<<"Ingrese numero de apartamentos: "<<endl;  cin>>col;

for (int f=0; f<fil;f++ ){
    for(int c= 0 ;c<col;c++){
        cout<<"Ingrese un numero de pisos  Y  filas " "  ["<<f<<"]["<<c<<"]: ";   cin>>edificio[f][c];  
    }
}
cout<<"\n";

cout<<" TOTAL DE HABITANTES  "<<endl;
cout<<"\n";
for(f=0;f<fil;f++){
    for(c=0;c<col;c++){
        cout<<edificio[f][c];
    }
    cout<<"\n";
}

mayor=edificio[0][0];
for (int f=0; f<fil;f++ ){
    
    
    for(int c= 0 ;c<col;c++){
        
        if(edificio[f][c]>mayor){
           
    	mayor=edificio[f][c];
         }
    }
}
cout<<"\n";
cout<<"La habitacion que tiene  mas gente es:  "<<mayor<<endl;
}

int ejer15(){
	float vol1, vol2, vol3, promvol;    
    	cout<<"Ingrese el primer voltaje: ";
    	cin>>vol1;
    	cout<<"Ingrese el segundo voltaje: ";
    	cin>>vol2;
    	cout<<"Ingrese el tercer voltaje: ";
    	cin>>vol3;    
    promvol = (vol1 + vol2 + vol3) / 3;    
    	if (promvol <= 115){
    		cout<<" VOLTAJE CORRECTO ";
    	}
    			 
    	else if (promvol >= 116 && promvol <= 220){
    		cout<<" VOLTAJE ALTO ";
    	}
    			    
    	else{
      			cout<<" PELIGRO ";
      		}
}
int ejer16(){
	float hora, cambiom;
 	cout<<"Cambio de horario"<<endl;
 	cout<<"Ingrese la hora actual (Colombia): ";
	cin>>hora;
 		if (hora <= 17){
 			cambiom = hora + 7;
 				cout<<"La hora en Espana es: "<<cambiom<<endl;
 			}
 				
 		if (hora >= 18){
 			cambiom = (hora + 7) - 24;
 				cout<<"La hora en Espana es: "<<cambiom<<endl;
 			}
 		}
 int ejer17(){
 	float hora, cambiom;
 	cout<<"Cambio de horario"<<endl;
 	cout<<"Ingrese la hora actual (Colombia): ";
	cin>>hora;
 	if (hora <= 16){
 		cambiom = hora + 8;
 		cout<<"La hora en Arabia Saudita es: "<<cambiom<<endl;
 	}
 				
 	if (hora >= 17){
 		cambiom = (hora + 8) - 24;
 		cout<<"La hora en Arabia Saudita es: "<<cambiom<<endl;
 	}
}
int ejer18(){
	float hora, cambiom;		
 	cout<<"Cambio de horario"<<endl;
 	cout<<"Ingrese la hora actual (Colombia): ";
	cin>>hora;
 		if (hora <= 11){
 			cambiom = hora + 12;
 			cout<<"La hora en Bei es: "<<cambiom<<endl;
 		}	
 		if (hora >= 11){
 		cambiom = (hora + 13) - 24;
 		cout<<"La hora en Espana es: "<<cambiom<<endl;
 	}
}




int main(){
	int opcion;
	cout<<" TALLER FINAL \n --------------------------\n INGRESE UNA SOLA OPCION: \n \n EJERICIO 1 (1): Numero entero \n EJERICIO 2 (2): Edad \n EJERICIO 3 (3): Equivalencia de minutos y horas \n EJERICIO 4 (4): El descuento \n EJERICIO 5 (5): Conversion de USD a EUR \n EJERICIO 6 (6): Conversion de USD a COP \n EJERICIO 7 (7): Conversion de COP a USD \n EJERICIO 8 (8): Cantidad de segundos totales \n EJERICIO 9 (9): Equivalencia de resistencias \n EJERICIO 10 (10): Ciclos for y while \n EJERICIO 11 (11): Numero mayor, segundo mayor y tercer menor \n EJERICIO 12 (12): Pares e impares \n EJERICIO 13 (13): Listado de notas \n EJERICIO 14 (14): Habitantes de un edificio \n EJERICIO 15 (15): Equivalencia de voltajes \n EJERICIO 16 (16): Diferencia horaria de Colombia --> españa \n EJERICIO 17 (17): Diferencia horaria de Colombia --> Arabia Saudita \n EJERICIO 18 (18): Diferencia horaria de Colombia --> beijing \n EJERICIO 19 (19): \n  "<<endl;cin>>opcion;
	switch(opcion){
		case 1:ejer1();break;
		case 2:ejer2();break;
		case 3:ejer3();break;
		case 4:ejer4();break;
		case 5:ejer5();break; 
		case 6:ejer6();break;
		case 7:ejer7();break;
		case 9:ejer9();break;
		case 10:
		char opcion;
		int f, w;
		cout<<"Escoja un ciclo for (f) o while (w): "<<endl;cin>>opcion;
		if (opcion=='f'){
			cout<<ejer10a();
		}
		if (opcion=='w'){
			cout<<ejer10b;
		}
		break;	
		case 11:ejer11();break;
		case 12:ejer12();break;
		case 13:
			int o,i,notas, menor,mayor;
			float acum,t;
			cout<<"LISTAR NOTAS (1): "<<endl;
			cout<<"CALCULAR MEDIA (2): "<<endl;
			cout<<"CALCULAR MENOR: (3)"<<endl;
			cout<<"CALCULAR MAYOR: (4)"<<endl;
			cout<<"Escogiste:  "<<endl;cin>>o;
			
		if (o==1){
		
		for (i = 1; i<=4;i++){
			cout<<"INGRESE NOTAS: "<<endl;cin>>notas;
		}
		cout<<"El listado de notas es: "<<i-1<<endl;
	}
		if (o==2){
		
		for (i = 1; i<=4;i++){
			cout<<"INGRESE NOTAS: "<<endl;cin>>notas;
			acum=acum+notas;
		}
		cout<<"La media es: "<<acum/4<<endl;	
	}
		if (o==3){
			for (i = 1; i<=4;i++){
				cout<<"INGRESE NOTAS: "<<endl;cin>>notas;
				if (i==0){
					mayor=notas;
					menor=notas;
				}
				else {
					if (notas<menor) menor=notas;
					if (notas>mayor) mayor=notas;
					}
		}
	cout<<"El menor es: "<<menor<<endl;
}

		if (o==4){
			for (i = 1; i<=4;i++){
				cout<<"INGRESE NOTAS: "<<endl;cin>>notas;
				if (i==0){
					mayor=notas;
					menor=notas;
				}
				else {
					if (notas>mayor) mayor=notas;
					}
		}
	cout<<"El mayor es: "<<mayor<<endl;
}
break;
		case 14:ejer14();break;
		case 15:ejer15();break;
		case 16:ejer16();break; 
		case 17:ejer17();break;
		case 18:ejer18();break;
}
}



	

		

