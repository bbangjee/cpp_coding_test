#include <bits/stdc++.h>

using namespace std;

int n, k;
/* 백준 11047 동전 0 */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    vector<int> coins(n);

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        coins[i] = value;
    }

    int count = 0;
    
    for (int i = n - 1; i >= 0; i--) {
        while (k >= coins[i]) {
            k -= coins[i];
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}