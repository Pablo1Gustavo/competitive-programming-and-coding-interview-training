#include <bits/stdc++.h>
using namespace std;

int t[1001];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, p, m;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> t[i];

    cin >> p >> m;

    for(int i = 0; i < n; i++) {
        if(t[i] == 1)
            p--;
        else
            m--;
        if (p < 0 || m < 0) {
            cout << "N\n";
            return 0;
        }
    }

    cout << "S\n";
    return 0;