#include <iostream>

using namespace std;

void solve() 
{
    long long a;
    cin >> a;
    int ln = 0;

    while (a > 0)
    {
        int m = a % 10;
        if (m == 4 || m == 7) ln++;
        a /= 10;
    }

    while (ln > 0)
    {
        int m = ln % 10;
        if (m != 4 && m != 7)
        {
            cout << "NO";
            return;
        }
        ln /= 10;
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