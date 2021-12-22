#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long int t, y, x, seq, pos;
    cin >> t;

    while (t--) {
        cin >> x >> y;

        seq = max(x, y);
        pos = min(x, y);

        if (seq%2 == 0 && seq == x || seq%2 == 1 && seq == y)
            cout << seq*seq - pos+1 << endl;
        else
            cout << seq*seq - (2*seq-2) + pos-1 << endl;
    }

    return 0;
}