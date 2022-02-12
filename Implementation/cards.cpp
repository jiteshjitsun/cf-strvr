#include <bits/stdc++.h>
using namespace std;

int main()
{
    string tab;
    cin >> tab;
    vector<string> hand(5);
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> hand[i];
        if (hand[i][0] == tab[0] || hand[i][1] == tab[0] || hand[i][0] == tab[1] || hand[i][1] == tab[1])
        {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No" << endl;
    }
}