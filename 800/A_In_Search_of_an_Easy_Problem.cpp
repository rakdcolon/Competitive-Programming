#include <iostream>

using namespace std;

void solve() 
{
    int n, r;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> r;
        if (r == 1) 
        {
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}