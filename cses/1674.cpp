#include <bits/stdc++.h>
using namespace std;

vector<int> t[200001];
int subs[200001];

void dfs(int emp) {
    for (int sub: t[emp]) {
        dfs(sub);
        subs[emp] += subs[sub] + 1;
    }
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, boss;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        cin >> boss;
        t[boss].push_back(i);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
        cout << subs[i] << " ";
    
    cout << endl;

    return 0;
}