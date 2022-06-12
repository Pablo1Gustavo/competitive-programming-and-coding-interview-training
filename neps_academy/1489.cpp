#include <bits/stdc++.h>
using namespace std;

int cards[4];
bool checked[4][13];

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string cardString;
    cin >> cardString;

    int number, suit;

    for(int i = 0; i < cardString.size() - 2; i += 3) {
        number = (cardString[i]-'0')*10 + cardString[i+1]-'0';

        if (cardString[i+2] == 'C') 
            suit = 0;
        else if (cardString[i+2] == 'E') 
            suit = 1;
        else if (cardString[i+2] == 'U')
            suit = 2;
        else
            suit = 3;

        if (checked[suit][number])
            cards[suit] = -1;
        else if (cards[suit] >= 0)
        {
            cards[suit]++;
            checked[suit][number] = true;
        }
    }

    for(int i = 0; i < 4; i++)
        if (cards[i] < 0)
            cout << "erro\n";
        else
            cout << 13 - cards[i] << endl;

    return 0;
}