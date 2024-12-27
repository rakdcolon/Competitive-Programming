#include <iostream>

using namespace std;

void solve() 
{
    int n, t;
    string s;
    cin >> n >> t >> s;

    if (n == 1)
    {
        cout << s;
        return;
    }

    int l = 0;
    int r = 1;

    while (r < n)
    {
        char a = s[l];
        char b = s[r];

        if (a == 'B' && b == 'G')
        {
            s[l] = b;
            s[r] = a;
            l++;
        }

        if (r - l == t)
        {
            l++;
        }

        r++;
    }

    cout << s;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}