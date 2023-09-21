#include <iostream>
using namespace std;

int main (){
    int lim = 0;
    cout<<"ingresa un numero: ";
    cin>>lim;

    int i=0;
    int suma=0;
    for (i=0; i<lim;++i){
        if((i%3==0)||(i%5==0)){
            suma+=i;
        }
    }
    cout<<"la suma de los multiplos de 3 y 5 hasta "<<lim<<" es "<<suma;
    return 0;
}