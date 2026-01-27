#include <bits/stdc++.h>

using namespace std;

// 동, 서, 남, 북, 상, 하
const int dz[6] = {0, 0, 0, 0, 1, -1};
const int dy[6] = {0, 0, -1, 1, 0, 0};
const int dx[6] = {1, -1, 0, 0, 0, 0};

char grid[32][32][32];
int visited[32][32][32];
int end_z, end_y, end_x;

int L, R, C;
// L은 층 수, R은 행 수, C는 열 수
void bfs(int z, int y, int x) {
    queue <tuple<int, int, int>> q;
    q.push({z, y, x});
    while (!q.empty()) {
        tuple<int, int, int> current = q.front();
        int curr_z = get<0>(current);
        int curr_y = get<1>(current);
        int curr_x = get<2>(current);
        q.pop();
        if (curr_z == end_z && curr_y == end_y && curr_x == end_x) {
            cout << "Escaped in " << visited[curr_z][curr_y][curr_x] << " minute(s)." << '\n';
            return;
        }
        for (int i = 0; i < 6; i++) {
            int nz = curr_z + dz[i];
            int ny = curr_y + dy[i];
            int nx = curr_x + dx[i];
            if (nz < 0 || nz >= L || ny < 0 || ny >= R || nx < 0 || nx >= C) continue;
            if (grid[nz][ny][nx] == '#' || visited[nz][ny][nx] != 0) continue;
            visited[nz][ny][nx] = visited[curr_z][curr_y][curr_x] + 1;
            q.push({nz, ny, nx});
        }
    }

    cout << "Trapped!\n";
    return;
}

int main() {
    while (true) {
        cin >> L >> R >> C;
        if (L == 0 && R == 0 && C == 0) break;
        // grid 초기화
        // visited 초기화
        
        fill(&visited[0][0][0], &visited[31][31][32], 0);
        int start_z = 0;
        int start_y = 0;
        int start_x = 0;
        end_z = 0;
        end_y = 0;
        end_x = 0;
        

        for (int i = 0; i < L; i++) {
            // L은 층의 수
            for (int j = 0; j < R; j++) {
                // R은 행의 수
                string temp;
                cin >> temp;
                if (temp.empty()) cin >> temp;
                for (int k = 0; k < C; k++) {
                    // C는 열의 수
                    grid[i][j][k] = temp[k];
                    if (temp[k] == 'S') {
                        start_z = i;
                        start_y = j;
                        start_x = k;
                    }
                    if (temp[k] == 'E') {
                        end_z = i;
                        end_y = j;
                        end_x = k;
                    }
                }
            }
        }
        
        visited[start_z][start_y][start_x] = 1;
        bfs(start_z, start_y, start_x);
        
    }

    return 0;
}