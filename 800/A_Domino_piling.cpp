#include <iostream>

using namespace std;

void solve() 
{
    int m, n;
    cin >> m;
    cin >> n;

    cout << (m * n) / 2;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int testCases = 1;

    for (int test = 1; test <= testCases; test++) 
    {
        solve();
    }
}