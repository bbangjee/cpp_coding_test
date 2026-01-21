#include <bits/stdc++.h>
using namespace std;
/**
 * 만약 stack이 비워져있으면
	자기자신 넣기
	저장 배열은 -1
st.top() < 자기자신
	찾을 떄까지 뽑고 자기 자신 넣기
		만약 stack이 비워져있으면
		자기자신 넣기
		저장 배열은 -1
st.top() > 자기자신
	자기자신 넣기	
 * 
 * 
*/
int main (void) {
    int n;
    cin >> n;
    vector <int> v1(n); // 요소 저장
    vector <int> v2(n); // 오큰수 저장
    stack <int> st;
    for (int i = 0; i < n; i++) cin >> v1[i];

    for (int i = n - 1; i >= 0; i--) {
       while (!st.empty() && st.top() < v1[i]) {
            st.pop();
       }
       if (st.empty()) v2[i] = -1;
       else v2[i] = st.top();

       st.push(v1[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << v2[i] << " ";
    }
    return 0;
}