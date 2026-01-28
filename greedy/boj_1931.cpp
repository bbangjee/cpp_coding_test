#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int>> v;
/* 백준 1931 회의실 배정 */
bool custom_compare(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        v.push_back({start, end});
    }

    sort(v.begin(), v.end(), custom_compare);
    

    int curr = 0; 
    int count = 0;
    for (int i = 0; i < n; i++) {
        int start = v[i].first;
        int end = v[i].second;

        if (start < curr) continue;
        count++;
        curr = end;
    }

    cout << count << '\n';
    /*
    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    */
    return 0;
}