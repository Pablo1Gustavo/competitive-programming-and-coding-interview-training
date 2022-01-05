#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long n, x = 2, res = 1;
    cin >> n;

    while (n > 0) {
        if (n % 2)
            res = (res*x) % 1000000007;

        n /= 2;
        x = (x*x) % 1000000007;
    }

    cout << res << endl;

    return 0;
}