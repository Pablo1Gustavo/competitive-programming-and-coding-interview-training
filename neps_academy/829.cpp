#include <bits/stdc++.h>
using namespace std;

#define MAXN 1010

int cards[MAXN][MAXN];
int players[MAXN];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, k, u, number;
    bool end;

    cin >> n >> k >> u;

    for (int i=1; i<=n; i++)
        for (int j=0; j<k; j++) {
            cin >> number;
            cards[i][number] = 1;
        }

    for (int i=0; i<u; i++) {
        cin >> number;

        for (int j=1; j<=n; j++) {
            if (cards[j][number])
                players[j]++;
            if (players[j] == k)
                end = true;
        }
        if (end) break;
    }

    for (int i=1; i<=n; i++)
        if (players[i] == k)
            cout << i << " ";
    
    cout << endl;

    return 0;
}