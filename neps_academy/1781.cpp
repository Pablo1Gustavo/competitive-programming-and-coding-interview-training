#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if (a<=b && a<=c)
        cout << b+c << endl;
    else if (b<=a && b<=c)
        cout << a+c << endl;
    else
        cout << a+b << endl;

    return 0;
}