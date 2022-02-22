#include <bits/stdc++.h>
using namespace std;

vector<int> t[200001];
int dist[200001];

pair<int, int> bfs(int root) {
    memset(dist, -1, sizeof(dist));

    queue<int> q;
    q.push(root);
    dist[root] = 0;

    int max = 0, vet_max = root;

    while(!q.empty()) {
        int curr = q.front();

        for (int vet: t[curr]) {
            if (dist[vet] < 0) {
                q.push(vet);
                dist[vet] = dist[curr] + 1;

                if (dist[vet] > max) {
                    max = dist[vet];
                    vet_max = vet;
                }
            }
        }
        q.pop();
    }

    return {max, vet_max};
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, a, b;
    cin >> n;
    
    for (int i = 1; i < n; i++) {
        cin >> a >> b;
        t[a].push_back(b);
        t[b].push_back(a);
    }

    cout << bfs(bfs(1).second).first << endl;

    return 0;
}