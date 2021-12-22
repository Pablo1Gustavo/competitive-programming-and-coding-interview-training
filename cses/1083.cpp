#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int e;
    long long int n, sum = 0;
    cin >> n;

    for(int i = 1; i < n; i++) {
        cin >> e;
        sum += e;
    }

    cout << n*(n+1)/2 - sum << endl; 

    return 0;
}