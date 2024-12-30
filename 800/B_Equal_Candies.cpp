#include <iostream>

using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int m = INT_MAX;
    int *a = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        a[i] = k;

        if (k < m) m = k;
    }

    int s = 0;

    for (int i = 0; i < n; i++)
    {
        s += a[i] - m;
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