#include <iostream>

using namespace std;

void solve() 
{
    int n, k;
    cin >> n >> k;

    int *a = (int *) malloc(n * sizeof(int));
    int *b = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n, greater<int>());

    int s = 0;

    for (int i = 0; i < n; i++)
    {
        if (i < k && a[i] < b[i]) s += b[i];
        else s += a[i];
    }

    cout << s << endl;
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