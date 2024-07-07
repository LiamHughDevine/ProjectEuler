#include <iostream>
using namespace std;

int square_sum() {
    auto sum = 0;
    for (auto i = 1; i <= 100; ++i) {
        sum += i;
    }
    return sum * sum;
}

int sum_square() {
    auto sum = 0;
    for (auto i = 1; i <= 100; ++i) {
        sum += i * i;
    }
    return sum;
}

int main() {
    auto difference = square_sum() - sum_square();
    cout << "Difference = " << difference << endl;
}
