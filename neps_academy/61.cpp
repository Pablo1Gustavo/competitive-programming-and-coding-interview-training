#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s;
    cin >> s;

    size_t s_[s.size()];

    for (size_t i = 0; i < s.size(); i++)
        s_[i] = s[i] - 'A';

    vector<int> stack;

    for(size_t i = 0; i < s.size(); i++) {
        vector<int>::iterator it = upper_bound(stack.begin(), stack.end(), s_[i]);
        if (it == stack.end())
            stack.push_back(s_[i]);
        else
            *it = s_[i];
    }

    cout << stack.size() << endl;

    return 0;
}