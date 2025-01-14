#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> mergeIntervals(vector<pair<int, int>>& intervals) {
    if (intervals.empty()) {
        return {};
    }

    sort(intervals.begin(), intervals.end());
    vector<pair<int, int>> merged;

    merged.push_back(intervals[0]);
    for (size_t i = 1; i < intervals.size(); ++i) {
        if (merged.back().second >= intervals[i].first) {
            merged.back().second = max(merged.back().second, intervals[i].second);
        } else {
            merged.push_back(intervals[i]);
        }
    }

    return merged;
}

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<pair<int, int>> intervals(n);
    cout << "Enter the intervals (start end):\n";
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    vector<pair<int, int>> result = mergeIntervals(intervals);
    cout << "Merged intervals: ";
    for (const auto& interval : result) {
        cout << interval.first << " " << interval.second << " ";
    }
    cout << endl;

    return 0;
}
