#include <bits/stdc++.h>
using namespace std;
int n, m;
int main (void) {
    cin >> n >> m;
    // n은 재료의 개수
    // m은 갑옷을 만드는데 필요한 수
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    int answer = 0;

    sort(v.rbegin(), v.rend());
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] + v[j] == m) answer++;
            if (v[i] + v[j] < m) break;
        }
    }
    cout << answer;
    return 0;
}