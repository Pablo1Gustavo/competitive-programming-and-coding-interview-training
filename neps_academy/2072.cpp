#include <bits/stdc++.h>
using namespace std;

int sumCount[1000001];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, s, acc = 0, value;
    cin >> n >> s;

    long long ans = 0;

    for(int i = 0; i < n; i++) {
        sumCount[acc]++;

        cin >> value;
        acc += value;

        if (acc - s >= 0)
            ans += sumCount[acc - s];
    }

    cout << ans << endl;
    return 0;
}