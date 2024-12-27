#include <iostream>

using namespace std;

void solve() 
{
    int n, k;
    cin >> n;
    cin >> k;

    int o = 0;
    int stopper = 0;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        if (n == k && t > 0) stopper = t;
        if (t >= stopper) o++;
    }

    cout << o;
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