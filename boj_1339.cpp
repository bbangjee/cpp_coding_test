#include <bits/stdc++.h>
using namespace std;
// 백준 1339번 문제: 단어 수학
// pow 쓰지 말것
int n;
int alphabet[27];

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        for (int j = 0; j < temp.size(); j++) {
            int num = temp.size() - j - 1;
            int index = temp[j] - 'A';
            alphabet[index] += (int)round(pow(10, num));
        }
    }

    sort(alphabet, alphabet + 27, greater<int>());
    int value = 9;
    int answer = 0;
    for (int i = 0; i < 27; i++) {
        if (alphabet[i] == 0) break;
        answer += (alphabet[i] * value);
        value--;
    }
    cout << answer;
    return 0;
}