#include <iostream>
using namespace std;

int main() {
    int n;
    int x = 0;
    int y = 1;
    int z = 1;
    cout << "ingresa un numero: ";
    cin >> n;

    cout << "1 ";
    for (int i = 1;i < n;i++) {
        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
    }
    return 0;

}
