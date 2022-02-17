#include <bits/stdc++.h>
using namespace std;

int dist[5001][5001];

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string n, m;
    cin >> n >> m;

    int n_length = n.length(), m_length = m.length();

    for (int i = 0; i <= n_length; i++)
        for (int j = 0; j <= m_length; j++) {
            if (i == 0)
                dist[i][j] = j;
            else if (j == 0)
                dist[i][j] = i;
            else if (n[i-1] == m[j-1])
                dist[i][j] = dist[i-1][j-1];
            else
                dist[i][j] = 1 + min(
                        min(dist[i][j-1], dist[i-1][j]), 
                        dist[i-1][j-1]
                    );
        }

    cout << dist[n_length][m_length] << endl;

    return 0;
}