#include <iostream>

using namespace std;

void solve() 
{
    int n;
    cin >> n;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        c += a;
    }

    cout << (1.0) * c / n;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}