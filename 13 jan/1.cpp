#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> bases = {4, 6};
    vector<int> heights = {5, 10};
    double max_area = 0;

    for (size_t i = 0; i < bases.size(); ++i) {
        double area = (bases[i] * heights[i]) / 2.0;
        max_area = max(max_area, area);
    }

    cout << fixed << max_area << endl;
    return 0;
}