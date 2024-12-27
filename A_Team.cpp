#include <iostream>

using namespace std;

void solve() 
{
    int a = 0;
    int m;
    cin >> m;

    for (int r = 0; r < m; r++)
    {
        int p = 0;

        for (int c = 0; c < 3; c++)
        {
            int rc;
            cin >> rc;
            p += rc;
        }

        if (p >= 2) a++;
    }

    cout << a;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int testCases = 1;

    for (int test = 1; test <= testCases; test++) 
    {
        solve();
    }
}