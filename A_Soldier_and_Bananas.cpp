#include <iostream>

using namespace std;

void solve() 
{
    int k, w, n;
    cin >> k;
    cin >> n;
    cin >> w;

    int a = k * w * (w+1) / 2 - n;

    if (a < 0) cout << 0;
    else cout << a;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}