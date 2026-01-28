#include <bits/stdc++.h>

using namespace std;
int n;
/* 백준 1744 수 묶기 */
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v[i] = temp;
    }

    cout << sum << '\n';
    return 0;
}