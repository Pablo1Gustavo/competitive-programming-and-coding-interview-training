#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int victories = 0;
    char v;

    for(int i = 0; i < 6; i++) {
        cin >> v;

        if(v == 'V')
            victories++;
    }

    if (victories == 0)
        cout << "-1\n";
    else if(victories < 3)
        cout << "3\n";
    else if(victories < 5)
        cout << "2\n";
    else
        cout << "1\n";

    return 0;
}