#include <bits/stdc++.h>
using namespace std;

int solve(int case_) {

    cout << "Case #" << case_ << ": ";

    string s;
    cin >> s;

    int level = 0, diff;

    for (int i = 0; i < s.size(); i++) {

        diff = abs(s[i]-'0' - level);

        if (level < s[i]-'0') {
            for (int j = 0; j < diff; j++)
                cout << "(";
            level += diff;

        } else if (level > s[i]-'0') {
            for (int j = 0; j < diff; j++)
                cout << ")";
            level -= diff;
        }

        cout << s[i];
    }

    while (level--)
        cout << ")";
    
    cout << endl;

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