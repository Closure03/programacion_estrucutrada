#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    float x, primera,segunda,tercera,cuarta,quinta;
    cout<<"ingrese un numero para realizar las operaciones"<<endl;
    cin>>x ;
    primera=pow(x,2);
    segunda=pow(x,3);
    tercera=(pow(x,2)+5);
    cuarta=(pow(x,3))*2;
    quinta= x*0.75;
	cout<<"el resultado es: "<<primera<<endl;
	cout<<"el resultado es: "<<segunda<<endl;
	cout<<"el resultado es: "<<tercera<<endl;
	cout<<"el resultado es: "<<cuarta<<endl;
	cout<<"el resultado es: "<<quinta<<endl;
    return 0;
}
