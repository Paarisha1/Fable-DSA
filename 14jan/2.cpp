#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMeetingRooms(vector<pair<int, int>>& intervals) {
    vector<int> startTimes, endTimes;
    for (const auto& interval : intervals) {
        startTimes.push_back(interval.first);
        endTimes.push_back(interval.second);
    }

    sort(startTimes.begin(), startTimes.end());
    sort(endTimes.begin(), endTimes.end());

    int rooms = 0, endIndex = 0;
    for (int i = 0; i < startTimes.size(); ++i) {
        if (startTimes[i] < endTimes[endIndex]) {
            rooms++;
        } else {
            endIndex++;
        }
    }

    return rooms;
}

int main() {
    int n;
    cout << "Enter the number of meetings: ";
    cin >> n;

    vector<pair<int, int>> intervals(n);
    cout << "Enter the intervals (start end):\n";
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i].first >> intervals[i].second;
    }

    cout << "Minimum number of rooms required: " << minMeetingRooms(intervals) << endl;
    return 0;
}