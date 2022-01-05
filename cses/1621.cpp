#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    set<int> set;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        set.insert(x);
    }

    cout << set.size() << endl;

    return 0;
}