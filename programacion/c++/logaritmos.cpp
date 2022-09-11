#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    float x, y1=0,y2=0,y3=0,y4=0;
    for (x=0; x<100; x++){
y1= (pow(x,2)+cos(x)-sqrt(x/log(x)));
y3+= y1;
y2= (pow(x,2)+cos(x)+sqrt(x/log(x)));
y4+= y2;
}
 cout << "el resultado es: "<<y3<<endl;
 cout << "el resultado es: "<<y4<<endl; 
    return 0;
}
