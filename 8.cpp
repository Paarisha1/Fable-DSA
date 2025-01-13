#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> sales = {23, -7, 13, -34, 56, 43, -12};
    int count = 0;

    for (int sale : sales) {
        if (sale > 0)
            ++count;
    }

    cout << count << endl;
    return 0;
}