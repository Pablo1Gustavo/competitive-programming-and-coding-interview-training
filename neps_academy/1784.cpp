#include <bits/stdc++.h>
using namespace std;

#define MAXN 110

int b[MAXN];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, ai, resp = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> ai;
        resp = max(resp, ++b[ai]);
    }

    cout << resp << endl;

    return 0;
}