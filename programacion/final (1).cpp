/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int nentero(int n) { // funcion 1 areas 
    cout<<"Has introducido el numero "<<n<<", gracias";
    return n;
}
int years(int a) {
    int edad;
    edad= 2022 - a;
    cout << "Ahora se que tienes: "<< edad<<" años, gracias";
    return edad;
}
int seg(int s) {
    float ho, min;
    ho= s / 3600.0;
    min= s/60;
    cout << "su equivalente en horas es: " << ho<<" horas"<<endl;
    cout << "su equivalente en minutos es: " << min<<" minitos";
    return s;
}
float descuento(float pre, float des) {
    float total;
    total= pre - (pre * (des/ 100));
    cout << "El precio con descuento es: " << total;
    return total;
}
float euros(float usd) {
    float eur;
    eur= usd / 1.33250;
    cout<<"su equivalente en euros son: "<<eur<<" euros";
    return eur;
    
}
float cop(float usd){
    float pesos;
    pesos= usd * 3.87954;
    cout<<"su equivalente en COP son: "<<pesos<<" pesos";
    return pesos;
}
float usd(float pesos){
    float dolar;
    dolar= pesos / 3.87954;
    cout<<"su equivalente en usd son: "<<dolar<<" dolares";
    return dolar;
}
int dias_seg(int d, int h, int m) {
    int dt, ht, mt, total;
    dt= d * 86400;
    ht= h * 3600;
    mt= m * 60;
    total= dt + ht + mt;
    cout << "el total de dias son: " << dt<<" segundos"<<endl;
    cout << "el total de horas son: " << ht<<" segundos"<<endl;
    cout << "el total de minutos son: " << mt<<" segundos"<<endl;
    cout << "el total de estos valores es: " << total<<" segundos"<<endl;
    return total;
}
float resistencias(float r1, float r2) {
    float req;
    req= (r1 * r2)/ (r1 + r2);
    cout << "su resistencia equivalente en paralelo es: " << req;
    return req;
}
int ciclos(int num) {
    for (int i = 1; i <= num; i++ ){
        cout<<"con ciclos for: "<<i<<endl;
    }
    int n = 1;
    while(n<=num){
        cout<<"con ciclo while: "<<n<<endl;
        n++;
    }
    return num;
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



string letras(int n1, int n2, string l) {
    if (l == "i"){
        for ( int x = n1; x<= n2; x++){
            if (x%2 != 0){
                cout<< x << endl;
            }
        }
    }
    if (l == "p"){
        for ( int x = n1; x<= n2; x++){
            if (x%2 == 0){
                cout<< x << endl;
            }
        }
    }else{
        cout<<"no se imprime nada";
    }
    return n1, n2, l;
}





float notas(int op){
    float no;
    if (op == 1){
        cout<<"ingrese la nota de los 40 estudiantes en listado"<<endl;
        for (int i = 0; i < 40; i++){
            cout<< "la nota del alumno es: ";
            cin>>no;
        }
    }else if (op == 2){
        float me= 0, media;
        for (int i = 0; i < 40; i++){
            cout<< "la nota del alumno es: ";
            cin>>no;
            me += no;
        }
        media = me/40;
        cout<<"la media de las notas es: "<<media;
    }else if(op == 3){
        float menor;
        int cont= 0;
        cout<< "la nota del alumno es: ";
        cin>>no;
        while (cont < 39 and no > 0){
		    cont= cont + 1;
		    if (cont == 1){
		        menor=no;
            }else{
		        if (no < menor){
		           menor=no;
		        }
		    }
		    cout<< "la nota del alumno es: ";
            cin>>no;
        }
        cout<<"la nota menor es: "<<menor;
    }else if(op == 4){
        float mayor;
        int cont= 0;
        cout<< "la nota del alumno es: ";
        cin>>no;
        while (cont < 39 and no > 0){
		    cont= cont + 1;
		    if (cont == 1){
		        mayor=no;
            }else{
		        if (no > mayor){
		           mayor=no;
		        }
		    }
		    cout<< "la nota del alumno es: ";
            cin>>no;
        }
        cout<<"la nota mayor es: "<<mayor;
    }
    return op;
}
int habitantes (int a, int b, int c, int d){
    
}
float k_c(float k) {
    float c;
    c = k - 273.15; 
    cout << "la temperatura equivalente en celsius es: " << c;
    return k;
}
float voltajes(float v1, float v2, float v3) {
    float pro;
    pro = (v1 + v2 + v3) / 3;//promedio voltaje
    cout << "el voltaje total es: " << pro << endl;
    if (pro <= 115) {
        cout << "VOLTAJE CORRECTO!!";
    }
    else if (pro > 115 and pro <= 220) {
        cout << "VOLTAJE ALTO!!!";
    }
    else if (pro > 220) {
        cout << "¡¡¡PELIGRO!!!";
    }
    return pro;
}
float hc_he(float hc) {
    float he;
    he = hc + 7.00;
    cout << "La hora equivalente en España (7 horas más) es: " << he;
    return hc;
}
float hc_has(float hc) {
    float has;
    has = hc + 8.00;
    cout << "La hora equivalente en Arabia Saudita (8 horas más) es: " << has;
    return hc;
}
float hc_hb(float hc) {
    float hb;
    hb = hc - 11.00; // se hace de esta manera para que el rango no salga de las 24 horas y de la hora correspondiente
    cout << "La hora equivalente en Beijing (13 horas más) es: " << hb;
    return hc;
}
int main() {
    int op, me;
    cout << "Que función quiere: 1.num 2.edad 3.seg a h/min 4.descuento 5.Euro 6.USD - COP 7.COP -USD 8.Dias a seg 9.Resistencias 10. ciclos 11.may y mer 12.letras 13.Notas 14.Habitantes 15.Kelvin a Celsius 16.Voltajes 17.H colombia a H España 18.H Colombia a H Arabia Saudita 19. H Colombia a H Beijing " << endl;
    cin >> me;
    if (me == 1) {
        int n;
        cout << "Ingrese un numero: ";
        cin >> n;
        nentero(n);
    }
    else if (me == 2) {
        int a;
        cout << "ingrese el año de nacimiendo (xxxx): ";
        cin >> a;
        years(a);
    }
    else if (me == 3) {
        int s;
        cout<<"Ingrese la cantidad de segundos: ";
        cin>>s;
        seg(s);
    }else if (me == 4){
        float pre, des;
        cout<<"Ingrese el precio: ";
        cin>>pre;
        cout<<"Ingrese el descuento: ";
        cin>>des;
        descuento(pre, des);
    }else if (me == 5) { 
        float usd;
        cout<<"ingrese un valor en dolares: ";
        cin>>usd;
        euros(usd);
    }
    else if (me == 6) {
        float usd;
        cout<<"ingrese un valor en dolares: ";
        cin>>usd;
        cop(usd);
    }
    else if (me == 7) { 
        float pesos;
        cout << "Ingrese un valor en pesos: ";
        cin >> pesos;
        usd(pesos);
    }
    else if (me == 8) {
        int d, h, m;
        cout << "Ingrese el numero de dias: ";
        cin >> d;
        cout << "Ingrese el numero de horas: ";
        cin >> h;
        cout << "Ingrese el numero de minutos: ";
        cin >> m;
        dias_seg(d, h, m);
    }
    else if (me == 9) {
        float r1, r2;
        cout << "Ingrese la primera resistencia: ";
        cin >> r1;
        cout << "Ingrese la segunda resistencia: ";
        cin >> r2;
        resistencias(r1, r2);
    }
    else if (me == 10) {
        int num;
        cout << "ingrese un numero: ";
        cin >> num;
        ciclos(num);
    }
    else if (me == 11) {//se ingresa la temperatura y la función hace la conversión 
        int n1, n2, n3;
        cout << "ingrese un numero: ";
        cin >> n1;
        cout << "ingrese un numero: ";
        cin >> n2;
        cout << "ingrese un numero: ";
        cin >> n3;
        may_mer(n1, n2, n3);
    }
    else if (me == 12) {
        string l;
        int n1, n2;
        cout << "ingrese un numero: ";
        cin >> n1;
        cout << "ingrese otro numero: ";
        cin >> n2;
        cout<<"ingrese una letra i o p: ";
        cin>>l;
        letras(n1, n2, l);
    }else if (me == 13) {
        int op;
        cout<<"1. listar notas 2.Calcular la media 3. Calcular el menor 4. Calcular el mayor"<<endl;
        cin>>op;
        notas(op);
    }else if (me == 14) {
        
    }else if (me == 15) {
        float k;
        cout << "ingrese la temperatura en kelvin: ";
        cin >> k;
        k_c(k);
    }
    else if (me == 16) {//se ingresan los voltajes
        float v1, v2, v3;
        cout << "calculo de voltajes" << endl;
        cout << "Ingrese el primer voltaje: ";
        cin >> v1;
        cout << "Ingrese el segundo voltaje: ";
        cin >> v2;
        cout << "Ingrese el tercer voltaje: ";
        cin >> v3;
        voltajes(v1, v2, v3);
    }
    else if (me == 17) {//se ingresa la hora correspondiente y las funciones hacen la conversión
        float hc;
        cout << "Ingrese hora en Colombia (00.00): ";
        cin >> hc;
        hc_he(hc);
    }
    else if (me == 18) {
        float hc;
        cout << "Ingrese hora en Colombia (00.00): ";
        cin >> hc;
        hc_has(hc);
    }
    else if (me == 19) {
        float hc;
        cout << "Ingrese hora en Colombia (00.00): ";
        cin >> hc;
        hc_hb(hc);
    }

    return 0;
}
