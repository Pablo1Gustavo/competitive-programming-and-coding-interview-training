#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int ways[1000001];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    ways[0] = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 6 ; j++) {
            if (i-j >= 0) 
                ways[i] += ways[i-j];
            ways[i] %= MOD;
        }

    cout << ways[n] << endl;

    return 0;
}