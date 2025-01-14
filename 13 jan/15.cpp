#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int calculateEnergyPoints(int level, const vector<int>& baseValues) {
    unordered_set<int> uniqueMultiples;

    for (int base : baseValues) {
        for (int multiple = base; multiple < level; multiple += base) {
            uniqueMultiples.insert(multiple);
        }
    }

    int sum = 0;
    for (int value : uniqueMultiples) {
        sum += value;
    }

    return sum;
}

int main() {
    int level, n;

    cout << "Enter the level: ";
    cin >> level;

    cout << "Enter the number of base values: ";
    cin >> n;

    vector<int> baseValues(n);
    cout << "Enter the base values: ";
    for (int i = 0; i < n; ++i) {
        cin >> baseValues[i];
    }

    int energyPoints = calculateEnergyPoints(level, baseValues);
    cout << "Energy points: " << energyPoints << endl;

    return 0;
}
