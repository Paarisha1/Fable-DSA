#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPerfectCube(int n) {
    int root = round(cbrt(n));
    return root * root * root == n;
}

int main() {
    vector<int> dimensions = {23, 1, 8, 56, 27, 67, 64, 125, 232};
    int count = 0;

    for (int dim : dimensions) {
        if (isPerfectCube(dim))
            ++count;
    }

    cout << count << endl;
    return 0;
}