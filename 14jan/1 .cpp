#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

string taskOrder(int n, const vector<pair<int, int>>& dependencies) {
    vector<int> indegree(n + 1, 0);
    unordered_map<int, vector<int>> graph;

    for (const auto& dep : dependencies) {
        graph[dep.first].push_back(dep.second);
        indegree[dep.second]++;
    }

    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> order;
    while (!q.empty()) {
        int task = q.front();
        q.pop();
        order.push_back(task);

        for (int neighbor : graph[task]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    if (order.size() == n) {
        string result;
        for (int t : order) {
            result += to_string(t) + " ";
        }
        return result;
    } else {
        return "Impossible to complete all tasks";
    }
}

int main() {
    int n, m;
    cout << "Enter the number of tasks: ";
    cin >> n;
    cout << "Enter the number of dependencies: ";
    cin >> m;

    vector<pair<int, int>> dependencies(m);
    cout << "Enter the dependencies (a b):\n";
    for (int i = 0; i < m; ++i) {
        cin >> dependencies[i].first >> dependencies[i].second;
    }

    cout << taskOrder(n, dependencies) << endl;
    return 0;
}
