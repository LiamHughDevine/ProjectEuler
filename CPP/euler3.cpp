#include <iostream>
#include <cmath>
using namespace std;

long int largestPrimeFactor(long int number) {
    long int root = sqrt(number);
    long int i = 2;
    while (i <= root) {
        if (number % i == 0) {
            return largestPrimeFactor(number / i);
        }
        i += 1;
    }
    return number;
}

int main() {
    long int number = 600851475143;
    cout << "Largest Prime = " << largestPrimeFactor(number) << endl;
}
