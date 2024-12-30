#include <iostream>

using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int c0 = 0;
    int c1 = 0;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        int p = i % 2;

        if (k % 2 != p && p == 0) c0++;
        else if (k % 2 != p) c1++;
    }

    if (c0 == c1) cout << (c0 + c1) / 2 << endl;
    else cout << -1 << endl;
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