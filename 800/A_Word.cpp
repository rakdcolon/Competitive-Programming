#include <iostream>

using namespace std;

void solve() 
{
    string s;
    cin >> s;

    int l = s.length();
    int u = 0;

    for (int i = 0; i < l; i++)
    {
        if (s[i] < 96) u++;
        else u--;
    }

    if (u > 0)
    {
        for (int i = 0; i < l; i++)
        {
            if (s[i] > 96) s[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; i < l; i++)
        {
            if (s[i] < 96) s[i] += 32;
        }
    }

    cout << s;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}