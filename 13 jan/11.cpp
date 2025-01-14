#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int calculateDeliveredProducts(const string& codes) {
    char smallest = *min_element(codes.begin(), codes.end());
    char largest = *max_element(codes.begin(), codes.end());

    return static_cast<int>(smallest) + static_cast<int>(largest);
}

int main() {
    string codes;
    cout << "Enter the delivery request codes: ";
    cin >> codes;

    int totalProducts = calculateDeliveredProducts(codes);
    cout << "Total number of products delivered: " << totalProducts << endl;

    return 0;
}