#include <bits/stdc++.h>

using namespace std;

int visited[100002];
int track[100002];

int dir[2] = { -1, 1};
// 1초 후에 x - 1 또는 x + 1
// 0초 후에 x * 2
int n, k;
queue<int> q;
int main() {
    cin >> n >> k;
    q.push(n);
    visited[n] = 1;
    track[n] = -1;
    while (!q.empty()) {
        int curr = q.front();
        if (curr == k) {
            cout << visited[curr] - 1 << '\n';
            // 경로 추적
            vector <int> path;
            int temp = curr;
            while (track[temp] != -1) {
                path.push_back(temp);
                temp = track[temp];
            }
            path.push_back(temp);
            for (int i = 0; i < path.size(); i++) {
                cout << path[(int)(path.size() - 1) - i] << " ";
            }
            cout << '\n';

            return 0;
        }
        q.pop();
        int new_pos = curr * 2;
        if (new_pos <= 100000 && visited[new_pos] == 0) {
            q.push(new_pos);
            visited[new_pos] = visited[curr] + 1;
            track[new_pos] = curr;
        }
        for (int i = 0; i < 2; i++) {
            new_pos = curr + dir[i];
            if (new_pos <= 100000 && new_pos >= 0 && visited[new_pos] == 0) {
            q.push(new_pos);
            visited[new_pos] = visited[curr] + 1;
            track[new_pos] = curr;
            }
        }

    } 

    return 0;
}