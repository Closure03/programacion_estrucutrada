#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
double Sumar(double,double);
double Restar(double,double);
double Multiplicar(double,double);
double Dividir(double,double);

int main()
{
    
    cout << "-------- Calculadora C++ --------" << endl;
    cout << "---------------------------------" << endl;
    
    double val1;
    cout << "Introduce el primer valor: ";
    cin >> val1;
    double val2;
    cout << "Introduce el segundo valor: ";
    cin >> val2;
    cout << "---------------------------------" << endl;
    int operador;
    cout << "Sumar (1), Restar (2), Multiplicar (3) o Dividir (4)?: ";
    cin >> operador;
    
    switch(operador)
    {
        case 1:
            cout << "\n";
            cout << ">>>>>--- " << Sumar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 2:
            cout << "\n";
            cout << ">>>>>--- " << Restar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 3:
            cout << "\n";
            cout << ">>>>>--- " << Multiplicar(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
        case 4:
            cout << "\n";
            cout << ">>>>>--- " << Dividir(val1,val2) << " ---<<<<<" << endl;
            cout << "\n";
        break;
    }
    
    system("pause");
    return 0;
}


double Sumar(double x,double y)
{
    return x + y;
}


double Restar(double x,double y)
{
    return x - y;
}


double Multiplicar(double x,double y)
{
    return x * y;
}


double Dividir(double x,double y)
{
    return x / y;
}

/*
#include <iostream>
#include <conio.h>
using namespace std; 
void ingreso( ); 
int suma(int,int); 
int resta(int,int); 
int multiplicacion(int,int);
int division(int,int);

main() {  
ingreso(); 
getch(); 
}
 void ingreso(int a,int b, char operacion_T) {
cout<<"Ingresa el primer numero : \t";
cin>>a;
cout<<"Ingresa el segundo numero : \t";
cin>>b; 
cout<<"ingrese la operacion que desea realizar";
cin>>operacion_T;
}

int suma(int c,int d,int operacion_1){
	if (operacion_1= 1){
	cout<<"\nEL RESULTADO ES**"<<endl;
cout<<"El resultado de la suma es : "<<suma(c,d)<<endl;
return c+d;
}
}
int resta(int e,int f,int operacion_2){
	if (operacion_2= 2){
	cout<<"\nEL RESULTADO ES**"<<endl;
	cout<<"El resultado de la resta es : "<<resta(e,f)<<endl;
return e-f;
}
}
int multiplicacion(int g,int h, int operacion_3){
	if (operacion_3= 3){
	cout<<"\n EL RESULTADO ES****"<<endl;
	cout<<"El resultado de la multiplicacion es : "<<multiplicacion(g,h)<<endl;
return g*h;
}
}
int division(int i,int j, int operacion_4){
	if (operacion_4= 4){
	cout<<"\nEL RESULTADO ES**"<<endl;
    cout<<"El resultado de la division es : "<<division(i,j)<<endl;
return i/j;
}
}
total(int operacion_T, int operacion_1,int operacion_2,int operacion_3,int operacion_4){
	operacion_T=operacion_1,operacion_2,operacion_3,operacion_4;
	
	getch();
}
*/
