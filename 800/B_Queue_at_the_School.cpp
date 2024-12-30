#include <iostream>

using namespace std;

void solve() 
{
    int n, t;
    string s;
    cin >> n >> t >> s;

    while (t--)
    {
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G'; s[i + 1] = 'B'; i++;
            }
        }
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