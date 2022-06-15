#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int m, a, b;
    cin >> m >> a >> b;

    cout << max(m - a - b, max(a , b)) << endl;
}