#include <bits/stdc++.h>
using namespace std;

char wall[501][501];
int n, m;

void dfs(int r, int c) {
    wall[r][c] = 'o';

    if(wall[r + 1][c] == '.')
        dfs(r + 1, c);
    if(wall[r][c - 1] == '.' && wall[r + 1][c] == '#')
        dfs(r, c - 1);
    if(wall[r][c + 1] == '.' && wall[r + 1][c] == '#')
        dfs(r, c + 1);
}

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> n >> m;
    
    int firstDropR, firstDropC;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            cin >> wall[i][j];

            if(wall[i][j] == 'o')
                firstDropR = i, firstDropC = j;
        }

    dfs(firstDropR, firstDropC);

    for(int i = 0; i < n; i++)
        cout << wall[i] << endl;

    return 0;
}