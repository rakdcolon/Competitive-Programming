#include <iostream>

using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int p = 0;
    int m = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p += b - a;

        if (p > m) m = p;
    }

    cout << m;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}