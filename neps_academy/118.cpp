#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string laugh, vowels = "";

    cin >> laugh;

    for (int i = 0; i < laugh.size(); i++)
        if (laugh[i]=='a' || laugh[i]=='e' || laugh[i]=='i' || laugh[i]=='o' || laugh[i]=='u')
            vowels += laugh[i];
    
    int size = vowels.size();
    bool is_funny = true;

    for (int i = 0; i < size; i++)
        if (vowels[i] != vowels[size-i-1]) {
            is_funny = false;
            break;
        }
    
    cout << (is_funny ? "S" : "N") << endl;

    return 0;
}