#include <bits/stdc++.h>
using namespace std;

int moves_x[8] = {2, -2, 1, -1, 2, -2, 1, -1};
int moves_y[8] = {1, -1, 2, -2, -1, 1, -2, 2};

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int kx, ky, qx, qy, hx, hy, resp = 0;
    cin >> kx >> ky >> qx >> qy;
    cin >> hx >> hy;

    if (kx == qx && abs(ky-qy) == 1 || ky == qy && abs(kx-qx) == 1 || abs(kx-qx) == 1 && abs(ky-qy) == 1)
        for (int i = 0; i < 8; i++)
            if (hx+moves_x[i] == kx && hy+moves_y[i] == ky || hx+moves_x[i] == qx && hy+moves_y[i] == qy)
                resp = 1;

    cout << resp << endl;

    return 0;
}