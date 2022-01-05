#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f

int dist[1001], resp_min = INF, resp_max = -INF;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    vector<tuple<int, int, int>> edges;
    int n, m, u, v, p, s;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v >> p;
        edges.push_back({u, v, p});
        edges.push_back({v, u, p});
    }

    memset(dist, INF, sizeof(dist));

    cin >> s;
    dist[s] = 0;

    for (int i = 1; i <= n-1; i++)
        for (auto e: edges) {
            tie(u, v, p) = e;
            dist[u] = min(dist[u], dist[v]+p);

        }
    
    for (int i = 1; i <= n; i++) {
        if (i == s)
            continue;
        resp_min = min(resp_min, dist[i]);
        resp_max = max(resp_max, dist[i]);
    }

    cout << resp_max - resp_min << endl;

    return 0;
}