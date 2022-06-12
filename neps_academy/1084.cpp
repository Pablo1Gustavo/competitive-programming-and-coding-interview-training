#include <bits/stdc++.h>
using namespace std;

int hatedSongs[100001];
int hatedToFavoriteSong[100001];
bool playedSongs[100001];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m, c, a, d;
    cin >> n >> m >> c;

    int oldestClientA;

    for(int i = 0; i < n; i++) {
        cin >> a >> d;
        hatedSongs[d]++;
        hatedToFavoriteSong[d] = a;

        if(i == 0)
            oldestClientA = a;
    }

    int changes = 0;

    while(hatedSongs[c] > 0) {
        changes++;
        playedSongs[c] = true;

        c = hatedSongs[c] > 1 ? oldestClientA : hatedToFavoriteSong[c];

        if(playedSongs[c]) {
            cout << "-1\n";
            return 0;
        }
    }

    cout << changes << endl;
    return 0;
}