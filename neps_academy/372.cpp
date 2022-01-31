#include <bits/stdc++.h>
using namespace std;

char skin[1001][1001];

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, changes = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> skin[i];
    
    for (int i = 0; i < n; i++) {
        if (skin[i][0] == '*')
            changes++;

        for (int j = 1; j < n; j++)
            if (skin[i][j] != skin[i][j-1])
                changes++;

        if (changes > 2)
            break;
        changes = 0;
    }
    if (changes == 0) {
        for (int j = 0; j < n; j++) {
            if (skin[0][j] == '*')
                changes++;

            for (int i = 1; i < n; i++)
                if (skin[i][j] != skin[i-1][j])
                    changes++;
                    
            if (changes > 2)
                break;
            changes = 0;
        }
    }

    cout << (changes == 0 ? "S\n" : "N\n");

    return 0;
}