#include <iostream>
#include <string>
using namespace std;

int main() {
    string orderID = "2342";
    int product = 1;

    for (char ch : orderID)
        product *= (ch - '0');

    cout << product << endl;
    return 0;
}