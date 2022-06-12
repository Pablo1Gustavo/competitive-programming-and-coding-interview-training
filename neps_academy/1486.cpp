#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, x, ans = 0;
    cin >> n;

    vector<int> numbers;

    while(n--) {
        cin >> x;
        if (x == 0)
            numbers.pop_back();
        else
            numbers.push_back(x);
    }

    for(int i = 0; i < numbers.size(); i++)
        ans += numbers[i];

    cout <<  ans << endl;
    return 0;
}