#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int v, n;
    cin >> v >> n;

    for (int i = 1; i < 10; i++)
        cout << (int)ceil(v*n*(i/10.0)) << " ";
    
    cout << endl;
}