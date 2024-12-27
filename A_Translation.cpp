#include <iostream>

using namespace std;

void solve() 
{
    string a, b;
    cin >> a;
    cin >> b;

    int m = a.length();
    int n = b.length();

    if (m != n)
    {
        cout << "NO";
        return;
    }

    for (int i = 0; i < m; i++)
    {
        if (a[i] != b[m-i-1])
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}