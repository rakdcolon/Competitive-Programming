#include <iostream>
#include <set>

using namespace std;

void solve() 
{
    int n;
    cin >> n;

    set<long> s;

    bool a = true;

    for (int i = 0; i < n; i++)
    {
        long k;
        cin >> k;

        if (s.count(k)) a = false;
        s.insert(k);
    }

    cout << ((a) ? "YES" : "NO") << endl;
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