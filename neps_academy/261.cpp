#include <bits/stdc++.h>
using namespace std;

int prizes[100001], intervals[100001];
int n, m;

int prize(int o) {
    int l = 0, r = n-2, mid;

    while (l <= r) {
        mid = (l+r)/2;

        if (mid > 0 && mid < n-2 && intervals[mid] <= o && intervals[mid-1] > o)
            break;
        else if (intervals[mid] > o)
            r = mid - 1;
        else
            l = mid + 1;
    }

    return prizes[l];
}

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int o;
    cin >> n >> m;

    for (int i = 0; i < n-1; i++)
        cin >> intervals[i];
    for (int i = 0; i < n; i++)
        cin >> prizes[i];

    while (m--) {
        cin >> o;
        cout << prize(o) << " ";
    }

    cout << endl;

    return 0;
}