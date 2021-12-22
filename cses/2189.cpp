#include <bits/stdc++.h>
using namespace std;

typedef complex<long long int> P;
#define X real()
#define Y imag()

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t;
    long long int x1, y1, x2, y2, x3, y3, cross;
    cin >> t;

    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        P a = {x1, y1};
        P b = {x2, y2};
        P p = {x3, y3};

        cross = (conj(p-a)*(p-b)).Y;

        if (cross > 0)
            cout << "LEFT\n";
        else if (cross < 0)
            cout << "RIGHT\n";
        else
            cout << "TOUCH\n";
    }

    return 0;
} 