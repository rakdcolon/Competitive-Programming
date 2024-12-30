#include <iostream>
#include <set>

using namespace std;

void solve() 
{
    string s = "";

    for (int i = 0; i < 64; i++)
    {
        char c;
        cin >> c;

        if (c != '.')
        {
            s += c;
        }
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