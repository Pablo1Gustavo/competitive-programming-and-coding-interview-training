#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, over = 0, resp = 0, pin;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> pin;
        pin += over;
        over = m-pin;
        resp += abs(over);
    }

    cout << resp << endl;

    return 0;
} 