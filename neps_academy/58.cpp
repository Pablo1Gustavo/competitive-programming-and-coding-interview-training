#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010

int h[MAXN], higher_r[MAXN], higher_l[MAXN];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, resp = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> h[i];

    for (int i = 1, j = n; i <= n; i++, j--) {
        higher_l[i] = max(h[i], higher_l[i-1]);
        higher_r[j] = max(h[j], higher_r[j+1]);
    }

    for (int i = 1; i <= n; i++)
        if (h[i] < higher_l[i] && h[i] < higher_r[i])
            resp++;

    cout << resp << endl;

    return 0;
}