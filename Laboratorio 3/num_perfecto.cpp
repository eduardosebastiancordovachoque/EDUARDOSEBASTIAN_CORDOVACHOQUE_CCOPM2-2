#include <iostream>
using namespace std;

int main(){
    int a;
    int div=0;
    int suma=0;
    cout<<"ingrese un numero "<<endl;
    cin>>a;

    for(int i=1;i<a;i++){
        if(a%i==0){
            div=i;
            suma+=div;
        }
    }
    if(suma==a){
        cout<<a<<"es un numero perfecto "<<endl;
    }
    else{
        cout<<a<<"no es un numero perfecto "<<endl;
    }

}
