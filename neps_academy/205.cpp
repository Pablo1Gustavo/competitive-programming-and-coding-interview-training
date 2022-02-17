#include <bits/stdc++.h>
using namespace std;

int n, f;
int c[100001];

int total_c(int days) {
    int result = 0;

    for (int i = 0; i < n; i++)
        result += days/c[i];

    return result;
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin >> n >> f;

    for (int i = 0; i < n; i++)
        cin >> c[i];

    int l = 1, h = 100000000, mid;
    
    while (l < h) {
        mid = (l+h)/2;

        if (total_c(mid) >= f)
            h = mid;
        else
            l = mid + 1;
    }

    cout << l << endl;

    return 0;
}