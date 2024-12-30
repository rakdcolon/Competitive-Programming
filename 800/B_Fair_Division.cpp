#include <iostream>

using namespace std;

void solve() 
{
    int n;
    cin >> n;
    bool b = false;
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        if (k == 1) b = true;
        s += k;
    }

    if      (b && s % 2 == 0) cout << "YES" << endl;
    else if (b)               cout << "NO" << endl;
    else if (s % 4 == 0)      cout << "YES" << endl;
    else                      cout << "NO" << endl;
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