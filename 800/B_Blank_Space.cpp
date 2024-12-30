#include <iostream>
#include <set>

using namespace std;

void solve() 
{
    int n;
    cin >> n;

    int m = 0;
    int c = 0;
    
    while (n--)
    {
        bool k;
        cin >> k;

        if (!k) c++;
        else
        {
            if (m < c) m = c;
            c = 0;
        }
    }

    if (m < c) m = c;
    
    cout << m << endl;
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