#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int x_0 = 1;
    int x_1 = 1;

    while (x_1 < 4000000) {
        int x_2 = x_0 + x_1;
        x_0 = x_1;
        x_1 = x_2;
        if (x_2 % 2 == 0) {
            sum += x_2;
        }
    }


    cout << "Sum = " << sum << endl;
}
