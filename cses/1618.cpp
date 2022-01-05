#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long resp = 0;
    int n;
    cin >> n;

    while (n > 0) {
        n /= 5;
        resp += n;
    }

    cout << resp << endl;

    return 0;
}