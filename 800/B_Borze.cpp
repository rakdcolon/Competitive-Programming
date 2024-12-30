#include <iostream>

using namespace std;

void solve() 
{
    string s, a;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if      (s[i] == '.')   a.push_back('0');
        else if (s[++i] == '.') a.push_back('1');
        else                    a.push_back('2');
    }

    cout << a;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}