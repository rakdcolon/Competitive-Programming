#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

void solve() 
{
    string s;
    cin >> s;

    if (s[0] > 96) s[0] = s[0] - 32;

    cout << s;
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
