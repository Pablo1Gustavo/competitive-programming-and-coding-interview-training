#include <bits/stdc++.h>
using namespace std;

#define MAXN 110

char d_to_b[10][3][3] = {
    {".*", "**", ".."},
    {"*.", "..", ".."},
    {"*.", "*.", ".."},
    {"**", "..", ".."},
    {"**", ".*", ".."},
    {"*.", ".*", ".."},
    {"**", "*.", ".."},
    {"**", "**", ".."},
    {"*.", "**", ".."},
    {".*", "*.", ".."}
};

char b_to_d[MAXN][3][3], message[MAXN];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    char op;

    while (1) {
        cin >> n;
        if (n == 0) break;
        
        cin >> op;

        if (op == 'S') {
            cin >> message;
            
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < n; j++) {
                    cout << d_to_b[ message[j]-'0' ][i] << (j<n-1?" ":"");
                }
                cout << endl;
            }
        } else {
            for (int i = 0; i < 3; i ++)
                for (int j = 0; j < n; j++)
                    cin >> b_to_d[j][i];
            
            for (int i = 0; i < n; i++)
                for ( int j = 0; j <= 9; j++)
                    if ( !strcmp(b_to_d[i][0], d_to_b[j][0]) && !strcmp(b_to_d[i][1], d_to_b[j][1]) )
                        cout << j;

            cout << endl;            
        }
    }

    return 0;
}