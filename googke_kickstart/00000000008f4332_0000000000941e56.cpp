#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t, n, c, h;

    cin >> t;

    for (int test = 1; test <= t; test++) {
        cin >> n;
        cout << "Case #" << test << ": ";

        vector<int> papers;
        h = 0;

        for (int i = 0; i < n; i++) {
            cin >> c;
            papers.insert(upper_bound(papers.begin(), papers.end(), c, greater<int>()), c);

            if (papers[h] > h)
                h++;

            cout << h << " ";
        }

        cout << endl;
    }

    return 0;
}