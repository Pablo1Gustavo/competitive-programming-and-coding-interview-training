#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int balls[10] = {0}, b;
    bool is_possible = true;

    for (int i = 0; i < 8; i++) {
        cin >> b;
        if (++balls[b] > 4)
            is_possible = false;
    }

    cout << (is_possible ? "S\n" : "N\n");

    return 0;
}