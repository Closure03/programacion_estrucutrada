#include <iostream>
#include <math.h>



using namespace std;
// nelson vargas rodriguez
//1 calcula el area de las fuguaras geometricas
int area ( int menu = 0);
//2 calcula el exponente de un numero
int exponente (int nuemero = 0, int exponente = 0);
//3.  calcula es minimo numero que se pude multiplicar a dicho numero.
int mcm (int numero1 = 0, int numero2 = 0);
//4. calcula el maximo numero divisor comun
int mcd (int numero1 = 0, int numero2 = 0);
//5. calcula el promedio de la nota entre 10 notas
float promedio (float nota = 0);
//6. calcula el valor de la nota del siguiente corte para pasar la materia
float nota40_porciento (float nota = 0);
//7. convierte distancia de kilometros a metros
float diastaciametro (float distancia = 0);
//8. convierte distancia de kilometros a pies
float diastaciapie (float distancia = 0);
//9. convierte distancia de kilometros a pulgadas
float diastaciapulgada (float distancia = 0);
//10. convierte temperatura de   celsius a Farenheit
float temperaturaFarenheit (float temperatura = 0);
//11. convierte temperatura de   Farenheit a celsius
float temperaturacelsius(float temperatura = 0);
//12. convierte  temperatura de  celsius a kelvin
float temperaturakelvin (float temperatura = 0);
//13. convierte  temperatura de   kelvin celsius
float temperaturacelsiusk (float temperatura = 0);
//14 Determina voltaje correcto, alto o peligro.
int voltaje (int voltaje1=0);
// 15 la hora en españa teniendo la hora en colombia
float hora_espana (float hora=0);
// 16 la hora en arabia saudita teniendo la hora en colombia
float hora_arabia_saudita (float hora=0);
// 17 la hora en beijin teniendo la hora en colombia
float hora_beijing (float hora=0);


int
main ()
{
  int numero1 = 0, numero2 = 0, numero3 = 0, resultado = 0;
  int menu = 0, submenu = 0;

  cout << "\tmenu principal\ndigite una de las siguientes opcione\n\n1. calcular areas \t2. potenciacion \t3. minimo comun multiplo\t4. maximo comun multiplo\n5. calcular su nota promedio\t6. calcular nota necesaria para pasar\t7. Distancia kilometros a metros\n8. Distancia kilometros a pies\t9. Distancia kilometros a pulgadas\t10. Grados celsius a farenheit\n11. Grados farenheit a celsius\t12. Grados celsius a kelvin\t13. Grados kelvin a celsius\n 14. voltajes \t15.  hora colombia espana\t 16. hora colombai arabia saudita\t17. hora colombia beijing     \n";
  cin>>menu;

  if (menu == 1)
    {
    	

      resultado = area (numero1);

    }

  if (menu == 2)
    {

      cout << "ingrese un  numero \n y luego el  exponente \n";
      cin >> numero1;
      cin >> numero2;

      resultado = exponente (numero1, numero2);


      cout << "el resultado es: \t" << resultado;
    }

  if (menu == 3)
    {

      cout << "ingrese un numero \n y luego el segundo numero \n";
      cin >> numero1;
      cin >> numero2;

      resultado = mcm (numero1, numero2);


      cout << "el resultado es: \t" << resultado;
    }
  if (menu == 4)
    {

      cout << "ingrese un numero \n y luego el segundo numero \n";
      cin >> numero1;
      cin >> numero2;

      resultado = mcd (numero1, numero2);


      cout << "el resultado es: \t" << resultado;
    }
  if (menu == 5)
    {
      resultado = promedio (numero1);
    }


if (menu == 6)
    {
      resultado = nota40_porciento (numero1);
    }
    if (menu == 7)
    
    {
      resultado = diastaciametro (numero1);
    }
    if (menu == 8)
    {
      resultado = diastaciapie(numero1);
    }
    if (menu == 9)
    {
      resultado = diastaciapulgada (numero1);
    }
    if (menu == 10)
    {
      resultado = temperaturaFarenheit (numero1);
    }
    if (menu == 11)
    {
      resultado = temperaturacelsius (numero1);
    }
    if (menu == 12)
    {
      resultado = temperaturakelvin (numero1);
    }
    if (menu == 13)
    {
      resultado = temperaturacelsiusk (numero1);
    }
    
    if (menu == 14)
    {
      resultado = voltaje (numero1);
    }
    if (menu == 15)
    {
      resultado = hora_espana (numero1);
    }
    if (menu == 16)
    {
      resultado = hora_arabia_saudita (numero1);
    }
    if (menu == 17)
    {
      resultado = hora_beijing (numero1);
    }
return 0;
}








int
area (int menu)
{
int numero1=0,numero2=0,resultado=0;
  

  cout <<"\neliga una opciopn para calcular el área de la figuara\n1. cuadrado\n2. rectangulo\n3. triangulo\n4. circulo\n";
  cin >> menu;

  if (menu = 1)
    {
      cout << "ingrese el número para calcular el área del cuadrado\n";
      cin >> numero1;

      resultado = numero1 * numero1;

      cout << "El area de la figura es : \n" << resultado;

    }

  if (menu = 2)
    {
      cout <<"\ningrese el numero para calcular el area del rectagulo\n y luego el segundo numero\n";
      cin >> numero1;
      cin >> numero2;

      resultado = numero1 * numero2;

      cout << "El area de la figura es : \n" << resultado;

    }

  if (menu=3)
    {
      cout <<"ingrese el numero para calcular el area del triangulo\n y luego el segundo numero\n";
      cin >> numero1;
      cin >> numero2;

      resultado = (numero1 * numero2) / 2;

      cout << "El area de la figura es : \n" << resultado<<endl;

    }
    
  if (menu=4)
    {
      cout << "ingrese el radio del circulo para calcular el area\n ";
      cin >> numero1;

      resultado = (numero1 * numero1) * 3.1416;

      cout << "El area de la figura es : \n" << resultado;

    }

  return 0;

}






int
exponente (int numero, int exponente)
{
  int resultado = 0, r = 0;
  for (int contador = 1; contador <= exponente; contador++)
    {
      r = numero * numero;
      resultado += r;

    }

  return resultado;
}

int
mcm (int numero1, int numero2)
{

  int resultado = 1;

  for (int contador; contador <= numero1; contador++)
    {
      if (numero1 % contador == 0 && numero2 % contador == 0)

	resultado = contador;
    }

  return resultado;
}

int
mcd (int numero1, int numero2)
{

  int resultado = 0, mayor = 0;

  if (numero1 > numero2)
    {
      mayor = numero1;
    }
  else
    {
      mayor = numero2;
    }
  resultado = mayor;

  while ((resultado % numero1 != 0) || (resultado % numero2 != 0))

    {

      resultado += 1;

    }

  return resultado;
}


float
promedio (float nota)
{
  float resultado = 0, suma = 0;

  for (int contador = 1; contador <= 10; contador++)
    {

      cout << "ingrese la nota del 0.0 a 5.0" << endl;
      cin >> nota;
      suma += nota;

    }
  resultado = suma / 10;
  cout << "El promedio de la nota es : \n" << resultado;

  return resultado;
}

float nota40_porciento (float nota)
{
  float resultado = 0;

  cout << "ingrese su nota del primer corte  : \n";
  cin >> nota;

  resultado = (nota*0.60-5)*-1;
  
    cout << "La nota necesaria en el segundo corte, para pasar es de : \n" <<resultado;

return resultado;
}

float diastaciametro (float distancia)
{
    int resultado=0;
    cout << "ingrese la distancia recorrida en kilometros : \n";
  cin >> distancia;
    
    resultado =distancia*1000;
    
    cout << "La distancia recorrida en metros es : \n" <<resultado;

return resultado;
}
float diastaciapie (float distancia)
{
    int resultado=0;
    cout << "ingrese la distancia recorrida en kilometros : \n";
  cin >> distancia;
    
    resultado =distancia*1000*3.28;
    
    cout << "La distancia recorrida en pies es : \n" <<resultado;

return resultado;
}
float diastaciapulgada (float distancia)
{
    int resultado=0;
    cout << "ingrese la distancia recorrida en kilometros : \n";
  cin >> distancia;
    
    resultado =distancia*1000*39.37;
    
    cout << "La distancia recorrida en pulgadas es : \n" <<resultado;

return resultado;
}
float temperaturaFarenheit (float temperatura)
{
    int resultado=0;
    
    cout << "ingrese la Temperatura en grados celsius : \n";
  cin >> temperatura;
    
    resultado =(temperatura*9/5)+32;
    
    cout << "La temperatura en grados farenheit es : \n" <<resultado;

return resultado;
}

float temperaturacelsius (float temperatura)
{
    int resultado=0;
    
    cout << "ingrese la Temperatura en grados farenheit : \n";
  cin >> temperatura;
    
    resultado =(temperatura-32)*5/9;
    
    cout << "La temperatura en grados celsius es : \n" <<resultado;

return resultado;
}

float temperaturakelvin (float temperatura)
{
    int resultado=0;
    
    cout << "ingrese la Temperatura en grados celsius : \n";
  cin >> temperatura;
    
    resultado =temperatura+273.15;
    
    cout << "La temperatura en grados kelvin es : \n" <<resultado;

return resultado;
}
float temperaturacelsiusk (float temperatura)
{
    int resultado=0;
    
    cout << "ingrese la Temperatura en grados kelvin : \n";
  cin >> temperatura;
    
    resultado =temperatura-273.15;
    
    cout << "La temperatura en grados celsius es : \n" <<resultado;

return resultado;
}
/*
. Desarrolle una función que solicite ingrese tres voltajes distintos e indique si el 
promedio de los voltajes ingresados es menor a 115 visualice “VOLTAJE 
CORRECTO”, caso contrario sea mayor A 115 y menor a 220 visualice “ALTO 
VOLTAJE”, y si es mayor a 220 visualice “PELIGRO”.
*/

int voltaje (int voltaje1)
{
	int resultado,voltaje2,voltaje3;
	cout<<"Ingrese  3 voltajes \n";
	cin>>voltaje1;
	cin>>voltaje2;
	cin>>voltaje3;
	resultado= (voltaje1+voltaje2+voltaje3)/3;
	
	if (resultado<=115)
	{
		cout<<"Voltaje correcto\n";
	}
	if (resultado>115 && resultado<=220)
	{
		cout<<"Alto voltaje\n";
	}
	if (resultado>220)
	{
		cout<<"Peligro\n";
	}
	
	return resultado; 
}

float hora_espana (float hora)
{
	float resultado=0;
	
cout<<"ingrese la hora en colombia ";
cin>>hora;

resultado =hora+7.0;

cout<<"La hora en epaña es : \n "<<resultado;


return resultado;	
}
float hora_beijing (float hora)
{
	float resultado=0;
	
cout<<"ingrese la hora en colombia ";
cin>>hora;

resultado =hora+1.0;

cout<<"La hora en Beijing es : \n "<<resultado;


return resultado;	
}
float hora_arabia_saudita (float hora)
{
	float resultado=0;
	
cout<<"ingrese la hora en colombia ";
cin>>hora;

resultado =hora+8.0;

cout<<"La hora en arabia saudita es : \n "<<resultado;


return resultado;	
}
