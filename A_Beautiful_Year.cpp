#include <iostream>

using namespace std;

bool isDistinct(int x)
{
    int a = x % 10;
    int b = (x / 10) % 10;
    int c = (x / 100) % 10;
    int d = x / 1000;

    if (a == b || a == c || a == d) return false;
    if (b == c || b == d) return false;
    if (c == d) return false;
    return true;
}

void solve() 
{
    int n;
    cin >> n;

    while (!isDistinct(++n)) {}

    cout << n;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    solve();
}