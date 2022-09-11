#include <iostream>
 
using namespace std;
 
int main(){

    int i, cont = 0, a[0] ;
 
    a[0] = 0;
    a[1] = 1;
 
    for(i=1; i < 20; i++){
 
        a[i+1] = a[i-1] + a[i];
 
    }
 
    for(i=0; i < 20; i++){
 
        cout << a[i] << " ";
 
        cont += 1;  
 
    }
       
    cout << "\n";
 
}
