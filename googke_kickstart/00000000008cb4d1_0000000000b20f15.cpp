#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string password;
    cin >> password;

    pair<bool, char> checks[4] = {
        make_pair(false, 'A'),
        make_pair(false, 'a'),
        make_pair(false, '1'),
        make_pair(false, '*')
    };

    for(int i = 0; i < n; i++) {
        if( isupper(password[i]) )
            checks[0].first = true;

        else if( islower(password[i]) )
            checks[1].first = true;

        else if( isdigit(password[i]) )
            checks[2].first = true;

        else if(password[i] == '#' || password[i] == '@' || password[i] == '*' || password[i] == '&')
            checks[3].first = true;
    }

    cout << password;

    for(int i = 0; i < 4; i++)
        if(!checks[i].first) {
            cout << checks[i].second;
            n++;
        }

    for(int i = 0; i < max(0, 7 - n); i++)
        cout << '1';

    cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t, testCase = 1;
    cin >> t;

    while(t--) {
        cout << "Case #" << testCase++ << ": ";
        solve();
    }

    return 0;
}