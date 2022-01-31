#include <bits/stdc++.h>
using namespace std;

char farm[251][251];
bool visited[251][251];
int move_x[] = {1, -1, 0, 0};
int move_y[] = {0, 0, 1, -1};
int r, c, total_wolves = 0, total_sheeps = 0;

void bfs (int i, int j) {
    int wolves = 0, sheeps = 0;
    bool can_escape = false;

    visited[i][j] = true;
    
    queue<pair<int,int>> q;
    q.push({i, j});

    while (!q.empty()) {
        i = q.front().first;
        j = q.front().second;
        q.pop();

        if (farm[i][j] == 'k')
            sheeps++;
        else if (farm[i][j] == 'v')
            wolves++;

        for (int k = 0; k < 4; k++) {
           int i_ = i + move_x[k], j_ = j + move_y[k];

            if (i_ < 0 || j_ < 0 || i_ >= r || j_ >= c)
                can_escape = true;
            else if (farm[i_][j_] != '#' && !visited[i_][j_]) {
                visited[i_][j_] = true;
                q.push({i_, j_});
            }
        }
    }
    
    if (!can_escape)
        if (sheeps > wolves)
            total_sheeps += sheeps;
        else
            total_wolves += wolves;
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> r >> c;

    for (int i = 0; i < r; i ++)
        cin >> farm[i];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (!visited[i][j] && farm[i][j] != '#')
                bfs(i, j); 


    cout << total_sheeps << " " << total_wolves << endl;

    return 0;
}