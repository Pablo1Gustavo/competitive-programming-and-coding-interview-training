#include <bits/stdc++.h>
using namespace std;

int m[101][101];

int solve(int case_) {
    int n, k = 0, r = 0, c = 0;
    cin >> n;

    map<pair<int, int>, int> rows, columns;
    int v_row[n] = {false}, v_column[n] = {false};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];

            if (i == j)
                k += m[i][j];
            if (++rows[{i, m[i][j]}] > 1 && !v_row[i]) {
                r++;
                v_row[i] = true;
            }
            if (++columns[{j, m[i][j]}] > 1 && !v_column[j]) {
                c++;
                v_column[j] = true;
            }
        }

    cout << "Case #" << case_ << ": " << k << " " << r << " " << c << endl;

    return 0;
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t, case_ = 1;
    cin >> t;

    while (t--)
        solve(case_++);

    return 0;
}