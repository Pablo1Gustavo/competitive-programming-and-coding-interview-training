#include <bits/stdc++.h>
using namespace std;

int s[501];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, ans = 1, a, b, last, local_max;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j ++) {
            a = s[i];
            b = s[j];
            local_max = 0;
            last = -1;
            for (int k = 0; k < n; k++) {
                if (s[k] == a || s[k] == b) {
                    if (s[k] != last)
                        local_max++;
                    last = s[k];
                }
            }
            ans = max(ans, local_max);
        }

    cout << ans << endl;

    return 0;
}