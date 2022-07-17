#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int d, a, n;
    cin >> d >> a >> n;

    int fee = n >= 16 ? 14*a : (n - 1)*a;

    cout << (32 - n)*(d + fee) << endl;
    return 0;
}