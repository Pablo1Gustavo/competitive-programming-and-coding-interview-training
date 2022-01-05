#include <bits/stdc++.h>
using namespace std;

vector<int> cities[100001], main_cities;
bool visited[100001];

void bfs(int i) {
    if (visited[i])
        return;
    visited[i] = true;

    for (int j = 0; j < cities[i].size(); j++)
        bfs(cities[i][j]);
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        cities[a].push_back(b);
        cities[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            bfs(i);
            main_cities.push_back(i);
        }
    }

    cout << main_cities.size()-1 << endl;

    for (int i = 0; i < main_cities.size()-1; i++)
        cout << main_cities[i] << " " << main_cities[i+1] << endl;

    return 0;
}