#include <iostream>

using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int m = 10;
    long long p = 1;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        if (k != 0 || m == 0) p *= k;

        if (k < m) m = k;
    }

    if (m == 0) cout << p << endl;
    else cout << p * (m + 1) / m << endl;
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