#include <iostream>
#include <math.h>

using namespace std;

void solve() 
{
    int n;
    cin >> n;

    long long s = 0;

    while (n--)
    {
        long long k;
        cin >> k;
        s += k;
    }

    long long sq = sqrt(s);
    cout << ((sq * sq == s) ? "YES" : "NO") << endl;
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