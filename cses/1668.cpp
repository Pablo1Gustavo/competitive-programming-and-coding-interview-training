#include <bits/stdc++.h>
using namespace std;
 
vector<int> f[100001];
int teams[100001];
bool is_impossible;
 
void dfs(int i, int team) {
    if (teams[i] > 0) {
        if (teams[i] != team)
            is_impossible = true;
        return;
    }
    teams[i] = team;
 
    for (int j = 0; j < f[i].size(); j++)
        dfs(f[i][j], team%2+1);
}
 
int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 
    int n, m, a, b;
    cin >> n >> m;
 
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        f[a].push_back(b);
        f[b].push_back(a);
    }
 
    for (int i = 1; i <= n; i++)
        if(teams[i] == 0) {
            dfs(i, 1);
            if (is_impossible)
                break;
        }
 
    if (is_impossible)
        cout << "IMPOSSIBLE";
    else
        for (int i = 1; i <= n; i++)
            cout << teams[i] << " ";
 
    cout << endl;
 
    return 0;
}