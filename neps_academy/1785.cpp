#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int x, l, r;
    cin >> x >> l >> r;

    if (l<x && r>x || r<x && l>r)
        cout << x << endl;
    else
        cout << (abs(x-l) < abs(x-r) ? l : r) << endl;
}