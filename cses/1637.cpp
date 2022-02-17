#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int steps[1000001];
 
int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, current;
    cin >> n;

    steps[0] = 0;

    for (int i = 1; i <= n; i++) {
        steps[i] = INF;
        current = i;
        
        while (current > 0) {
            steps[i] = min(steps[i], steps[i - current % 10] + 1);
            current /= 10;
        }
    }

    cout << steps[n] << endl;

    return 0;
}