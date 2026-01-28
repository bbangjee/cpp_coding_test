#include <bits/stdc++.h>

using namespace std;

int n;
int visited[1000002];
// boj 1463 1로 만들기
void dp(int curr) {
    if (curr == 1) {
        return;
    }
    if (((curr % 3 == 0) && visited[curr / 3] == 0)
        || ((curr % 3 == 0) && visited[curr / 3] > visited[curr] + 1)) {
        visited[curr / 3] = visited[curr] + 1;
        dp(curr / 3);

    }
    if (((curr % 2 == 0) && visited[curr / 2] == 0)
        || ((curr % 2 == 0) && visited[curr / 2] > visited[curr] + 1)) {
        visited[curr / 2] = visited[curr] + 1;
        dp(curr / 2);
    }
    if (curr - 1 >= 1 && (visited[curr - 1] == 0
        || visited[curr - 1] > visited[curr] + 1)) {
        visited[curr - 1] = visited[curr] + 1;
        dp(curr - 1);
    }
}

int main() {
    cin >> n;
    visited[n] = 1;
    int curr = n;
    
    dp(n);

    cout << visited[1] - 1 << "\n";
    return 0;
}