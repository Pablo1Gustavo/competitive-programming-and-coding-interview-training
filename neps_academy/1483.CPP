#include <bits/stdc++.h>
using namespace std;

int receivedTime[101], totalTime[101];
bool wasReplied[101];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, x, time = 0;
    char operation;

    cin >> n;

    set<int> participants;

    while(n--) {
        cin >> operation >> x;

        if (operation == 'R') 
        {
            receivedTime[x] = time;
            wasReplied[x] = false;

            participants.insert(x);
        }
        else if (operation == 'E')
        {
            totalTime[x] += time - receivedTime[x];

            receivedTime[x] = 0;
            wasReplied[x] = true;
        }

        if (operation == 'T')
            time += x - 1;
        else
            time++;
    }

    for(int participant: participants)
        cout << participant << " " <<
        (
            !wasReplied[participant] ? 
                -1
            : 
                totalTime[participant]
        ) 
        << endl;

    return 0;
}