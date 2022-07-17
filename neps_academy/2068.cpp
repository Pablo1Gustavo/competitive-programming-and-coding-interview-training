#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, r, c, value, squareSum = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++) {
            cin >> value;
            squareSum += value;

            if (value == 0) {
                r = i + 1;
                c = j + 1;
            }
        }

    cout << (n*n + n*n*n*n)/2 - squareSum << endl;
    cout << r << endl;
    cout << c << endl; 
    return 0;
}