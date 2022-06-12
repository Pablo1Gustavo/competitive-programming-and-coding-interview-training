#include <bits/stdc++.h>
using namespace std;

map<char, int> lettersA;
map<char, int> lettersB;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++) {
        lettersA[a[i]]++;
        lettersB[b[i]]++;
    }

    int joker = lettersB['*'];
    int currA, currB;

    for(int i = 0; i < a.size(); i++) {
        currA = lettersA[a[i]];
        currB = lettersB[a[i]];

        if (currB < currA && joker >= currA - currB) {
            joker -= currA - currB;
            lettersB[a[i]] += currA - currB;
        }
        else if (currB < currA) {
            cout << "N\n" << endl;
            return 0;
        }
    }

    cout << "S\n";
    return 0;
}