#include <bits/stdc++.h>
using namespace std;

#define MAXN 510
#define F first
#define S second
typedef pair<int,int> ii;

int volcano[MAXN][MAXN];
int n, f;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> n >> f;

    string line;

    for (int i=0; i<n; i++){
        cin >> line;
        for (int j=0; j<n; j++)
            volcano[i][j] = line[j]-'0';
    }

    queue<ii> queue;
    if (volcano[0][0] <= f) {
        queue.push({0, 0});
        volcano[0][0] = -1;
    }

    while (!queue.empty()) {
        ii lava = queue.front();
        queue.pop();

        if(lava.F>0 && volcano[lava.F-1][lava.S]!=-1 && volcano[lava.F-1][lava.S] <= f) {
            queue.push({lava.F-1, lava.S});
            volcano[lava.F-1][lava.S] = -1;
        }
        if(lava.F<n-1 && volcano[lava.F+1][lava.S]!=-1 && volcano[lava.F+1][lava.S] <= f) {
            queue.push({lava.F+1, lava.S});
            volcano[lava.F+1][lava.S] = -1;
        }
        if(lava.S>0 && volcano[lava.F][lava.S-1]!=-1 && volcano[lava.F][lava.S-1] <= f) {
            queue.push({lava.F, lava.S-1});
            volcano[lava.F][lava.S-1] = -1;
        }
        if(lava.S<n-1 && volcano[lava.F][lava.S+1]!=-1 && volcano[lava.F][lava.S+1] <= f) {
            queue.push({lava.F, lava.S+1});
            volcano[lava.F][lava.S+1] = -1;
        }
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            if (volcano[i][j] == -1)
                cout << "*";
            else
                cout << volcano[i][j];
        }
        cout << endl;
    }

    return 0;
}