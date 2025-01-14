#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPerfectCube(int n) {
    int root = round(cbrt(n));
    return root * root * root == n;
}

int main() {
    int N = 6;
    vector<int> prices = {60, 7, 8, 10, 250, 730};
    int total = 0;

    for (int price : prices)
        total += price;

    while (!isPerfectCube(total))
        ++total;

    cout << total - accumulate(prices.begin(), prices.end(), 0) << endl;
    return 0;
}