#include <iostream>
using namespace std;

int main() {
    int stock = 12;
    int steps = 0;

    while (stock > 0) {
        if (stock % 2 == 0)
            stock /= 2;
        else
            --stock;
        ++steps;
    }

    cout << steps << endl;
    return 0;
}