#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    bool win = true;
    int n, c, o;
    cin >> n >> c;

    for (int i = 1; i < n; i++) {
        cin >> o;
        if (o > c)
            win = false;
    }

    cout << (win ? "S\n" : "N\n") << endl;

    return 0;
}