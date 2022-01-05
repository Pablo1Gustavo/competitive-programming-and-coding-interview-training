#include <bits/stdc++.h>
using namespace std;

char mp[1001][1001];
bool visited[1001][1001];
int n, m;

void dfs(int i, int j) {
    if (visited[i][j])
        return;
    visited[i][j] = true;

    if (i-1 >= 0 && mp[i-1][j] == '.')
        dfs(i-1, j);
    if (i+1 < n && mp[i+1][j] == '.')
        dfs(i+1, j);
    if (j-1 >= 0 && mp[i][j-1] == '.')
        dfs(i, j-1);
    if (j+1 < m && mp[i][j+1] == '.')
        dfs(i, j+1);
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> n >> m;
    int resp = 0;

    for (int i = 0; i < n; i++)
        cin >> mp[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mp[i][j] == '.' && !visited[i][j]) {
                resp++;
                dfs(i, j);
            }

    cout << resp << endl;

    return 0;
}