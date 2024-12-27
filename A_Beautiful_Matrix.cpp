#include <iostream>

using namespace std;

void solve() 
{
    for (int i = 0; i < 25; i++)
    {
        int c;
        cin >> c;

        if (c == 1)
        {
            int x = i / 5;
            int y = i % 5;

            cout << abs(x - 2) + abs (y - 2);
            break;
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int tc = 1;

    for (int t = 1; t <= tc; t++) 
    {
        solve();
    }
}