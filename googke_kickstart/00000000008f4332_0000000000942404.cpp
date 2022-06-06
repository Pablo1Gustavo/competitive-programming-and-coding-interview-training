#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t, n, m, c, total;

    cin >> t;

    for (int test = 1; test <= t; test++) {
        total = 0;
        cin >> n >> m;

        for (int i = 0; i < n; i ++) {
            cin >> c;
            total += c;
        }

        cout << "Case #" << test << ": " << total % m << endl;
    }

    return 0;
}