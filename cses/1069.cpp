#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string dna;
    int size = 1, resp = 1;
    cin >> dna;

    for (int i = 1; i < dna.size(); i++) {
        if (dna[i]==dna[i-1])
            size++;
        else
            size = 1;
        resp = max(resp, size);
    }

    cout << resp << endl;

    return 0;
}