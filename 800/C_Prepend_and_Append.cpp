#include <iostream>
#include <set>

using namespace std;

void solve() 
{
    int n;
    string s;
    cin >> n >> s;

    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            l++;
            r--;
        }
        else
        {
            break;
        }
    }
    cout << r-l+1 << endl;
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