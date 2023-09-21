#include <iostream>
using namespace std;

int main() {
    int numero = 100;
    int suma = 0;
    int cuadrado = 0;
    int i = 1;
    for (i = 1; i <= numero; ++i) {
        suma += i;
        cuadrado += i * i;
    }
    cout << "la diferencia entre la suma de los cuadrados y el cuadrado de la suma es " << suma*suma - cuadrado ;
    return 0;
}