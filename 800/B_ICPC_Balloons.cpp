#include <iostream>

using namespace std;

void solve() 
{
    int n;
    string s;
    cin >> n >> s;

    int a[26] = {0};
    int sum = 0;

    for (char c : s)
    {
        int j = c - 'A';

        if (a[j] == 0) 
        {
            a[j]++; sum++;
        }

        a[j]++;
        sum++;
    }

    cout << sum << endl;
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