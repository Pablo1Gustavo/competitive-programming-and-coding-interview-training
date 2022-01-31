#include <bits/stdc++.h>
using namespace std;

long long a[200001];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = a[0], local_ans = a[0];

    for (int i = 1; i < n; i++) {
        local_ans = max(a[i], local_ans + a[i]);
        ans = max(ans, local_ans);
    }

    cout << ans << endl;

    return 0;
}