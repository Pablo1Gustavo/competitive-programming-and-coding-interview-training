#include <bits/stdc++.h>
using namespace std;

char tab[101][101];
bool visited[101][101];
int move_l[4] = {1, -1, 0, 0};
int move_c[4] = {0, 0, 1, -1};
int n, m;

bool is_ship_broken(int l, int c){
    queue<pair<int, int>> q;
    q.push({l, c});

    visited[l][c] = true;

    bool is_broken = true;

    while(!q.empty()) {
        pair<int, int> now = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int l_ = now.first + move_l[i], c_ = now.second + move_c[i];

            if (l_ >= 0 && l_ < n && c_ >= 0 && c_ < m && !visited[l_][c_] && tab[l_][c_] != '.') {
                if (tab[l_][c_] == '#')
                    is_broken = false;

                visited[l_][c_] = true;
                q.push({l_, c_});
            }
        }
    }

    return is_broken;
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int k, l, c, ans = 0;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
            cin >> tab[i];

    cin >> k;

    while(k--){
        cin >> l >> c;
        if (tab[l-1][c-1] == '#')
            tab[l-1][c-1] = 'x';
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (tab[i][j] == 'x' && !visited[i][j] && is_ship_broken(i, j))
                ans++;

    cout << ans << endl;

    return 0;
}