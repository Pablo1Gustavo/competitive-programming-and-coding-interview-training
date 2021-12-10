#include <bits/stdc++.h>
using namespace std;

#define MAXN 10010

int canvas[MAXN];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    bool is_escher = true;

    for (int i = 0; i < n; i++)
        cin >> canvas[i];

    for (int i = 1; i < n; i++) {
        if (canvas[i]+canvas[n-i-1] != canvas[i-1]+canvas[n-i]) {
            is_escher = false;
            break;
        }
    }

    cout << (is_escher ? "S" : "N");

    return 0;
}