#include <iostream>

using namespace std;

void solve() 
{
    string w;
    cin >> w;

    int l = w.length();

    if (l <= 10) 
    {
        cout << w << endl;
    }
    else
    {
        cout << w[0] << l - 2 << w[l-1] << endl;
    }
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int testCases;
    cin >> testCases;

    for (int test = 1; test <= testCases; test++) 
    {
        solve();
    }
}