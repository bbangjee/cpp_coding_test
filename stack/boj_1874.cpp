#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> v;
stack <int> st; // 1 ~ 9
string ret;
    
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int num = 1;
    st.push(num);
    ret += "+\n";
    num++;
    
    for (int i = 0; i < n; i++) {
        if (st.empty()) {
            st.push(num);
            num++;
            ret += "+\n";
        }
        
        if (st.top() == v[i]) {
            st.pop();
            ret += "-\n";
        }

        else if (st.top() < v[i]) {
            while (st.top() < v[i]) {
                if (num > v[i]) {
                    ret.clear();
                    cout << "NO\n";
                    return 0;
                }
                st.push(num);
                num++;
                ret += "+\n";
            }
        }


        else if (st.top() > v[i]) {
            while (st.top() > v[i]) {
                if (num < v[i]) {
                    ret.clear();
                    cout << "NO\n";
                    return 0;
                }
                st.pop();
                ret += "-\n";
            }
            
        }

    }
    cout << ret;
    return 0;
}