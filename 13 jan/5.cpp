#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 5, K = 4;
    vector<int> nums = {25, 26, 54, 81, 48};
    int score = 0;

    for (int num : nums)
        score += num / K;

    cout << score << endl;
    return 0;
}