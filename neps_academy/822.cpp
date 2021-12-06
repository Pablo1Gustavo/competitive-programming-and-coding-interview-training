#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int d;
    cin >> d;

    int result = (d-3)%8;

    if (result==3)
        cout << "1\n";
    else if (result==4)
        cout << "2\n";
    else
        cout << "3\n";

    return 0;
}