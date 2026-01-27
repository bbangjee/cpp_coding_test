#include <bits/stdc++.h>

using namespace std;

int F, S, G, U, D;
queue <int> q;
int visited[1000002];
// BOJ 5014 - 스타트링크
int main() {
    cin >> F >> S >> G >> U >> D;
    // U는 U층 위로 가는 버튼
    // D는 D층 아래로 가는 버튼
    q.push(S);
    visited[S] = 1;
    int moves = 0;
    while (!q.empty()) {
        int dest = q.front();
        q.pop();
        if (dest == G) {
            cout << visited[dest] - 1 << "\n";
            return 0;
        }
        if (dest + U <= F && !visited[dest + U]) {
            visited[dest + U] = visited[dest] + 1;
            q.push(dest + U);
        }
        if (dest - D >= 1 && !visited[dest - D]) {
            visited[dest - D] = visited[dest] + 1;
            q.push(dest - D);
        }
    }
    cout << "use the stairs\n";
    return 0;
}


