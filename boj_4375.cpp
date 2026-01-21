#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int num;
    while (cin >> num) {
        int result = 1;
        
        long long to_divide = 1LL;
        long long to_add = 10LL;
        // 1
        // 11
        // 111
        while (1) {
            if (to_divide % num == 0) {
                break;
            } 
            else {
                to_divide += to_add;
                to_add *= 10;
                result += 1;
            }

        }


        cout << result << '\n';
    }
    return 0;
}