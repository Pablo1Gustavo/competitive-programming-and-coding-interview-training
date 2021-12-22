#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    unsigned int n , resp = 1, ni;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> ni;
        resp |= ni;
    }

    cout << resp << endl;

    return 0;
}