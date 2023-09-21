#include <iostream>

using namespace std;

int main()
{
    int c = 2;
    int primo = 0;
    bool primeFound = true;
 
    for (int i = 3; c <= 10001; i++) {
        for (int j = 2; j < i; j++) {

            primeFound = true;

            if (i % j == 0) {

                primeFound = false;
 
                break;
            }
           
            if (c == 10001) {
                primo = i;
            }
        }
        if (primeFound == true) {
            c += 1;
        }
    }
    cout << "El 10 001 primo es: " << primo <<endl;

    return 0;
}
