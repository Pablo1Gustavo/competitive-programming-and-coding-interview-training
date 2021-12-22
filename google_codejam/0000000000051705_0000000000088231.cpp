#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t, case_ = 1;
    string n, other;
    cin >> t;

    while (t--) {
        cin >> n;

        cout << "Case #" << case_++ << ": ";

        for (int i = 0; i < n.size(); i++) {
            cout << (n[i] == '4' ? '3' : n[i]);
            other += n[i] == '4' ? "1" : (other.size() > 0 ? "0" : "");
        }
        
        cout << " " << other << endl;
        other = "";
    }

    return 0;
}