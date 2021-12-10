#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, m, value;
    queue<int> a, b;
    vector<int> c;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> value;
        a.push(value);
    }
    for (int i = 0; i < m; i++) {
        cin >> value;
        b.push(value);
    }

    while (!(a.empty() && b.empty())) {

        if (a.empty()) {
            c.push_back(b.front());
            b.pop();
        } else if (b.empty()) {
            c.push_back(a.front());
            a.pop();
        } else {
            if (b.front() < a.front()) {
                c.push_back(b.front());
                b.pop();
            } else {
                c.push_back(a.front());
                a.pop();
            }
        }
    }

    for (int i = 0; i < n+m; i++)
        cout << c[i] << endl;

    return 0;
}