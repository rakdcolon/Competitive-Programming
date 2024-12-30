#include <iostream>
#include <math.h>

using namespace std;

void solve() 
{
    int s = 0;

    for (int i = 0; i < 100; i++)
    {
        char c;
        cin >> c;

        if (c == '.') continue;

        int x = i % 10;
        int y = i / 10;

        int dx = (x < 5) ? x+1 : 10-x;
        int dy = (y < 5) ? y+1 : 10-y;

        s += (dx > dy) ? dy : dx;
    }

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int tc;
    cin >> tc;

    for (int t = 0; t < tc; t++)
    {
        solve();
    }
}