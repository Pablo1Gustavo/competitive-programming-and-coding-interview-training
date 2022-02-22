#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, m, hi, ti;
    cin >> n >> m;

    multiset<int> t;

    for (int  i = 0; i < n; i++) {
        cin >> hi;
        t.insert(hi);
    }

    while (m--) {
        cin >> ti;
        multiset<int>::iterator it = t.upper_bound(ti);

        if (it == t.begin())
            cout << -1 << endl;
        else {
            cout << *--it << endl;
            t.erase(it);
        }
    }

    return 0;
}