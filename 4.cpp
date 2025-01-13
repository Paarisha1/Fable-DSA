#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int main() {
    string message = "45673";
    int sum = 0;

    for (char ch : message) {
        int digit = ch - '0';
        if (!isPrime(digit))
            sum += digit;
    }

    cout << sum << endl;
    return 0;
}
