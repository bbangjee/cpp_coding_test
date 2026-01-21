#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int a, b, c;
    cin >> a >> b >> c;
    int ret = a % c;
    while (b--) {
        ret = ret * a;
        ret = ret % c;
    }
    cout << ret << '\n';
    return 0;
}