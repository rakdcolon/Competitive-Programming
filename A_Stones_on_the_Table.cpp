#include <iostream>

using namespace std;

void solve() 
{
    int l;
    cin >> l;

    string s;
    cin >> s;

    char prev = s[0];

    int o = 0;

    for (int i = 1; i < l; i++)
    {
        char curr = s[i];

        if (curr == prev) o++;

        prev = curr;
    }

    cout << o;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}
