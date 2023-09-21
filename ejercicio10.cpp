#include <iostream>
using namespace std;

int main(void)
{
    long long suma = 0;
    int num = 2000000;

    for (int i = 2; i < num; i++) {
        bool primo = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            suma += i;
        }
    }

    cout << "La suma es: " << suma << endl;
    return 0;
}
