#include <bits/stdc++.h>

using namespace std;
int n, m;
int hack[10002];

int main() {
    cin >> n >> m;
    vector <int> v;
    vector <int> answer;

    for (int i = 0; i < m; i++) {
        // a가 b를 신뢰한다.
        // b 해킹시 a 해킹 가능
        int a, b;
        cin >> a >> b;
        hack[b] = a;
        v.push_back(b);
    }
    int max = -1;
    for (int i = 0; i < v.size(); i++) {
        int check = 1;
        int to_check = v[i];
        while (hack[to_check] != 0) {
            check++;
            to_check = hack[to_check];
        }

        if (check > max) {
            answer.clear();
            answer.push_back(to_check);
            max = check;
        }
        if (check == max) {
            answer.push_back(to_check);
        }
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
    return 0;
}


