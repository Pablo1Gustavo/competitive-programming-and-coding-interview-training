#include <bits/stdc++.h>
using namespace std;

int squares[500001];
long long prefixSum[500001];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    long long ans = 0;

    for(int i = 0; i < n; i++)
        cin >> squares[i];

    prefixSum[1] = squares[0];

    for(int i = 2; i <= n; i++)
        prefixSum[i] = squares[i - 1] + prefixSum[i - 1];

    for(int i = 1; i <= n; i++)
        ans += upper_bound(prefixSum + i, prefixSum + n + 1, prefixSum[i - 1] + k) - lower_bound(prefixSum + i, prefixSum + n + 1, prefixSum[i - 1] + k);

    cout << ans << endl;
    return 0;
}