#include <iostream>

using namespace std;

void solve() 
{
    int n, k;
    cin >> n;
    cin >> k;

    while (true)
    {
        int m = n % 10;

        if (k <= m)
        {
            cout << n-k;
            return;
        }
        else
        {
            k -= m + 1;
            n = n / 10;
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}