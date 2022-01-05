#include <bits/stdc++.h>
using namespace std;

int a[200001], b[200001];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, k, ans = 0;
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (b[j] + k < a[i])
            j++;
        else if (b[j] - k > a[i])
            i++;
        else{
            i++; j++;
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}