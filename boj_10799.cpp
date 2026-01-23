#include <bits/stdc++.h>
// 백준 10799번: 쇠막대기
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int result = 0;
    string temp;
    cin >> temp;
    stack <char> st;
    
    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] == '(') {
            st.push(temp[i]);

        }
        else if (temp[i] == ')' && temp[i - 1] == '(') {
            st.pop();
            result += st.size();
        }
        else if (temp[i] == ')' && temp[i - 1] == ')') {
            st.pop();
            result += 1;
            
        }


        // 이거 아님
        

    }
    cout << result;
    return 0;
}