#include <iostream>
using namespace std;

int main(void)
{
    int multiplicacion = 0;

    for (int a = 1;a < 1000;a++){
        for (int b = 1; b < 1000;b++) {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c);
                multiplicacion = a * b * c;

        }
    }
    cout << "el valor de A es: " << multiplicacion;
    return 0;
}
