#include <iostream>
using namespace std;

int main() {
    long long int lim = 4000000;
    long long int a = 1;
    long long int b = 2;
    long long int suma = 0;

    while (b <= lim) {
        if (b % 2 == 0) {
            suma += b;
        }
        long long int tmp = a;
        a = b;
        b = tmp + b;
    }

    cout << "La suma de los términos pares de la secuencia Fibonacci hasta " << lim << " es: " << suma << endl;

    return 0;
}
