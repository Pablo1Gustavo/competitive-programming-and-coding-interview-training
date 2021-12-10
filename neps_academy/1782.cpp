#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    char s[n];
    cin >> s;

    while(a < b)
        swap(s[a++ - 1], s[--b]);

    cout << s << endl;

    return 0;
}