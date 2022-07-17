#include <bits/stdc++.h>
using namespace std;

bool isPrime[10000001];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    memset(isPrime, true, sizeof(isPrime));
    
    int n;
    cin >> n;

    for(int i = 2; i <= n; i++)
        if (isPrime[i]) {
            cout << i << " ";

            for(int j = 2*i; j <= n; j += i)
                isPrime[j] = false;
        }

    cout << endl;
    return 0;
}