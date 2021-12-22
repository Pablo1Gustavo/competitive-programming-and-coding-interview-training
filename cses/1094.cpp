#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, a, b;
    long long int moves = 0;
    cin >> n;

    cin >> a;

    while(n-- -1) {
        cin >> b;
        if (b < a) {
            moves += a-b;
            a = b+a-b;
        } else
            a = b;
    }

    cout << moves << endl;

    return 0;
}