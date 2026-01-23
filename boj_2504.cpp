#include <bits/stdc++.h>

// 백준 2504번: 괄호의 값
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin >> str;
    stack <char> st;

    int result = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '[') {
            st.push(str[i]);
        }

        else if (str[i] == '(') {
            st.push(str[i]);
        }

        else if (str[i] == ')') {
            if (str[i] == '(') {
                st.pop();
            }
            else {

            }
        }
        else {


        }
        

    }

    if (st.size() == 0) cout << 0;
    return 0;
}