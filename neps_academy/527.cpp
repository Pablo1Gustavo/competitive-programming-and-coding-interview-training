#include <bits/stdc++.h>
using namespace std;

int st[1001][1001], n, m;
bool visited[1001][1001];
int move_l[4] = {1, -1, 0, 0};
int move_c[4] = {0, 0, 1, -1};

void fill(int l, int c) {
    visited[l][c] = true;

    for (int i = 0; i < 4; i++) {
        int l_ = l + move_l[i], c_ = c + move_c[i];
        if (l_ >= 0 && l_ < n && c_ >= 0 && c_ < m && st[l_][c_] == 1 && !visited[l_][c_])
            fill(l_, c_);
    }
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int count = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> st[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (st[i][j] == 1 && !visited[i][j]) {
                fill(i, j);
                count++;
            }

    cout << count << endl;

    return 0;
}