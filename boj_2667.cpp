#include <bits/stdc++.h>

using namespace std;
int n;
queue <pair<int, int>> q;
vector <int> v; // 각 단지내 집의 수
int grid[30][30];
bool visited[30][30];

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int bfs(int i, int j) {
    q.push({i, j});
    visited[i][j] = true;
    int house_count = 1; // 단지 내 집의 수
    while (!q.empty()) {
        int dest_y = q.front().first;
        int dest_x = q.front().second;        
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = dy[i] + dest_y;
            int nx = dx[i] + dest_x;
            if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
            if (visited[ny][nx] == true || grid[ny][nx] == 0) continue;
            visited[ny][nx] = true;
            q.push({ny, nx});
            house_count++;
        }
    }
    return house_count;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        for (int j = 0; j < temp.length(); j++) {
            int a = temp[j] - '0';
            grid[i][j] = a;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (visited[i][j] == 0 && grid[i][j] == 1) {
                int num = bfs(i, j); // 각 단지 내 집의 수
                v.push_back(num);
            }
        }
    }

    sort(v.begin(), v.end());
    cout << v.size() << "\n";

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    
    return 0;
}


