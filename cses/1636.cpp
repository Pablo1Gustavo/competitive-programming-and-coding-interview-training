#include <bits/stdc++.h>
using namespace std;
 
#define MOD 1000000007
 
int c[101], ways[1000001];
 
int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    int n, x;
    cin >> n >> x;
 
    for (int i = 0; i < n; i++)
        cin >> c[i];
 
    ways[0] = 1;
 
    for (int j = 0; j < n; j++)
        for (int i = 1; i <= x; i++) {
            if (i - c[j] >= 0) 
                ways[i] += ways[i - c[j]];
            ways[i] %= MOD;
        }
 
 
    cout << ways[x] << endl;
 
    return 0;
}