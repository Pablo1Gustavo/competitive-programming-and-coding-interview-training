#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t, n, case_ = 1;
    cin >> t;

    while (t--) {
        cin >> n;

        char p[2*n-2];
        cin >> p;

        cout << "Case #" << case_++ << ": ";

        for (int i = 0; i < 2*n-2; i++)
            cout << (p[i] == 'S' ? 'E' : 'S');
        
        cout << endl;
    }

    return 0;
}