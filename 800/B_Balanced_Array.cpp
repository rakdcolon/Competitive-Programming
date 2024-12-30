#include <iostream>

using namespace std;

void solve() 
{
    int n;
    cin >> n;

    if (n % 4 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    for (int i = 1; i <= n / 2; i++)
    {
        cout << (i * 2) << " ";
    }

    for (int i = 0; i < n / 2 - 1; i++)
    {
        cout << (i * 2 + 1) << " ";
    }

    cout << (3 * n / 2 - 1) << endl;
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