#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int m[101][101], dist[101][101];
int move_x[] = {1, -1, 0 ,0};
int move_y[] = {0, 0, 1, -1};

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> m[i][j];

    memset(dist, INF, sizeof(dist));
    dist[0][0] = 0;

    priority_queue<pair<int, pair<int, int>>> q;

    q.push({0, {0,0}});

    while (!q.empty()) {
        int a = q.top().second.first, b = q.top().second.second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int a_ = a + move_x[i], b_ = b + move_y[i];

            if (a_ >= 0 && a_ < n && b_ >= 0 && b_ < n && dist[a][b]+m[a_][b_] < dist[a_][b_]) {
                dist[a_][b_] = dist[a][b] + m[a_][b_];
                q.push({-dist[a_][b_], {a_, b_}});
            }  
        }
    }

    cout << dist[n-1][n-1] << endl;

    return 0;
}