#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> findInfluencers(int n, const vector<pair<int, int>>& follows) {
    unordered_map<int, int> followerCount;
    for (const auto& follow : follows) {
        followerCount[follow.second]++;
    }

    vector<int> influencers;
    for (const auto& entry : followerCount) {
        if (entry.second > n / 2) {
            influencers.push_back(entry.first);
        }
    }

    return influencers;
}

int main() {
    int n, m;
    cout << "Enter the number of users: ";
    cin >> n;

    cout << "Enter the number of follow relationships: ";
    cin >> m;

    vector<pair<int, int>> follows(m);
    cout << "Enter the follow relationships (a b):" << endl;
    for (int i = 0; i < m; ++i) {
        cin >> follows[i].first >> follows[i].second;
    }

    vector<int> influencers = findInfluencers(n, follows);

    cout << "Influencers: ";
    for (int id : influencers) {
        cout << id << " ";
    }
    cout << endl;

    return 0;
}
