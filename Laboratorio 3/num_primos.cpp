#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "ingresa un numero: " << endl;
    cin >> n;

    for (int i = 2;i < n;i++) {

        int cre = 2;
        bool ziPrimo = true;

        while (ziPrimo && cre < i) {
            if (i % cre == 0) {
                ziPrimo = false;
            }
            else {
                cre++;
            }
        }
        if (ziPrimo) {
            cout << i << " ";
        }
    }

}
