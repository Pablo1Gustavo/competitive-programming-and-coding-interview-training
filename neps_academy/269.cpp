#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    for(int i = 2; i*i <= x; i++)
        if (!(x % i))
            return false;

    return true;
}

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 2; i <= n; i++)
        if (isPrime(i))
            cout << i << " ";

    cout << endl;
    return 0;
}