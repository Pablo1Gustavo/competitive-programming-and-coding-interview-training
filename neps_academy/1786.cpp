#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;

    char s[n];
    cin >> s;

    for(int i=0; i<n; ) {
        if(s[i]=='j' && s[i+1]=='o' && s[i+2]=='i'){
            cout << "JOI";
            i += 3;
        } else
            cout << s[i++];
    }

    cout << endl;

    return 0;
}