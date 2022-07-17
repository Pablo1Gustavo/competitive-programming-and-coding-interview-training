#include <bits/stdc++.h>
using namespace std;

int digitSum(int i) {
    int ans = 0;

    while(i > 0) {
        ans += i%10;
        i /= 10;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, s;
    cin >> n >> m >> s;

    int maxValue = -1;

    for(int i = n; i <= m; i++)
        if (digitSum(i) == s)
            maxValue = i;

    cout << maxValue << endl;
    return 0;
}