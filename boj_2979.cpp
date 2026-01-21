#include <bits/stdc++.h>
using namespace std;
int main (void) {
    int car1, car2, car3;
    cin >> car1;
    cin >> car2;
    cin >> car3;
    int a[101] = {0, };

    for (int i = 0 ; i < 3; i++) {
        int start, end;
        cin >> start;
        cin >> end;
        for (int j = start; j < end; j++) {
            a[j]++;
        }
    }
    int sum = 0;
    for (int i = 0 ; i < 101; i++) {
        if (a[i] == 1) sum += car1;
        if (a[i] == 2) sum += (2 * car2);
        if (a[i] == 3) sum += (3 * car3);
    }
    cout << sum;
    return 0;
}