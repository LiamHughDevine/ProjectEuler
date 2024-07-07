#include <iostream>
using namespace std;

bool palindrome(int n) {
    auto text = to_string(n);
    auto k = text.length();
    auto i = 0;
    while (i < k/2) {
        if (text[i] != text[k-1-i]) {
            return false;
        }
        ++i;
    }
    return true;
}

int main() {
    auto found = false;
    auto largest = -1;
    auto i = 0;
    while (!found) {
        for (auto j = 0; j <= i; ++j) {
            auto result = (999 - j) * (999 - i + j);
            if (palindrome(result)) {
                largest = max(largest, result);
                found = true;
            }
        }
        ++i;
    }

    cout << "Largest Palindrome = " << largest << endl;
}
