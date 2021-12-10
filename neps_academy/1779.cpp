#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, count = 0;
    string s;

    cin >> n >> s;

    for (int i = 0; i < n; i++)
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            count++;
    
    cout << count << endl;

    return 0;
}