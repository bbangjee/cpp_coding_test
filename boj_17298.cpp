#include <bits/stdc++.h>
using namespace std;
int cnt;
vector <int> v1; // 요소 저장

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
    cin >> cnt;
    vector <int> v2(cnt, 0); // 오큰수 저장
    stack <int> st;
    while (cnt--) {
        int temp;
        v1.push_back(temp);
    }

    for (int i = cnt - 1; cnt >= 0; cnt--) {
        if (st.size() == 0) {
            st.push(v1[i]);
            v2[i] = -1;
        }
        else if () {


        }

        else if () {


        }

        

    }
    return 0;
}