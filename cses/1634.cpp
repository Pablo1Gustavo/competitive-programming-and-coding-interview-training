#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int c[101], v[1000001];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> c[i];

    v[0] = 0;

    for (int i = 1; i <= x; i++) {
        v[i] = INF;

        for (int j = 0; j < n; j++)
            if (i - c[j] >= 0)
                v[i] = min(v[i], v[i - c[j]] + 1);
    }

    cout << (v[x] == INF ? -1 : v[x]) << endl;

    return 0;
}