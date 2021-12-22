#include <bits/stdc++.h>
using namespace std;

typedef complex<long long int> P;
#define X real()
#define Y imag()

#define MAXN 1010

P polygn[MAXN];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    long long int n, xi, yi, area = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> xi >> yi;
        polygn[i] = {xi, yi};
    }

    for (int i = 0; i < n; i++)
        area += polygn[i].X * polygn[(i+1) % n].Y - polygn[(i+1) % n].X * polygn[i].Y;

    cout << abs(area) << endl;

    return 0;
} 