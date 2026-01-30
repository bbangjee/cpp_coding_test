#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> heights;
stack<int> st;
// 백준 6198 옥상 정원 꾸미기
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        while(!st.empty() && st.top() < temp) {
            st.pop();
        }
        sum += st.size();
        st.push(temp);
    }

    cout << sum << '\n';
    return 0;
}