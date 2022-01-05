#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int dist[101];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    vector<tuple<int, int, int>> edges;
    int n, m, a, b, c;
    cin >> n >> m;

    while (m--) {
        cin >> a >> b >> c;
        edges.push_back({a, b, c});
        edges.push_back({b, a, c});
    }

    memset(dist, INF, sizeof(dist));
    dist[1] = 0;

    for (int i = 1; i <= n-1; i++)
        for (auto e: edges) {
            tie(a, b, c) = e;
            dist[b] = min(dist[b], dist[a]+c);
        }

    cout << dist[n] << endl;

    return 0;
}