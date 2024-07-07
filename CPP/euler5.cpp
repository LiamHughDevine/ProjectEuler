#include <iostream>
using namespace std;

int main() {
    auto smallestMultiple = 1;

    for (auto i = 1; i <= 20; ++i) {
        if (smallestMultiple % i != 0) {
            for (auto j = 1; j <= i; ++j) {
                if (smallestMultiple * j % i == 0) {
                    smallestMultiple *= j;
                    break;
                }
            }
        }
    }

    cout << "Smallest Multiple = " << smallestMultiple << endl;
}
