#include <iostream>

using namespace std;

void solve() 
{
    string a, b;
    cin >> a;
    cin >> b;

    int l = a.length();

    for (int i = 0; i < l; i++)
    {
        int ca = tolower(a[i]);
        int cb = tolower(b[i]);

        if (ca > cb) 
        {
            cout << 1;
            return;
        }
        else if (ca < cb)
        {
            cout << -1;
            return;
        }
    }
    cout << 0;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int tc = 1;

    for (int t = 1; t <= tc; t++) 
    {
        solve();
    }
}