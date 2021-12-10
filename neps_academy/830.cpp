#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010

bool infections[MAXN];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, c, p, i, infection;
    cin >> n >> c;

    for (int w=0; w<c; w++) {
        cin >> p;
        cin >> i;
        for (int j=0; j<i; j++) {
            cin >> infection;
            infections[infection] = true;
        }
    }

    for (int w=1; w<=n; w++)
        if (!infections[w])
            cout << w << endl;

    return 0;
}