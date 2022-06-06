#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t;
    string k;

    cin >> t;

    for (int test = 1; test <= t; test++) {
        cin >> k;
        char last = tolower(k.back());

        cout << "Case #" << test << ": ";

        if (last == 'y')
            cout << k << " is ruled by nobody.\n";
        else if (last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u')
            cout << k << " is ruled by Alice.\n";
        else
            cout << k << " is ruled by Bob.\n";
    }

    return 0;
}