#include <iostream>
using namespace std;

int main() {
    long long int num = 600851475143;
    
    int div = 2;
    while (div * div < num) {
        if ((num % div) == 0) {
            num /= div;
            continue;
        }
        ++div;
    }

    cout << "el mayor factor primo es " << num;
    return 0;
}