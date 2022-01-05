#include <bits/stdc++.h>
using namespace std;

int p[200001];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, x, ans = 0;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p, p+n);

    int i = 0, j = n-1;

    while(i < j) {
        if (p[i]+p[j] <= x)
            i++;
        ans++;
        j--;
    }

    cout << ans + (i==j) << endl;

    return 0;
}